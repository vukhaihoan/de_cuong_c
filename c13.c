#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

typedef struct stack
{
    node *top;
} stack;
stack s;
void khoitaostack()
{
    s.top = NULL;
}

node *khoitaonode(int *x)
{
    node *p = (node *)malloc(sizeof(node));
    p->next = NULL;
    p->data = *x;
    return p;
}

bool isempty()
{
    if (s.top == NULL)
    {
        return true;
    }
    return false;
}

void push(node *p)
{
    if (s.top == NULL)
    {
        s.top = p;
    }
    else
    {
        p->next = s.top;
        s.top = p;
    }
}
int pop()
{
    if (isempty() == false)
    {
        node *p = s.top;
        int x = p->data;
        s.top = s.top->next;
        free(p);
        return x;
    }
}
void chuyendoi(int n, int coso)
{
    while (n != 0)
    {
        int r = n % coso;
        node *p = khoitaonode(&r);
        push(p);
        n = n / coso;
    }
}
void hienthi()
{
    printf("co so :\n");
    int doichieu[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    // , 'G', 'H', 'I', 'J', 'K,', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'W', 'Z'
    while (isempty() == false)
    {
        int x = pop();
        for (int i = 0; i < 16; i++)
        {
            if (x == i)
            {
                printf("%c", doichieu[i]);
                break;
            }
        }
    }
}
int main()
{
    int n, coso;
    printf("nhap so n : ");
    scanf("%d", &n);
    printf("nhap co so :");
    scanf("%d", &coso);
    chuyendoi(n, coso);
    hienthi();
}