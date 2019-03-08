//
//  stack.c
//  lab01_5_acaravello
//
//  Created by Anthoni on 3/5/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//


#include <stdlib.h>
#include "stack.h"
#include "LinkedList.h"


int push(stack* stk, int data){
    // Think about the key value a little more?
    if(!stk->list){
        linked_list* list = (linked_list*)malloc(sizeof(linked_list));
        stk->list = list;
        
    }
    insert(stk->list, data, data);
    
    return 0;
}


int pop(stack* stk){
    if(!stk->list || !stk->list->head){
        return -1;
    }
    linked_list_node* temp = stk->list->head;
    
    while(temp->next){
        temp = temp->next;
    }
    int value = temp->data;
    removeA(stk->list, value);
    return value;
}


int top(stack* stk){

    if(!stk->list || !stk->list->head){
        return -1;
    }
    linked_list_node* temp = stk->list->head;
    
    while(temp->next){
        temp = temp->next;
    }
    int value = temp->data;
    return value;
}


int is_empty(stack* stk){
    if(!stk->list || !stk->list->head){
        return 1;
    }
    return 0;
}

