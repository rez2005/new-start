#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int v;
    struct node *next;
}Node;

Node* mergeLists(Node* list1, Node* list2) {
    if (list1 == NULL) return list2;
    if (list2 == NULL) return list1;
    if(list1->v < list2->v) {
        list1->next = mergeLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeLists(list1, list2->next);
        return list2;
    }
}
