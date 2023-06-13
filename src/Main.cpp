#include<iostream>
#include<vector>
#include"animal_class/cat.h"
#include"animal_class/dog.h"
#include"data_struct/Lnode.h"
#include"useful_tools/useful_function.h"
#include "sort_sum/sort_sum.h"
#include "useful_algorithm/useful_algorithm.h"
#include "useful_algorithm/string_cmp.h"

int main(){
    // Ltree_class L1;
    // create_detailtree(&L1);
    // char * A = "please tell me the name";
    // L1.tree_head=L1.Lnode_fn->create_tree(A,10);
    // Lnode * temp = L1.tree_head;
    
    // graph A1;
    // int a[][5]={{0,4,7,5,7},{3,0,3,5,7},{4,7,0,3,8},{3,9,2,0,3},{7,9,3,2,0}};
    // char *string1="abedg";
    // init_graph(&A1,string1,a,5);
    // vector<vector<char>> v1;
    // int small_number[5];
    // Dijstra(&A1,5,'d',v1,small_number);
    // for(int i=0;i<5;i++){
    //     cout<<small_number[i]<<endl;
    // }

    // for(int i=0;i<v1.size();i++){
    //     printf("\n");
    //     for(int j=0;j<v1[i].size();j++){
    //         printf("%c",v1[i][j]);
    //     }
    // }
    char *string1 = "ruangaogao say goodbye";
    char *string2 ="goodbye";
    printf("%d",str_cmp1(string1,string2));





}

