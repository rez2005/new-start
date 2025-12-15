#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int v;
    struct node* next;
}node;

void deleteminnode(node **head){
    if(*head==NULL){
        return;
    }
    node *minnode =*head;
    node *pmin=NULL;
    node *c=*head;
    node *p=NULL;
    while(c!=NULL){
        if(c->v<minnode->v){
            minnode=c;
            pmin=p;
        }
        p=c;
        c=c->next;
    }
    printf("最小元素：%d\n",minnode->v)
    if(pmin==NULL){
        *head=minnode->next;
    }else{
        pmin->next=minnode->next;
    }
    free(minnode);
    minnode=NULL
}