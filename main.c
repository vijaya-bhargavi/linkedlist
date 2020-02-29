#include<stdio.h>
#include"link.h"
int main(){
    int n;
    list* l=malloc(sizeof(list));
    l->head=NULL;
    l->tail=NULL;
    printf("How many numbers:");
    scanf("%d",&n);
    while(n--){
        node *ptr=malloc(sizeof(node));
        printf("Enter num:");
        scanf("%d",&ptr->data);
        ptr->next=NULL;
        ptr->prev=NULL;
        Insert(l,ptr);
    }
    Display_front(l);
    Display_back(l);
    return 0;
}