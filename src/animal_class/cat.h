#ifndef _cat_
#define _cat_
#include "animal.h"
class cat: public animal
{
private:
    /* data */
    string color;
public:
    void speak();
    using animal::animal;
    cat(/* args */string name ,string sextul,string color);
 
};



#endif