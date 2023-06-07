#pragma once
#include<string>
#include<string.h>
using namespace std;
#define create_type(n,type) (type*)malloc(sizeof(type)*n)



struct Lnode
{
    /* data */
    char   A;
    Lnode * next;
};



typedef Lnode * (*create_Ltree_fn)(char *a ,int n);
typedef void (*destory_Ltree_fn)(Lnode * Ltree);
typedef Lnode * (*add_node_fn)(Lnode * Ltree,int a);
typedef Lnode * (*delete_node_fn)(Lnode * ltree,int a);
typedef Lnode * (*reverse_node_fn)(Lnode *Ltree);

struct Lnode_fn_t
{
    /* data */
    create_Ltree_fn create_tree;
    destory_Ltree_fn destory_tree;
    add_node_fn add_node;
    delete_node_fn delete_node;
    reverse_node_fn rever_tree;
};

struct Ltree_class
{
    /* data */
    Lnode * tree_head;
    Lnode_fn_t * Lnode_fn;
};

void  create_headtree(Ltree_class * Ltree);
void  create_detailtree(Ltree_class * Ltree);

