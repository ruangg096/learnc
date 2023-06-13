#include "useful_algorithm.h"

void Dijstra(graph *g1, int number, char A, vector<vector<char>> & v1,int *small_number)
{   
    int index;
    for(int i=0;i<g1->number;i++){
        if(g1->node[i]==A){
            index = i;
            break;
        }
    }

    int A_index = index;
    bool if_find[maxn];
    memset(small_number,ifinity,number*sizeof(int));
    memset(if_find,false,number*sizeof(bool));
    for(int i=0;i<number;i++){
        vector<char> v_temp;
        v_temp.push_back(A);
        v1.push_back(v_temp);
    }
    memcpy(small_number,g1->vec[index],sizeof(int)*number);
    
    int min_number;
    if_find[index]=true;
    int stand_by;
    for(int i=1;i<number;i++){
        min_number=ifinity;
        for(int i=0;i<number;i++){
            if(small_number[i]<=min_number&&!if_find[i]){
                min_number = small_number[i];
                stand_by = i;
            }
        }
        index=stand_by;
        if_find[index]=true;
        for(int i=0;i<number;i++){
            if(small_number[index]+g1->vec[index][i]<small_number[i]&&!if_find[i]){
                small_number[i]=small_number[index]+g1->vec[index][i];
                v1[i].push_back(g1->node[index]);
            }
        }

    }



}