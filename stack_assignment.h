#ifndef _STACK_H
    #define _STACK_H
    #define MAXSTACK 100
    
    typedef struct Stack {
        uint32_t top;
        stackEntry entry[MAXSTACK];
    } stack;
    
    void stackCreate(stack* stk);
    uint8_t stackIsEmpty(stack* stk);
    uint8_t stackIsFull(stack* stk);
    uint32_t stackSize(stack* stk);
    void stackPush(stackEntry en, stack* stk);
    void stackPop(stackEntry* en, stack* stk);
    void stackTop(stackEntry* en, stack* stk);
    // traverse
    void stackClear(stack &stk);

#endif //_STACK_H
