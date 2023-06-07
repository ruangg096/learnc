#include"cat.h"


cat::cat(string name,string sexual,string color):animal(name,sexual),color(color){
    cout<<"the color of this cat is "<<color<<endl;
}

void cat::speak(){
    cout<<"miaowu"<<endl;
}
