/* 
code produced for A1 for the subject COMP20003 Algorithms and Data Strucres S2 2025 
at the Univeristy of Melbourne
Authored by Lily Robertson and Cassie Watson
*/ 
#ifndef ADDRESS_H
#define ADDRESS_H

// data type definitions
#define MAX_LINE_LEN 511
// structure to represent an address
typedef struct {
    char *pfi;
    char *ezi_add;
    char *src_verif;
    char *propstatus;
    char *gcodefeat;
    char *loc_desc;
    char *blgunttyp;
    char *hsaunitid;
    
    char *bunit_pre1;
    char *bunit_id1;
    char *bunit_suf1;
    char *bunit_pre2;
    char *bunit_id2;
    char *bunit_suf2;

    char *floor_type;
    char *floor_NO_1;
    char *floor_NO_2;

    char *building;
    char *complex;

    char *hse_pref1;
    char *hse_num1;
    char *hse_suf1;
    char *hse_pref2;
    char *hse_num2;
    char *hse_suf2;
    char *disp_num1;

    char *road_name;
    char *road_type;
    char *rd_suf;

    char *locality;
    char *state;
    char *postcode;

    char *accesstype;

    long double x;
    long double y;
} address_t;


// function prototypes

// takes in an array of strings which represent CSV data to be created into an address struct
// returns a pointer to a new address
address_t *create_address(char variables[][MAX_LINE_LEN]);
// free all memory allocated for an address
void free_address(address_t *curr);
// return pointer to new address with same values as input address
address_t *copy_address(address_t *old);
// print out given address to file
void print_address(address_t *curr, FILE *file); // (Cassie)
#endif
