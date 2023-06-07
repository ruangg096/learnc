#include"animal.h"



animal::animal(string name,string sextul):name(name),sextul(sextul){
    cout<<"the"<<sextul<<" animal"<<name<<" born"<<endl;
}

void animal::eat(){
    cout<<"baji baji baji baji"<<endl;
}

void animal::sleep(){
    cout<<"zzzzzzzzzzzzzz"<<endl;
}

animal::~animal(){
    string name=this->name;
    cout<<name<<"died"<<", lets pray for it"<<endl;
}