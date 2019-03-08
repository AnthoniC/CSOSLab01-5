//
//  stack.h
//  lab01_5_acaravello
//
//  Created by Anthoni on 3/5/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#ifndef stack_h
#define stack_h

#include <stdio.h>
#include "LinkedList.h"

typedef struct stack{
    linked_list* list;
} stack;

int push(stack* stk, int data);
int pop(stack* stk);
int top(stack* stk);
int is_empty(stack* stk);

#endif /* stack_h */
