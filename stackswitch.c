#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int top = -1;
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull()
{
    if(top == size)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int item)
{
    if(isfull())
    {
        printf("Stack Overflow!\n");
        return;
    }
    else
    {
        top++;
        stack[top] = item;
        printf("%d pushed to the stack!\n",item);
    }
}
void pop()
{
    if(isempty())
    {
        printf("Stack Underflow!\n");
        return;
    }
    else
    {
        printf("%d popped from stack!\n",stack[top]);
        top--;
    }
}
int main()
{
    int num, value, element;
    printf("Enter number of values : ");
    scanf("%d", &num);
    printf("Enter the elements : ");
    for(int i = 0;i<num;i++)
    {
        scanf("%d", &value);
        push(value);
    }
    int ch;
    do{
        printf("Press 1 to insert an element \n");
        printf("Press 2 to delete an element \n");
        printf("Press 3 to exit\n");
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1 :
                printf("Enter element to insert : ");
                scanf("%d", &element);
                push(element);
                break;
            case 2 :
                pop();
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
                break;

        }
    } while(ch != 3);
    return 0;
}