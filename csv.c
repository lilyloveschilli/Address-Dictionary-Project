/* A file with implementations for handling CSV inputs.
If a different data structure is required, replace function calls with different data structure*/

#include <stdlib.h>
#include <stdio.h>
#include "list.h"
#include "dict.h"
#include "csv.h"
#include "address.h"

// read readCSV 
    // read data from the file
    // create an address struct
    // call create_node
    // add node to dictionary

// skip the header line of .csv file "f" (modified from W3.4)
void address_skip_header_line(FILE *f) {
    int ch;
    while ((ch = fgetc(f)) != EOF && ch != '\n');
}

void read_csv(FILE *in_file, dict_t *dict) {
    address_skip_header_line(in_file);

    char arr[CSV_LINE_NO][MAX_LINE_LEN];
    char c;
    int i = 0;
    int j = 0;

    // process csv one character at a time
    while((c = getc(in_file)) != EOF) {
        if (c == ',') { // end of current variable
            arr[i][j] = '\0';
            j = 0;
            i++;
        } else if (c == '\n') { // end of line, reset i,j to start process again for next line of input
            arr[i][j] = '\0';
            i = 0;
            j = 0;
            if (check_duplicate != 0) {
                address_t *new_address = create_address(arr);
                node_t *new_node = create_node(new_address, new_address->ezi_add);
                append_node(new_node, dict);
            }
        } else { // current variable, continue filling in array data
            arr[i][j] = c;
            j++;
        }
    }
}

int check_duplicate (dict_t *dict, char *key) {
    node_t *current = dict->head;
    int temp;
    while(current != NULL) {
        if (stringcmp(current->key, key, &temp)) {
            return 0;
        }
        current = current->next;
    }
    return 1;
}
