#pragma once
#include<string.h>
#define maxn 30
#define ifinity 1000

struct graph{
    int vec[maxn][maxn];
    int number;
    char * node;
};

void init_graph(graph *g1,char *s1,int number[][5],int size);