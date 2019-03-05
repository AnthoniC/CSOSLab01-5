//
//  main.c
//  lab01_5_acaravello
//
//  Created by Anthoni on 3/4/19.
//  Copyright © 2019 Anthoni. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

int main(int argc, const char * argv[]) {
    
    // Linked list shit
    linked_list* list = (linked_list*)malloc(sizeof(linked_list));
    printf("How does C work? %d\n", is_in_list(list, 10));
    insert(list, 10, 10);
    printf("meh %d\n", list->head->key);
    printf("How does C work? %d\n", is_in_list(list, 10));
    insert(list, 20, 20);
    printf("meh %d\n", list->head->next->key);
    printf("How does C work? %d\n", is_in_list(list, 20));
    insert(list, 420, 30);
    printf("hehe %d blaze it\n", find(list, 30));
    removeA(list, 30);
    
    print_list(list);
    printf("Can I print arrays? %d \n", create_array(list)[0]);
    printf("Can I print arrays? %d \n", create_array(list)[1]);
    printf("Can I print arrays? %d \n", create_array(list)[2]);
    
    
    return 0;
}
