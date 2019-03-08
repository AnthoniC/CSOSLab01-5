//
//  queue.h
//  lab01_5_acaravello
//
//  Created by Anthoni on 3/6/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include <stdio.h>
#include "LinkedList.h"

typedef struct queue{
    linked_list* list;
} queue;

int q_push(queue* q, int data);
int q_pop(queue* q);
int q_last(queue* q);
int q_is_empty(queue* q);

#endif /* queue_h */
