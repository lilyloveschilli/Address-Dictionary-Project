/* 
code produced for A1 for the subject COMP20003 Algorithms and Data Strucres S2 2025 
at the Univeristy of Melbourne
Authored by Lily Robertson and Cassie Watson
*/ 
#ifndef LIST_H
#define LIST_H

#include "address.h"
// structure to represent a singly linked list,
// the basis of our dictionary
typedef struct node node_t;
struct node {
    char *key; // key for searching
    address_t *data; // pointer to the address data
    node_t *next; // pointer to next node
};

// function prototypes

// add new node
// returns pointer to new node
node_t *create_node(address_t *address, char *key);

#endif