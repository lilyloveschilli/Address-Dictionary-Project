/* 
code produced for A1 for the subject COMP20003 Algorithms and Data Strucres S2 2025 
at the Univeristy of Melbourne
Authored by Lily Robertson and Cassie Watson
*/ 
#ifndef DICT_H
#define DICT_H

#include "list.h"

// datatype definitions
typedef struct dict dict_t;
typedef struct node node_t; // forwards declaration

// a dictionary is a couple of pointers (modified from W3.4)
struct dict {
    node_t *head;
    node_t *tail;
    size_t n;
};

// function prototypes

// creates and returns an empty dictionary
dict_t *dict_create(); //(Lily)
// free the dictionary
void free_dict(dict_t *dict);
int search(dict_t *dict, char *input, FILE *file, dict_t *matches); //(Cassie)
int stringcmp(char *key, char *input, int *bcmp); //(Cassie)
// takes a new node and appends to the end of a given dictionary
void append_node(node_t *new_node, dict_t *dict);

#endif
