//
//  queue.c
//  lab01_5_acaravello
//
//  Created by Anthoni on 3/6/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#include <stdlib.h>
#include "queue.h"
#include "LinkedList.h"


int q_push(queue* q, int data){
    if(!q->list){
        linked_list* list = (linked_list*)malloc(sizeof(linked_list));
        q->list = list;
    }
    insert(q->list, data, data);
    return 0;
}

int q_pop(queue* q){
    if(!q->list || !q->list->head){
        return -1;
    }
    int value = q->list->head->data;
    removeA(q->list, value);
    return value;
}

int q_last(queue* q){
    if(!q->list || !q->list->head){
        return -1;
    }
    int value = q->list->head->data;
    return value;
}

int q_is_empty(queue* q){
    if(!q->list || !q->list->head){
        return 1;
    }
    return 0;
}

