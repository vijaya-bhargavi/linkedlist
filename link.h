#include<stdio.h>
#include<stdlib.h>
#ifndef _LINK_H
#define _LINK_H

typedef struct n{
    int data;
    struct n *next;
    struct n *prev;
}node;

typedef struct li{
    node *head;
    node *tail;
}list;
void Insert(list* l,node *ptr);
void Display_front(list* l);
void Display_back(list* l);

#endif