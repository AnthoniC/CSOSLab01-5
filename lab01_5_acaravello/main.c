//
//  main.c
//  lab01_5_acaravello
//
//  Created by Anthoni on 3/4/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "LinkedList.h"
#include "stack.h"
#include "queue.h"


void test_linked_list(){

    
    printf("Starting Linked List tests\n");
    linked_list* list = (linked_list*)malloc(sizeof(linked_list));
    int returned;
    
    
    insert(list, 10, 10);
    assert(is_in_list(list, 10) == 1);
    returned = find(list, 10);
    assert(returned == 10);
    
    
    insert(list, 20, 20);
    assert(is_in_list(list, 20) == 1);
    returned = find(list, 20);
    assert(returned == 20);
    
    insert(list, 30, 30);
    assert(is_in_list(list, 30) == 1);
    returned = find(list, 30);
    assert(returned == 30);
    
    insert(list, 40, 40);
    assert(is_in_list(list, 40) == 1);
    returned = find(list, 40);
    assert(returned == 40);

    
    assert(is_in_list(list, 50) == 0);
    returned = find(list, 50);
    assert(returned == 0);
    
    
    assert(removeA(list, 10) == 1);
    assert(find(list, 10) == 0);
    assert(list->head->data == 20);
    assert(list->head->next->data == 30);
    assert(list->head->next->next->data == 40);
    
    assert(removeA(list, 40) == 1);
    assert(find(list, 40) == 0);
    assert(list->head->data == 20);
    assert(list->head->next->data == 30);
    
    assert(removeA(list, 30) == 1);
    assert(find(list, 30) == 0);
    assert(list->head->data == 20);
    
    assert(removeA(list, 20) == 1);
    assert(find(list, 20) == 0);
    assert(!list->head);

    
    printf("Linked List Tests completed successfully\n\n");
}

void test_stack(){
    printf("Starting Stack tests\n");
    stack* stk = (stack*)malloc(sizeof(stack));
    int returned;
    
    assert(top(stk) == -1);
    
    assert(is_empty(stk) == 1);
    
    
    push(stk, 10);
    assert(top(stk) == 10);
    assert(stk->list->head->data == 10);
    assert(is_empty(stk) == 0);
    
    push(stk, 20);
    assert(top(stk) == 20);
    assert(stk->list->head->next->data == 20);
    
    push(stk, 30);
    assert(top(stk) == 30);
    assert(stk->list->head->next->next->data == 30);
    
    returned = pop(stk);
    assert(returned == 30);
    assert(top(stk) == 20);
    
    returned = pop(stk);
    assert(returned == 20);
    assert(top(stk) == 10);
    
    returned = pop(stk);
    assert(returned == 10);
    assert(is_empty(stk) == 1);
    
    
    printf("Stack Tests completed successfully\n\n");
}

void test_queue(){
    printf("Starting Queue tests\n");
    queue* q = (queue*)malloc(sizeof(queue));
    int returned;
    
    assert(q_is_empty(q) == 1);
    
    q_push(q, 10);
    assert(q_is_empty(q) == 0);
    assert(q_last(q) == 10);
    assert(q->list->head->data == 10);
    
    q_push(q, 20);
    assert(q_last(q) == 10);
    assert(q->list->head->next->data == 20);
    
    q_push(q, 30);
    assert(q->list->head->next->next->data == 30);
    
    returned = q_pop(q);
    assert(returned == 10);
    assert(q_last(q) == 20);
    
    returned = q_pop(q);
    assert(returned == 20);
    assert(q_last(q) == 30);
    
    returned = q_pop(q);
    assert(returned == 30);
    assert(!q->list->head);
    
    assert(q_is_empty(q) == 1);
    
    
    
    
    printf("Queue Tests completed successfully\n\n");
}


int main(int argc, const char * argv[]) {
    
    printf("Starting Tests\n\n\n");
    
    test_linked_list();
    test_stack();
    test_queue();
    
    printf("\nAll Tests Completed Successfully\n\n");
    
    return 0;
}
