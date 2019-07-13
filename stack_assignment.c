#include "stack_assignment.h"

void stackCreate(stack &stk)
{
    stk->top=0;
}

void stackPush(stackEntry en, stack* stk)
{
    stk->entry[stk->top++] = e;
}

uint8_t stackFull(stack* stk)
{
    return (stk->top >= MAXSTACK);
}

void stackPop(stackEntry* en, stack* stk)
{
    *en = stk->entry[--stk->top];
}

uint8_t stackEmpty(stack* stk)
{
    return !(stk->top);
}

void stackTop(stackEntry* en, stack* stk)
{
    *en = stk->entry[stk->top-1];
}

uint32_t stackSize(stack* stk)
{
    return stk->top;
}

void stackClear(stack* stk)
{
    stk->top = 0;
}

