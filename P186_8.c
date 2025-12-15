#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int v;
    struct node* next;
}node;

node* createnode(int v){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->v = v;
    newnode->next = NULL;
    return newnode;
}

node* copysameorder(node* head){
    if(head == NULL){
        return NULL;
    }
    node* newhead = createnode(head->v);
    node* c = newhead;
    head = head->next;
while(head){
    c->next = createnode(head->v);
    c = c->next;
    head = head->next;
}
    return newhead;
}

node* copyreverseorder(node* head){
    node* newhead = NULL;
    while(head){
        node* newnode = createnode(head->v);
        newnode->next = newhead;
        newhead = newnode;
        head = head->next;
    }
    return newhead;
}

node* copysortedorder(node* head){
    node* newhead = NULL;
    while(head){
        node* newnode = createnode(head->v);
        if(newhead == NULL || newnode->v<newhead->v){
            newnode->next = newhead;
            newhead = newnode;
        }
        else{
            node* c = newhead;
            while(c->next && c->next->v<newnode->v){
                c = c->next;
            }
            newnode->next = c->next;
            c->next = newnode;
        }
        head = head->next;
    }
    return newhead;
}

