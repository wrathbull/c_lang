#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    while(true) {
        char str[0];
        printf("Введите str: ");
        scanf("%s", str);
        char buffer[50];
        char* s = str + 1;
        int len = snprintf(buffer, 6, "%s\n", s);

        char temp[len];
        for (int i=0; i<len; i++) {
            temp[len-i-1] = str[i];
        }
        temp[len+1] = '\0';
        printf("%s\n", temp);
    }
}