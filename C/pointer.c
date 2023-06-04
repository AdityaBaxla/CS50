#include <stdio.h>

int main(void)
{
    //so we are storing string as pointer to char, which string basically is 
    char *s = "HI!";
    //so the string variable stores the pointer to the first character to the array[]
    char *p = &s[0];
    printf("%p\n", p);
    printf("%p\n", s);
}