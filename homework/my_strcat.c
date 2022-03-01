#include <stdio.h>
#include <stdlib.h>

char * mystrcat(char *s1 ,const char *s2) {
    char *p = s1;
    while (*s1)
    {
        s1++;
    }
    while (*s2)
    {
        *s1 = *s2;
        s1++;
        s2++;
    }
    *s1 = '\0';
    return p;
    
}

int main() {
    char str1[100] = "welcome ";
    char str2[] = "hello world";
    printf("%s\n",mystrcat(str1,str2));
    return 0;
}