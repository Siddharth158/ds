#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* rear = NULL;

void enqueue(){
    int d;
    struct node* ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    printf("enter the data:-\n");
    scantf("%d",&d);
    ptr->data = d;
    ptr->next = NULL;
    if (front== NULL && rear == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else{
        rear->next = ptr;
        rear = ptr;
    }
    
}
void dequeue(){}
void display(){}
void peek(){}

int main(){
    int choice;
    printf("1.enqueqe\n2.dequeue\n.3.display\n4.peek\n5.exit\n");
    while(choice != 5){
        printf("enter your choice:-\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            diplay();
            break;
        case 4:
            peek();
            break;
        case 5:
            exit(1);
            break;
        default:
            printf("you have enterd thewrong choice\n");
            break;
        }
    }
return 0;
}