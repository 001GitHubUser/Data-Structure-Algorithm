#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

// queue structure
struct queue
{
    int front,rear;
    int capacity;
    int *array;
};
struct queue *q=NULL;

//creat a queue
void createqueue(int cap)
{
    q=(struct queue*)malloc(sizeof(struct queue));
    
    q->front=0;
    q->rear=0;
    q->capacity=cap;
    q->array = (int*)malloc(sizeof(int)*q->capacity);
}

//is full
int isfull()
{
    if(q->rear == q->capacity)
        return(0);
    else
        return(1);
}

//is empty
int isempty()
{
    if(q->rear == 0)
        return(0);
    else
        return(1);
}

//insert data
void enqueue(int data)
{
    if(isfull)
    {
        q->array[q->rear] = data;
        q->rear += 1;
    }
    else
    {
        printf("\nosrray,queue is full....");
    }
}

//delete a data
void dequeue()
{
    if(isempty)
    {
        q->front += 1;
    }
    else
    {
        printf("\nsorray,queue is already empty...");
    }
}

//showe Data
void showedata()
{
    if(isempty)
    {
        int x;
        for(x = q->front; x < q->rear; x++)
            printf("%d\t",q->array[x]);
    }
    else
    {
        printf("\nyour queue is empty...");
    }
}

//main function
int main()
{
    int data1,ch,cap1;
    while(5)
    {
        printf("\n\n1.  create a queue :");
        printf("\n2.    for insert data in queue :");
        printf("\n3.    for delete data in queue :");
        printf("\n4.    for exit in queue :");
        printf("\n\n1.  ENTER A CHOICE : ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("what is capacity for queue : ");
            scanf("%d",cap1);
            createqueue(cap1);
            break;

        case 2:
            printf("\n\ndata :: ");
            scanf("%d",data1);
            enqueue(data1);
            break;

        case 3:
            dequeue();
            break;

        case 4:
            exit(0);

        default:
            printf("\n\nERROR ! INVALID INPUT ,TRY AGAIN.  ");

        }
    }
}