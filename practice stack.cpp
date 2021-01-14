#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

struct stack
{
    int top;
    int capacity;
    int *array;
};

struct stack *s=NULL;

void createstack(int cap)
{
    s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->capacity=cap;
    s->array=(int*)malloc(sizeof(int)*(s->capacity));
}

//insert element
void push(int element)
{
    if(s->top == (s->capacity-1))
        printf("\n\nyour stack is `overflowe`...");
    else {
        s->top += 1;
        s->array[s->top]=element;
    }
}

//delete element
void pop()
{
    if(s->top <0 )
        printf("\n\nyour stack is `underflowe`...");
    else
    {
        s->top -= 1;
    }
}

//display element
void showedata()
{

    int j;
    for(j=0; j<=s->top; j++)
        printf("\n%d",s->array[j]);

}

//main function
int main()
{   int ch;
    int capa;
    int element;
    while(1)
    {
        printf("\n1.  creat a stack : ");
        printf("\n2.  push into stack : ");
        printf("\n3.  pop into stack :");
        printf("\n4.  display all elements :");
        printf("\n5.  for exist in list   : ");
        printf("\n\nc hoice your number : ");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n\nwhat you want to your stack size : ");
            scanf("%d",&capa);
            createstack(capa);
            break;

        case 2:
            printf("\n\nenter a element  : ");
            scanf("%d",&element);
            push(element);
            break;

        case 3:
            pop();
            break;

        case 4:
            showedata();
            break;

        case 5:
            exit(0);

        default:
            printf("\n\n Error ! chech input...");

        }
    }

}
