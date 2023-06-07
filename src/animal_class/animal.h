#pragma once

#include<iostream>
#include<string>
using namespace std;
class animal
{
private:
    /* data */
    string name;
    string sextul ;
public:
    void sleep();
    void eat();
    animal(/* args */string name,string sextul);
    ~animal();
};


