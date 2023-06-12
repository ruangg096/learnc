#include "sort_sum.h"
#include <stdlib.h>
#include <string.h>
static void swap(int & left,int & right){
    int temp = right;
    right = left;
    left = temp;
}


void choose_sort(int *a, int length)
{
    if(length==1)return;
    int temp;
    int index;
    for(int i=1;i<length;i++){
        temp = a[i];
        index = i-1;
        while(index>=0&&temp<a[index]){
            a[index+1]=a[index];
            index--;
        }
        a[index+1]=temp;
    }
}

void bubule_sort(int *a, int left,int right)
{
    if(right<=left)return;
    for(int temp_right=right;temp_right>left;temp_right--){
        for(int temp_index=left+1;temp_index<=temp_right;temp_index++){
            if(a[temp_index]<=a[temp_index-1]){
                swap(a[temp_index],a[temp_index-1]);
            }
        }
    }
}

static void merge_func(int *a,int *b,int left1,int right1,int left2,int right2){
    int left1_temp = left1;
    int left2_temp = left2;
    int left_b = left1;
    while(right1>=left1_temp&&right2>=left2_temp){
         if(a[left1_temp]<=a[left2_temp]){
            b[left_b] = a[left1_temp];
            left_b++;
            left1_temp++;
         }
         else{
            b[left_b] = a[left2_temp];
            left_b++;
            left2_temp++;
         }
    }
    if(left1_temp<=right1){
        memcpy(b+left_b,a+left1_temp,(right1-left1_temp+1)*4);
    }
    else{
        memcpy(b+left_b,a+left2_temp,(right2-left2_temp+1)*4);
    }
    memcpy(a+left1,b+left1,(right2-left1+1)*4);
    
}

void merge_sort(int *a, int left, int right)
{   
    int *b = (int *)malloc(sizeof(int)*(right-left+1));
    if(right<=left)return;
    int mid = (left + right)/2;
    merge_sort(a,left,mid);
    merge_sort(a,mid+1,right);
    merge_func(a,b,left,mid,mid+1,right);
}


static int partition(int *a ,int left ,int right){
    int temp = a[left];
    int l_left=left;
    int l_right=right;
    while(l_right>l_left){
        while(a[l_right]>=temp&&l_right>l_left){
            l_right--;
        }
        a[l_left]=a[l_right];
        while(a[l_left]<=temp&&l_right>l_left){
            l_left++;
        }
        a[l_right]=a[l_left];
    }
    a[l_left] = temp;
    return l_left;
}

void bisort(int *a,int left,int right){
    if(left>=right)return;
    int mid = partition(a,left,right);
    bisort(a,left,mid);
    bisort(a,mid+1,right);
}

 
void stack_sort(int * a,int left,int right){

}