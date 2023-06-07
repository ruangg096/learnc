#include<iostream>
#include<vector>
#include"cat.h"
#include"dog.h"
#include"Lnode.h"


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
}

