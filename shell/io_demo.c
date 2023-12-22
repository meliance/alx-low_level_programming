#include <stdio.h>

int main(void)
{
char f,m,l;
int age;
printf("enter your full name followed by your age:");
scanf("%c %c %c %d", &f , &m, &l, &age);
printf("my name is : %c%c%c and my age is %d.\n", f,m,l, age);
return(0);
}
