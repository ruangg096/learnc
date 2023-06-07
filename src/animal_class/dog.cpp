#include"dog.h"
#define cat_born_arg(name,sextual,if_fairy) (if_fairy)?(cout<<"the"<<sextual<<" "<<name<<"fairy"<<endl):(cout<<"the"<<sextual<<" "<<name<<"unfairy"<<endl)

dog::dog(string name,string sextul, bool if_fairy):animal(name,sextul),if_fairy(if_fairy){
        cat_born_arg(name,sextul,if_fairy);
}

void dog::bark(){
    cout<<"wangwangwangwangwangwang"<<endl;
}