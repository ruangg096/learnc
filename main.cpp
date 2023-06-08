#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    unsigned char s1[] = {72,101,108,108,111,33,0};
    unsigned char * p = s1;
    while(*p != '\0'){
        cout<<static_cast<char>(*p);
        p++;
    }
    cout<<endl;
}