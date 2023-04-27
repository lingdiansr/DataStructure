#include <stdio.h>
#include <stdlib.h>
typedef struct linknode
{
    int data;
    struct linknode *next;
} Lnode, *LN_P;
LN_P creat_linklist(int n)
{
    LN_P p, s, head;
    s = head = (LN_P)malloc(sizeof(Lnode));
    for (int i = 0; i < n; i++)
    {
        p = (LN_P)malloc(sizeof(Lnode));
        scanf("%d", &p->data);
        p->next = NULL;
        s->next = p;
        s = p;
    }
    return head;
}
void print_list(LN_P p)
{
    while (p = p->next)
    {
        printf("%d ", p->data);
    }
    printf("\n");
}
LN_P turn(LN_P link)
{
    LN_P p, head, s;
    head = link;
    s = p = link->next;

    head->next = NULL;
    while (p)
    {
        if (s)
        {
            s = s->next;
        }
        p->next = head->next;
        head->next = p;
        p = s;
    }
    return head;
}
int main()
{
    LN_P p,s;
    int n;
    scanf("%d", &n);
    p = creat_linklist(n);
    s = turn(p);
    print_list(s);
}