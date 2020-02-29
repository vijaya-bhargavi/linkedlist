#include<stdio.h>
#include<stdlib.h>
#ifndef _LINK_H
#define _LINK_H

typedef struct ni node;
typedef struct li list;
void Insert(list* l,node *ptr);
void Display_front(list* l);
void Display_back(list* l);



#endif