#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int v;
    struct node* nextorder;
    struct node* nextsorted;
}node;

node* createnode(int v){
    node* newnode = (node*)malloc(sizeof(node));
    newnode->v = v;
    newnode->nextorder = NULL;
    newnode->nextsorted = NULL;
    return newnode;
}

void nodeinsert(node **headorder,node **tailorder,node **headsorted,int v){
    node* newnode = createnode(v);
    if(*headorder==NULL){
        *headorder=newnode;
        *tailorder=newnode;
    }else{
        (*tailorder)->nextorder=newnode;
        *tailorder=newnode;
    }
    if(*headsorted == NULL){
        *headsorted=newnode;
    }else{
        node *c= *headorder;
        node *p=NULL;
        while (c!=NULL&&c->v<v){
            p=c;
            c=c->nextsorted;
        }
        if(p==NULL){
            newnode->nextsorted=*headsorted;
            *headsorted=newnode;
        }else{
            p->nextsorted=newnode;
            newnode->nextsorted=c;
        }
    }
}
void traverseorder(node *head) {
    while (head != NULL) {
        printf("%d ", head->v);
        head = head->nextorder;
    }
    printf("\n");
}

void traversesorted(node *head) {
    while (head != NULL) {
        printf("%d ", head->v);
        head = head->nextsorted;
    }
    printf("\n");
}

int main() {
    node *headorder = NULL;
    node *tailorder = NULL;
    node *headsorted = NULL;

    nodeinsert(&headorder, &tailorder, &headsorted, 5);
    nodeinsert(&headorder, &tailorder, &headsorted, 2);
    nodeinsert(&headorder, &tailorder, &headsorted, 8);
    nodeinsert(&headorder, &tailorder, &headsorted, 3);

    traverseorder(headorder);
    traversesorted(headsorted);
    return 0;
}