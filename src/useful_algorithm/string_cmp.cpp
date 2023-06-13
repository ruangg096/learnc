#pragma once
#include "string_cmp.h"
#include <string.h>

int str_cmp1(char *s1, char *s2)
{
    int i = strlen(s1);
    int j = strlen(s2);
    if(i<=0||j<=0||i<j)return -1;
    int j_ptr=0;
    int index;
    for(int i_ptr=0;i_ptr<=i;i_ptr++){
        index=i_ptr;
        if(s1[i_ptr]==s2[j_ptr]){
            while(i_ptr<=i&&j_ptr<=j&&s1[i_ptr]==s2[j_ptr]){i_ptr++;j_ptr++;};
            if(j_ptr>j)return index;
            else if(i_ptr>i)return -1;
            else{
                 i_ptr=index;
                 j_ptr=0;
            } 
        }
    }
    return -1;
}

static void create_list(char *s2,int *a_list,int lenght){
    for(int i=0;i<lenght;i++){
        
    }
}

int str_cmp2(char *s1, char *s2)
{
    int i = strlen(s1);
    int j = strlen(s2);
    if(i<=0||j<=0||i<j)return -1;
    int j_ptr=0;
    int index;
    for(int i_ptr=0;i_ptr<i;i_ptr++){

    }
}
