#pragma once
#include<stdio.h>
typedef unsigned char u8;

inline void printf_char(u8 * s1){
    u8 *temp = s1;
    while (*temp != '\0')
    {
        printf("%c",*temp);
        temp++;
    }
    printf("\n"); 
}