#include "graph.h"

void init_graph(graph *g1, char *s1, int number[][5],int size)
{
    memset(g1->vec,ifinity,sizeof(int)*maxn*maxn);
    g1->number = size;
    g1->node=s1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            g1->vec[i][j]=number[i][j];
        }
    }
}