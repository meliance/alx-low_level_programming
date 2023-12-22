#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Function to tokenize a string based on a delimiter
void custom_tokenize(const char *str, char delimiter) {
    while (*str != '\0') {
        // Skip leading delimiters
        while (*str == delimiter) {
            str++;
        }

        // Break if end of string is reached
        if (*str == '\0') {
            break;
        }

        // Find the end of the token
        const char *end = str;
        while (*end != '\0' && *end != delimiter) {
            end++;
        }

        // Print the token
        printf("buffer custom_token: %.*s\n", (int)(end - str), str);

        // Move to the next token or the end of the string
        str = end;
    }
}

int main(void) {
    char *buffer = malloc(1024);
    size_t len = 1024;

    while (1) {
        printf("$ ");
        ssize_t read = getline(&buffer, &len, stdin);
        if (read == -1) {
            break;
        }

        printf("%s", buffer);

        // Tokenize the input line based on space (' ') as the delimiter
        custom_tokenize(buffer, ' ');
    }

    free(buffer);
    return 0;
}
