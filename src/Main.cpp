#include<iostream>
#include<vector>
#include"animal_class/cat.h"
#include"animal_class/dog.h"
#include"data_struct/Lnode.h"
#include"useful_tools/useful_function.h"
#include "sort_sum/sort_sum.h"

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
    int index[10] = {4,5,6,2,4,6,74,2,2,5};
    bisort(index,0,9);
    for(int i=0;i<10;i++){
        printf("%d\n",index[i]);
    }
    
}

