#include <string.h>
#define STACK_TOP_IDX -1
struct stack_st
{
    int stackTop;
    int stackData[30000];
};
int Top(struct stack_st *stackData, int *value)
{
    if (stackData->stackTop == STACK_TOP_IDX)
    {
        return 0;
    }
    *value = stackData->stackData[stackData->stackTop];
    return 1;
}
void pop(struct stack_st *stackData)
{
    if (stackData->stackTop == STACK_TOP_IDX)
    {
        return;
    }
    stackData->stackTop--;
    return;
}
void push(struct stack_st *stackData, int data)
{
    if (stackData->stackTop == 29999)
    {
        return;
    }
    stackData->stackTop++;
    stackData->stackData[stackData->stackTop] = data;
    return;
}
int *dailyTemperatures(int *temperatures, int temperaturesSize, int *returnSize)
{
    int ret = 0, mid = 0, i = 0;
    int *temp = (int *)calloc(temperaturesSize, sizeof(int));
    if (temperaturesSize <= 1)
    {
        *returnSize = 1;
        printf("0\n");
        temp[0] = 0;
        return temp;
    }
    struct stack_st myStack;
    memset(&myStack, 0, sizeof(struct stack_st));
    myStack.stackTop = STACK_TOP_IDX;
    push(&myStack, 0);
    for (i = 0; i < temperaturesSize - 1; i++)
    {
        if (temperatures[i + 1] <= temperatures[i])
        {
            push(&myStack, i + 1);
        }
        else
        {
            while (1)
            {
                if (!Top(&myStack, &mid))
                    break;
                if (temperatures[mid] < temperatures[i + 1])
                {
                    temp[mid] = i + 1;
                    pop(&myStack);
                }
                else
                {
                    break;
                }
            }
            push(&myStack, i + 1);
        }
    }
    for (i = 0; i < temperaturesSize; i++)
    {
        temp[i] = temp[i] - i;
        if (temp[i] < 0)
            temp[i] = 0;
        if (i == temperaturesSize - 1)
            printf("%d\n", temp[i]);
        else
            printf("%d, ", temp[i]);
    }
    *returnSize = temperaturesSize;
    return temp;
}