#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 100

struct stack
{
    int stack [MAXSIZE];
    int top;
};
void push(struct stack *pu)
  {  int item;
    if (pu->top == MAXSIZE - 1)
    {
        printf("\n the stack is full");
    }
    else
    {
        printf("enter value to be inserted");
        scanf("%d", &item);
       item = pu->stack[++pu->top];
    }
};
void pop(struct stack *po)
{
    int item;
    if (po->top == -1)
    {
        printf("stack is empty");
        
    }
    else
    {
        printf("Delete stack");
        item= po->stack(po->top--);
    }
};
void traverse(struct stack *tra, int a[])
{

    int item;
    int top;
    if (top == -1)
    {
        printf("underflow");
    }
    else
    {
        for (item = top; item >= 0; item--)
        {
            printf("%d\n", a[item]);
        }
    }
};
int main()
{
    int choice;
    int check = 1;
    struct stack *st;
    st = (struct stack *)malloc(100 * sizeof(struct stack));
    st->top = -1;
    do
    {
        printf("\n press1 for push");
        printf("\n press 2 for pop");
        printf("press 3 for traverse");
        printf("Enter your choice");
        scanf("\n", &choice);
        switch (choice)
        {
        case 1:
            push(st);

            break;
        case 2:
            pop(st);
            break;
        case 3:
            traverse(st);
            break;

        default:
            printf("\n you entered wrong choice");
        }
        printf("\n\n press 1 for continue and 2 for exit=");
        scanf("%d",&check);
    }
    while(check!=2);
    return 0;
}