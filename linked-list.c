#include<stdio.h>
#include<stdlib.h>


void main(){
    
    struct node{
        int i;
        struct node *next;
    } newNode;
    
    
    struct node *head, *t;
    
    struct node *a, *b, *c, *d;
    
    a = (struct node*) malloc(sizeof(newNode));
    b = (struct node*) malloc(sizeof(newNode));
    c = (struct node*) malloc(sizeof(newNode));
    d = (struct node*) malloc(sizeof(newNode));
    
    
    d->i=5;
    d->next=NULL;
    
    c->i=4;
    c->next=d;
    
    b->i=3;
    b->next=c;
    
    a-> i = 2;
    a->next = b;
    
    head-> i = 1;
    head->next = a;
    
    t = head;
    
    printf("%d\n", t->i);//head
    printf("%d\n", t->next->i);//a
    printf("%d\n", t->next->next->i);//b
    printf("%d\n", t->next->next->next->i);//c
    printf("%d\n", t->next->next->next->next->i);//d
    
    
    free(a);
    free(b);
    free(c);
    free(d);
}
