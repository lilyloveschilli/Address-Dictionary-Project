#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include "list.h"
#include "dict.h"
#include "address.h"
#include "bit.h"

//functions

// creates and returns an empty dictionary (modified from W3.4)
dict_t *dict_create() {
    dict_t *dict = malloc(sizeof(dict_t));
    assert(dict);
    dict->head = NULL;
    dict->tail = NULL;
    dict->n = 0;
    return dict;
}

// takes a new node and appends to the end of a given dictionary
// adapted from W3.4 
void append_node(node_t *new_node, dict_t *dict) {
    assert(dict);

    if (dict->head == NULL) {
        dict->head = new_node;
        dict->tail = new_node;
    } else {
        dict->tail->next = new_node;
        dict->tail = new_node;
    }

    dict->n += 1;
}

// free the dictionary
// free all memory used by a dictionary, including used by data component
// adapted from W3.4
void free_dict(dict_t *dict) {
    assert(dict != NULL);
    node_t *current = dict->head;

    while (current) {
        node_t *temp = current; // save current node to free
        current = current->next; // move to next node
        free_address(temp->data); // free data associated with node 
        free(temp); // free node
    }
    free(dict); // free the dictionary itself
}

// search through each node and print matches to both stdout and outFile, return number of matches
int search(dict_t *dict, char *input, FILE *file, dict_t *matches) { // need to adjust to different list structure
    node_t *current = dict->head;
    int bcmp = 0, ncmp = 0, scmp = 0, found = 0;
    
    // iterate through each node and compare the keys
    while(current != NULL) {
        // compare the keys
        if (stringcmp(current->key, input, &bcmp)) {
            found++;
            // store this node for later access
            address_t *match = copy_address(current->data);
            // store each matched address
            node_t *new_node = create_node(match, match->ezi_add);
            append_node(new_node, matches);
            //print to output file
            print_address(current->data, file);
        }
        ncmp++;
        scmp++;
        current = current->next;
    }
    // stdout output
    printf("%s --> %d records found - comparisons: b%d n%d s%d\n", input, found, bcmp, ncmp, scmp);
    return found;
}

// compare two strings using bit comparisons, return 1 if a match
int stringcmp(char *key, char *input, int *bcmp) {
    // iterate through each bit of the strings until a mismatch
    int key_len = (strlen(key) + 1) * 8;
    int input_len = (strlen(input)+ 1) * 8;
    int i = 0;
    while (i < key_len && i < input_len) { // may need to improve guard
        // compare each bit until a mismatch
        if (getBit(key, i) != getBit(input, i)) {
            (*bcmp)+= 1;
            return 0;
        }
        i++;
        // keep track of number of bit comparisons
        (*bcmp)+= 1;
    }
    return 1;
}
