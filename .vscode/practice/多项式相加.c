#include <stdio.h>
#include <stdlib.h>

struct node{
    int exp;
    int coeff;
    struct node* next;
};
struct node* create_node(int exp, int coeff){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    new_node->exp = exp;
    new_node->coeff = coeff;
    new_node->next = NULL;
    return new_node;
}
struct node* add(struct node* poly1, struct node* poly2){
    struct node dummy;
    dummy.next = NULL;
    struct node* tail = &dummy;

    while(poly1 != NULL && poly2 != NULL){
        if(poly1->exp > poly2->exp){
            tail->next = create_node(poly1->exp, poly1->coeff);
            poly1 = poly1->next;
        } else if(poly1->exp < poly2->exp){
            tail->next = create_node(poly2->exp, poly2->coeff);
            poly2 = poly2->next;
        } else {
            int sum_coeff = poly1->coeff + poly2->coeff;
            if(sum_coeff != 0){
                tail->next = create_node(poly1->exp, sum_coeff);
            }
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        if(tail->next != NULL){
            tail = tail->next;
        }
            
    }
    while(poly1 != NULL){
        tail->next = create_node(poly1->exp, poly1->coeff);
        tail = tail->next;
        poly1 = poly1->next;
    }
    while(poly2 != NULL){
        tail->next = create_node(poly2->exp, poly2->coeff);
        tail = tail->next;
        poly2 = poly2->next;
    }
    return dummy.next;
}
struct node* read_polynomial(){
    struct node dummy;
    dummy.next = NULL;
    struct node* tail = &dummy;
    int exp, coeff;
    while(1){
        if(scanf("%d", &exp)!=1||exp==-1) break;
        scanf("%d", &coeff);
        tail->next = create_node(exp, coeff);
        tail = tail->next;
    }
    return dummy.next;
}
void print_polynomial(struct node* poly){
    struct node* current = poly;
    while(current != NULL){
        printf("%d %d\n", current->exp, current->coeff);
        current = current->next;
    }
}
void free_polynomial(struct node* poly){
    struct node* current = poly;
    while(current != NULL){
        struct node* temp = current;
        current = current->next;
        free(temp);
    }
}
int main(){
    struct node* poly1 = read_polynomial();
    struct node* poly2 = read_polynomial();
    struct node* result = add(poly1, poly2);
    print_polynomial(result);
    free_polynomial(poly1);
    free_polynomial(poly2);
    free_polynomial(result);
    return 0;
}
        
        

