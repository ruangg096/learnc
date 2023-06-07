#ifndef _dog_
#define _dog_
#include"animal.h"

class dog : public animal
{
private:
    /* data */
    bool if_fairy;
public:
    using animal::animal;
    void bark();
     dog(/* args */string name,string sexutl,bool if_fairy);
};

#endif