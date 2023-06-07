#include"Lnode.h"

static Lnode * create_Ltree(char *a ,int n);
static void destory_Ltree(Lnode * Ltree);
static Lnode * add_node(Lnode * Ltree,int a);
static Lnode * delete_node(Lnode * ltree,int a);
static Lnode * reverse_tree(Lnode *Ltree);


static struct Lnode_fn_t Lnode1_fn =
{
    /* data */
    .create_tree=create_Ltree,
    .destory_tree=destory_Ltree,
    .add_node= add_node,
    .delete_node=delete_node,
    .rever_tree=reverse_tree,
};



static Lnode * create_Ltree(char * a,int n){
    Lnode * L_head = (Lnode*)malloc(sizeof(Lnode));
    L_head->next = NULL;
    for(int i=0;i<n;i++){
        Lnode * temp = create_type(1,Lnode);
        temp->A = a[i];
        temp->next = L_head->next;
        L_head->next=temp;
    }
    return L_head;
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

void create_headtree(Ltree_class * L1){
    L1->tree_head=NULL;
    L1->Lnode_fn= &Lnode1_fn;
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


