#ifndef CSV_H
#define CSV_H
#include <stdio.h>
#include "dict.h"

#define MAX_LINE_LEN 511
#define CSV_LINE_NO 35
//function prototypes

// skip the header line of .csv file "f" (modified from W3.4)
void address_skip_header_line(FILE *f);

void read_csv(FILE *in_file, dict_t *dict);

int check_duplicate (dict_t *dict, char *key);

#endif
