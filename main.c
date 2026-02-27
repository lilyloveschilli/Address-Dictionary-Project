/* 
code produced for A1 for the subject COMP20003 Algorithms and Data Strucres S2 2025 
at the Univeristy of Melbourne
Authored by Lily Robertson and Cassie Watson
*/ 
#include <stdio.h>
#include <stdlib.h>
#include "csv.h"
#include "dict.h"
#include "list.h"

#define MAX_LEN 127

int main(int argc, char **argv) {
    
    // open input and output files
	FILE *in_file = fopen(argv[2], "r");
	FILE *out_file = fopen(argv[3], "w");
    
    dict_t *dict = dict_create();

    // READING
    read_csv(in_file, dict);
    
    // SEARCHING
    int found = 0; // number of matching addresses
    char key[MAX_LEN];
    dict_t *matches = dict_create();
    // search each key input that is read in
    while (scanf(" %[^\n]\n", key) == 1) {
        // confirm outFile and dict variable names
        fprintf(out_file, "%s\n", key);
        found = search(dict, key, out_file, matches); // dict is placeholder name
        if (found == 0) {
            fprintf(out_file, "NOTFOUND\n");
        }
    }
    
    fclose(in_file);
    fclose(out_file);
    free_dict(dict);
    free_dict(matches);
    
    return EXIT_SUCCESS;
}
