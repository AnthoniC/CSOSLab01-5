//
//  LinkedList.c
//  lab01_5_acaravello
//
//  Created by Anthoni on 3/4/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#include <stdlib.h>
#include "LinkedList.h"

int insert(linked_list* list, int data, int key){
    // WORKING
    
    if(is_in_list(list, key) == 1){
        return 0;
    }
    
    linked_list_node* to_add = (linked_list_node*)malloc(sizeof(linked_list_node));
    to_add->data = data;
    to_add->key = key;
    
    if(list->head == 0){
        list->head = to_add;
        return 1;
    }
    
    linked_list_node* temp = list->head;
    while(temp->next != 0){
        temp = temp->next;
    }
    
    temp->next = to_add;
    return 1;
}

int is_in_list(linked_list* list, int key){
    linked_list_node* temp = list->head;
    
    while(temp){
        if(temp->key == key){
            return 1;
        }
        temp = temp->next;
    }
    
    return 0;
}

int find(linked_list* list, int key){
    linked_list_node* temp = list->head;
    
    while(temp){
        if(temp->key == key){
            return temp->data;
        }
        temp = temp->next;
    }
    
    return 0;
}

int removeA(linked_list* list, int key){
    // This PROBABLY works
    
    if(list->head->key == key){
        list->head = list->head->next;
    }
    
    linked_list_node* temp = list->head;
    
    while(temp->next){
        if(temp->next->key == key){
            temp->next = temp->next->next;
            return 1;
        }
        temp = temp->next;
    }
    
    return 0;
}

void print_list(linked_list* list){
    linked_list_node* temp = list->head;
    
    while(temp){
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int* create_array(linked_list* list){
    int count = 0;
    linked_list_node* temp = list->head;
    while(temp){
        count++;
        temp = temp->next;
    }
    int* array = (int*)malloc(sizeof(int)*count);
    
    temp = list->head;
    for(int i = 0; i<count; i++){
        array[i] = temp->data;
        temp = temp->next;
    }
    
    return array;
}
