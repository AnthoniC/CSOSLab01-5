//
//  LinkedList.h
//  lab01_5_acaravello
//
//  Created by Anthoni on 3/4/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#ifndef LinkedList_h
#define LinkedList_h

#include <stdio.h>

typedef struct linked_list_node{
    
    struct linked_list_node* next;
    int data;
    int key;
    
    
} linked_list_node;

typedef struct linked_list{
    linked_list_node* head;
    
} linked_list;


int insert(linked_list* list, int data, int key);

int is_in_list(linked_list* list, int key);

int find(linked_list* list, int key);

int removeA(linked_list* list, int key);

void print_list(linked_list* list);

int* create_array(linked_list* list);


#endif /* LinkedList_h */
