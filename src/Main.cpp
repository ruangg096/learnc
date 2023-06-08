#include<iostream>
#include<vector>
#include"animal_class/cat.h"
#include"animal_class/dog.h"
#include"data_struct/Lnode.h"
#include"useful_tools/useful_function.h"

int main(){
    Ltree_class L1;
    create_detailtree(&L1);
    char * A = "please tell me the name";
    L1.tree_head=L1.Lnode_fn->create_tree(A,10);
    Lnode * temp = L1.tree_head;
    while(temp){
        cout<<temp->A<<endl;
        temp=temp->next;
    }
    u8  string_temp[] = {72,101,108,108,111,33,0};
    printf_char(string_temp);
}

