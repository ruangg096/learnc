#include"Lnode.h"

static Lnode * create_Ltree(char *a ,int n);
static void destory_Ltree(Lnode * Ltree);
static Lnode * add_node(Lnode * Ltree,int a);
static Lnode * delete_node(Lnode * ltree,int a);
static Lnode * reverse_tree(Lnode *Ltree);

static struct Lnode_fn_t Lnode2_fn =
{
    /* data */
    .create_tree=create_Ltree,
    .destory_tree=destory_Ltree,
    .add_node= add_node,
    .delete_node=delete_node,
    .rever_tree=reverse_tree,
};


static Lnode * create_Ltree(char *a ,int n){
    Lnode * L1 = create_type(1,Lnode);
    Lnode * temp = L1;
    for(int i=0;i<n;i++){
        temp->next=create_type(1,Lnode);
        temp=temp->next;
        temp->A = a[i];
    }
    return L1;
}

static void destory_Ltree(Lnode *tree)
{
    Lnode * temp;
    while (tree)
    {
        temp=tree;
        tree=tree->next;
        free(temp);
    }
    
}

void  create_detailtree(Ltree_class * L1){
    L1->tree_head=NULL;
    L1->Lnode_fn= &Lnode2_fn;
}


Lnode * add_node(Lnode * Ltree, int a)
{
return nullptr;
}

Lnode *delete_node(Lnode *ltree, int a)
{
return nullptr;
}

Lnode *reverse_tree(Lnode *Ltree)
{
return nullptr;
}