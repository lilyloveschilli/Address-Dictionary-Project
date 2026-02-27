/* 
code produced for A1 for the subject COMP20003 Algorithms and Data Strucres S2 2025 
at the Univeristy of Melbourne
Authored by Lily Robertson and Cassie Watson
*/ 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "list.h"

// add new node (*address, key)
node_t *create_node(address_t *address, char *key) {
    node_t *new_node = malloc(sizeof(node_t));
    assert(new_node);

    new_node->key = key;
    new_node->data = address;
    new_node->next = NULL; // insert at end of linked list

    return new_node;
}

// free list