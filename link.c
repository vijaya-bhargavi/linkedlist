#include"link.h"
void Insert(list* l,node *ptr){
    if (l->head==NULL){
        l->head=l->tail=ptr;
        printf("%d",ptr->data);
    }
    else{
        l->tail->next=ptr;
        ptr->prev=l->tail;
        l->tail=ptr;
    }
}

void Display_front(list* l){
    for(node *xptr=l->head;xptr!=NULL;xptr=xptr->next){
        printf("%d ",xptr->data);
    }
}

void Display_back(list* l){
    printf("\n");
    for(node *xptr=l->tail;xptr!=NULL;xptr=xptr->prev){
        printf("%d ",xptr->data);
    }
}
