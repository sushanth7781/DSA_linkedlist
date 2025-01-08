#include<stdio.h>
#include<stdlib.h>
//define the node struct
typedef struct node{
    int data;
    struct node*next;
}node;

//create a new node
node*createnode(int data){
    node*newnode=(node*)malloc(sizeof(node));
    if(!newnode){
        printf("memory allocation failed\n");
        exit(1);
    }
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
//print the linked list
void printlist(node*node){

while(node){
printf("%d->",node->data);
node=node->next;
}
printf("null\n");
}
int main(){
 node*node1=createnode(5);
 node*node2=createnode(54);
 node*node3=createnode(56);
 node*node4=createnode(4);
 node1->next=node2;
 node2->next=node3;
 node3->next=node4;
 printList(node1);

 //free memory
 free(node1);
 free(node2);
 free(node3);
 free(node4);
}
