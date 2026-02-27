#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "csv.h"
#include "address.h"


// takes in a 2D array of stored variables from a csv and assigns to address
// returns pointer to address
address_t *create_address(char variables[][MAX_LINE_LEN]) {
    address_t *new_address = malloc(sizeof(address_t));
    assert(new_address);
    
    // go through all of the variables and assign to respective element in address struct
    // guard checks if the first character of each variable is empty,
    // if it is, assign NULL, otherwise copy the temp variable into the new struct
    if (variables[0][0] == '\0') {
        new_address->pfi = NULL;
    } else {
        new_address->pfi = strdup(variables[0]);
    }

    if (variables[1][0] == '\0') {
        new_address->ezi_add = NULL;
    } else {
        new_address->ezi_add = strdup(variables[1]);
    }

    if (variables[2][0] == '\0') {
        new_address->src_verif = NULL;
    } else {
        new_address->src_verif = strdup(variables[2]);
    }

    if (variables[3][0] == '\0') {
        new_address->propstatus = NULL;
    } else {
        new_address->propstatus = strdup(variables[3]);
    }

    if (variables[4][0] == '\0') {
        new_address->gcodefeat = NULL;
    } else {
        new_address->gcodefeat = strdup(variables[4]);
    }

    if (variables[5][0] == '\0') {
        new_address->loc_desc = NULL;
    } else {
        new_address->loc_desc = strdup(variables[5]);
    }

    if (variables[6][0] == '\0') {
        new_address->blgunttyp = NULL;
    } else {
        new_address->blgunttyp = strdup(variables[6]);
    }

    if (variables[7][0] == '\0') {
        new_address->hsaunitid = NULL;
    } else {
        new_address->hsaunitid = strdup(variables[7]);
    }

    if (variables[8][0] == '\0') {
        new_address->bunit_pre1 = NULL;
    } else {
        new_address->bunit_pre1 = strdup(variables[8]);
    }

    if (variables[9][0] == '\0') {
        new_address->bunit_id1 = NULL;
    } else {
        new_address->bunit_id1 = strdup(variables[9]);
    }

    if (variables[10][0] == '\0') {
        new_address->bunit_suf1 = NULL;
    } else {
        new_address->bunit_suf1 = strdup(variables[10]);
    }

    if (variables[11][0] == '\0') {
        new_address->bunit_pre2 = NULL;
    } else {
        new_address->bunit_pre2 = strdup(variables[11]);
    }

    if (variables[12][0] == '\0') {
        new_address->bunit_id2 = NULL;
    } else {
        new_address->bunit_id2 = strdup(variables[12]);
    }

    if (variables[13][0] == '\0') {
        new_address->bunit_suf2 = NULL;
    } else {
        new_address->bunit_suf2 = strdup(variables[13]);
    }

    if (variables[14][0] == '\0') {
        new_address->floor_type = NULL;
    } else {
        new_address->floor_type = strdup(variables[14]);
    }

    if (variables[15][0] == '\0') {
        new_address->floor_NO_1 = NULL;
    } else {
        new_address->floor_NO_1 = strdup(variables[15]);
    }

    if (variables[16][0] == '\0') {
        new_address->floor_NO_2 = NULL;
    } else {
        new_address->floor_NO_2 = strdup(variables[16]);
    }

    if (variables[17][0] == '\0') {
        new_address->building = NULL;
    } else {
        new_address->building = strdup(variables[17]);
    }

    if (variables[18][0] == '\0') {
        new_address->complex = NULL;
    } else {
        new_address->complex = strdup(variables[18]);
    }

    if (variables[19][0] == '\0') {
        new_address->hse_pref1 = NULL;
    } else {
        new_address->hse_pref1 = strdup(variables[19]);
    }

    if (variables[20][0] == '\0') {
        new_address->hse_num1 = NULL;
    } else {
        new_address->hse_num1 = strdup(variables[20]);
    }

    if (variables[21][0] == '\0') {
        new_address->hse_suf1 = NULL;
    } else {
        new_address->hse_suf1 = strdup(variables[21]);
    }

    if (variables[22][0] == '\0') {
        new_address->hse_pref2 = NULL;
    } else {
        new_address->hse_pref2 = strdup(variables[22]);
    }

    if (variables[23][0] == '\0') {
        new_address->hse_num2 = NULL;
    } else {
        new_address->hse_num2 = strdup(variables[23]);
    }

    if (variables[24][0] == '\0') {
        new_address->hse_suf2 = NULL;
    } else {
        new_address->hse_suf2 = strdup(variables[24]);
    }

    if (variables[25][0] == '\0') {
        new_address->disp_num1 = NULL;
    } else {
        new_address->disp_num1 = strdup(variables[25]);
    }

    if (variables[26][0] == '\0') {
        new_address->road_name = NULL;
    } else {
        new_address->road_name = strdup(variables[26]);
    }

    if (variables[27][0] == '\0') {
        new_address->road_type = NULL;
    } else {
        new_address->road_type = strdup(variables[27]);
    }

    if (variables[28][0] == '\0') {
        new_address->rd_suf = NULL;
    } else {
        new_address->rd_suf = strdup(variables[28]);
    }

    if (variables[29][0] == '\0') {
        new_address->locality = NULL;
    } else {
        new_address->locality = strdup(variables[29]);
    }

    if (variables[30][0] == '\0') {
        new_address->state = NULL;
    } else {
        new_address->state = strdup(variables[30]);
    }

    if (variables[31][0] == '\0') {
        new_address->postcode = NULL;
    } else {
        new_address->postcode = strdup(variables[31]);
    }

    if (variables[32][0] == '\0') {
        new_address->accesstype = NULL;
    } else {
        new_address->accesstype = strdup(variables[32]);
    }

    if (variables[33][0] == '\0') {
        new_address->x = 0;
    } else {
        sscanf(variables[33], " %Lf", &(new_address->x));
    }

    if (variables[34][0] == '\0') {
        new_address->y = 0;
    } else {
        sscanf(variables[34], " %Lf", &(new_address->y));
    }

    return new_address;
}

// free all memory allocated for an address
void free_address(address_t *curr) {
    free(curr->pfi);
    free(curr->ezi_add);
    free(curr->src_verif);
    free(curr->propstatus);
    free(curr->gcodefeat);
    free(curr->loc_desc);
    free(curr->blgunttyp);
    free(curr->hsaunitid);
    free(curr->bunit_pre1);
    free(curr->bunit_id1);
    free(curr->bunit_suf1);
    free(curr->bunit_pre2);
    free(curr->bunit_id2);
    free(curr->bunit_suf2);
    free(curr->floor_type);
    free(curr->floor_NO_1);
    free(curr->floor_NO_2);
    free(curr->building);
    free(curr->complex);
    free(curr->hse_pref1);
    free(curr->hse_num1);
    free(curr->hse_suf1);
    free(curr->hse_pref2);
    free(curr->hse_num2);
    free(curr->hse_suf2);
    free(curr->disp_num1);
    free(curr->road_name);
    free(curr->road_type);
    free(curr->rd_suf);
    free(curr->locality);
    free(curr->state);
    free(curr->postcode);
    free(curr->accesstype);
    free(curr);
}


// create and return a new address and copy values from input address
address_t *copy_address(address_t *old) {
    address_t *new_address = malloc(sizeof(address_t));
    assert(new_address);

    if (old->pfi == NULL) {
        new_address->pfi = NULL;
    } else {
        new_address->pfi = strdup(old->pfi);
    }

    if (old->ezi_add == NULL) {
        new_address->ezi_add = NULL;
    } else {
        new_address->ezi_add = strdup(old->ezi_add);
    }

    if (old->src_verif == NULL) {
        new_address->src_verif = NULL;
    } else {
        new_address->src_verif = strdup(old->src_verif);
    }

    if (old->propstatus == NULL) {
        new_address->propstatus = NULL;
    } else {
        new_address->propstatus = strdup(old->propstatus);
    }

    if (old->gcodefeat == NULL) {
        new_address->gcodefeat = NULL;
    } else {
        new_address->gcodefeat = strdup(old->gcodefeat);
    }

    if (old->loc_desc == NULL) {
        new_address->loc_desc = NULL;
    } else {
        new_address->loc_desc = strdup(old->loc_desc);
    }

    if (old->blgunttyp == NULL) {
        new_address->blgunttyp = NULL;
    } else {
        new_address->blgunttyp = strdup(old->blgunttyp);
    }

    if (old->hsaunitid == NULL) {
        new_address->hsaunitid = NULL;
    } else {
        new_address->hsaunitid = strdup(old->hsaunitid);
    }

    if (old->bunit_pre1 == NULL) {
        new_address->bunit_pre1 = NULL;
    } else {
        new_address->bunit_pre1 = strdup(old->bunit_pre1);
    }

    if (old->bunit_id1 == NULL) {
        new_address->bunit_id1 = NULL;
    } else {
        new_address->bunit_id1 = strdup(old->bunit_id1);
    }

    if (old->bunit_suf1 == NULL) {
        new_address->bunit_suf1 = NULL;
    } else {
        new_address->bunit_suf1 = strdup(old->bunit_suf1);
    }

    if (old->bunit_pre2 == NULL) {
        new_address->bunit_pre2 = NULL;
    } else {
        new_address->bunit_pre2 = strdup(old->bunit_pre2);
    }

    if (old->bunit_id2 == NULL) {
        new_address->bunit_id2 = NULL;
    } else {
        new_address->bunit_id2 = strdup(old->bunit_id2);
    }

    if (old->bunit_suf2 == NULL) {
        new_address->bunit_suf2 = NULL;
    } else {
        new_address->bunit_suf2 = strdup(old->bunit_suf2);
    }

    if (old->floor_type == NULL) {
        new_address->floor_type = NULL;
    } else {
        new_address->floor_type = strdup(old->floor_type);
    }

    if (old->floor_NO_1 == NULL) {
        new_address->floor_NO_1 = NULL;
    } else {
        new_address->floor_NO_1 = strdup(old->floor_NO_1);
    }

    if (old->floor_NO_2 == NULL) {
        new_address->floor_NO_2 = NULL;
    } else {
        new_address->floor_NO_2 = strdup(old->floor_NO_2);
    }

    if (old->building == NULL) {
        new_address->building = NULL;
    } else {
        new_address->building = strdup(old->building);
    }

    if (old->complex == NULL) {
        new_address->complex = NULL;
    } else {
        new_address->complex = strdup(old->complex);
    }

    if (old->hse_pref1 == NULL) {
        new_address->hse_pref1 = NULL;
    } else {
        new_address->hse_pref1 = strdup(old->hse_pref1);
    }

    if (old->hse_num1 == NULL) {
        new_address->hse_num1 = NULL;
    } else {
        new_address->hse_num1 = strdup(old->hse_num1);
    }

    if (old->hse_suf1 == NULL) {
        new_address->hse_suf1 = NULL;
    } else {
        new_address->hse_suf1 = strdup(old->hse_suf1);
    }

    if (old->hse_pref2 == NULL) {
        new_address->hse_pref2 = NULL;
    } else {
        new_address->hse_pref2 = strdup(old->hse_pref2);
    }

    if (old->hse_num2 == NULL) {
        new_address->hse_num2 = NULL;
    } else {
        new_address->hse_num2 = strdup(old->hse_num2);
    }

    if (old->hse_suf2 == NULL) {
        new_address->hse_suf2 = NULL;
    } else {
        new_address->hse_suf2 = strdup(old->hse_suf2);
    }

    if (old->disp_num1 == NULL) {
        new_address->disp_num1 = NULL;
    } else {
        new_address->disp_num1 = strdup(old->disp_num1);
    }

    if (old->road_name == NULL) {
        new_address->road_name = NULL;
    } else {
        new_address->road_name = strdup(old->road_name);
    }

    if (old->road_type == NULL) {
        new_address->road_type = NULL;
    } else {
        new_address->road_type = strdup(old->road_type);
    }

    if (old->rd_suf == NULL) {
        new_address->rd_suf = NULL;
    } else {
        new_address->rd_suf = strdup(old->rd_suf);
    }

    if (old->locality == NULL) {
        new_address->locality = NULL;
    } else {
        new_address->locality = strdup(old->locality);
    }

    if (old->state == NULL) {
        new_address->state = NULL;
    } else {
        new_address->state = strdup(old->state);
    }

    if (old->postcode == NULL) {
        new_address->postcode = NULL;
    } else {
        new_address->postcode = strdup(old->postcode);
    }

    if (old->accesstype == NULL) {
        new_address->accesstype = NULL;
    } else {
        new_address->accesstype = strdup(old->accesstype);
    }

    new_address->x = old->x;

    new_address->y = old->y;

    return new_address;
}

// print out given address to file
void print_address(address_t *curr, FILE *file) {
    
    fprintf(file, "--> PFI: ");
    // if exists, print field
    if (curr->pfi) {
        fprintf(file, "%s", curr->pfi);
    }
    fprintf(file, " || ");

    fprintf(file, "EZI_ADD: ");
    // if exists, print field
    if (curr->ezi_add) {
        fprintf(file, "%s", curr->ezi_add);
    }
    fprintf(file, " || ");

    fprintf(file, "SRC_VERIF: ");
    // if exists, print field
    if (curr->src_verif) {
        fprintf(file, "%s", curr->src_verif);
    }
    fprintf(file, " || ");


    fprintf(file, "PROPSTATUS: ");
    // if exists, print field
    if (curr->propstatus) {
        fprintf(file, "%s", curr->propstatus);
    }
    fprintf(file, " || ");

    fprintf(file, "GCODEFEAT: ");
    // if exists, print field
    if (curr->gcodefeat) {
        fprintf(file, "%s", curr->gcodefeat);
    }
    fprintf(file, " || ");

    fprintf(file, "LOC_DESC: ");
    // if exists, print field
    if (curr->loc_desc) {
        fprintf(file, "%s", curr->loc_desc);
    }
    fprintf(file, " || ");

    fprintf(file, "BLGUNTTYP: ");
    // if exists, print field
    if (curr->blgunttyp) {
        fprintf(file, "%s", curr->blgunttyp);
    }
    fprintf(file, " || ");

    fprintf(file, "HSAUNITID: ");
    // if exists, print field
    if (curr->hsaunitid) {
        fprintf(file, "%s", curr->hsaunitid);
    }
    fprintf(file, " || ");

    fprintf(file, "BUNIT_PRE1: ");
    // if exists, print field
    if (curr->bunit_pre1) {
        fprintf(file, "%s", curr->bunit_pre1);
    }
    fprintf(file, " || ");

    fprintf(file, "BUNIT_ID1: ");
    // if exists, print field
    if (curr->bunit_id1) {
        fprintf(file, "%s", curr->bunit_id1);
    }
    fprintf(file, " || ");

    fprintf(file, "BUNIT_SUF1: ");
    // if exists, print field
    if (curr->bunit_suf1) {
        fprintf(file, "%s", curr->bunit_suf1);
    }
    fprintf(file, " || ");

    fprintf(file, "BUNIT_PRE2: ");
    // if exists, print field
    if (curr->bunit_pre2) {
        fprintf(file, "%s", curr->bunit_pre2);
    }
    fprintf(file, " || ");

    fprintf(file, "BUNIT_ID2: ");
    // if exists, print field
    if (curr->bunit_id2) {
        fprintf(file, "%s", curr->bunit_id2);
    }
    fprintf(file, " || ");

    fprintf(file, "BUNIT_SUF2: ");
    // if exists, print field
    if (curr->bunit_suf2) {
        fprintf(file, "%s", curr->bunit_suf2);
    }
    fprintf(file, " || ");

    fprintf(file, "FLOOR_TYPE: ");
    // if exists, print field
    if (curr->floor_type) {
        fprintf(file, "%s", curr->floor_type);
    }
    fprintf(file, " || ");

    fprintf(file, "FLOOR_NO_1: ");
    // if exists, print field
    if (curr->floor_NO_1) {
        fprintf(file, "%s", curr->floor_NO_1);
    }
    fprintf(file, " || ");

    fprintf(file, "FLOOR_NO_2: ");
    // if exists, print field
    if (curr->floor_NO_2) {
        fprintf(file, "%s", curr->floor_NO_2);
    }
    fprintf(file, " || ");

    fprintf(file, "BUILDING: ");
    // if exists, print field
    if (curr->building) {
        fprintf(file, "%s", curr->building);
    }
    fprintf(file, " || ");

    fprintf(file, "COMPLEX: ");
    // if exists, print field
    if (curr->complex) {
        fprintf(file, "%s", curr->complex);
    }
    fprintf(file, " || ");

    fprintf(file, "HSE_PREF1: ");
    // if exists, print field
    if (curr->hse_pref1) {
        fprintf(file, "%s", curr->hse_pref1);
    }
    fprintf(file, " || ");


    fprintf(file, "HSE_NUM1: ");
    // if exists, print field
    if (curr->hse_num1) {
        fprintf(file, "%s", curr->hse_num1);
    }
    fprintf(file, " || ");

    fprintf(file, "HSE_SUF1: ");
    // if exists, print field
    if (curr->hse_suf1) {
        fprintf(file, "%s", curr->hse_suf1);
    }
    fprintf(file, " || ");

    fprintf(file, "HSE_PREF2: ");
    // if exists, print field
    if (curr->hse_pref2) {
        fprintf(file, "%s", curr->hse_pref2);
    }
    fprintf(file, " || ");

    fprintf(file, "HSE_NUM2: ");
    // if exists, print field
    if (curr->hse_num2) {
        fprintf(file, "%s", curr->hse_num2);
    }
    fprintf(file, " || ");

    fprintf(file, "HSE_NUM2: ");
    // if exists, print field
    if (curr->hse_suf2) {
        fprintf(file, "%s", curr->hse_suf2);
    }
    fprintf(file, " || ");

    fprintf(file, "DISP_NUM1: ");
    // if exists, print field
    if (curr->disp_num1) {
        fprintf(file, "%s", curr->disp_num1);
    }
    fprintf(file, " || ");

    fprintf(file, "ROAD_NAME: ");
    // if exists, print field
    if (curr->road_name) {
        fprintf(file, "%s", curr->road_name);
    }
    fprintf(file, " || ");

    fprintf(file, "ROAD_TYPE: ");
    // if exists, print field
    if (curr->road_type) {
        fprintf(file, "%s", curr->road_type);
    }
    fprintf(file, " || ");

    fprintf(file, "RD_SUF: ");
    // if exists, print field
    if (curr->rd_suf) {
        fprintf(file, "%s", curr->rd_suf);
    }
    fprintf(file, " || ");

    fprintf(file, "LOCALITY: ");
    // if exists, print field
    if (curr->locality) {
        fprintf(file, "%s", curr->locality);
    }
    fprintf(file, " || ");

    fprintf(file, "STATE: ");
    // if exists, print field
    if (curr->state) {
        fprintf(file, "%s", curr->state);
    }
    fprintf(file, " || ");

    fprintf(file, "POSTCODE: ");
    // if exists, print field
    if (curr->postcode) {
        fprintf(file, "%s", curr->postcode);
    }
    fprintf(file, " || ");

    fprintf(file, "ACCESSTYPE: ");
    // if exists, print field
    if (curr->accesstype) {
        fprintf(file, "%s", curr->accesstype);
    }
    fprintf(file, " || ");

    fprintf(file, "x: ");
    // if exists, print field
    if (curr->x) {
        fprintf(file, "%Lf", curr->x);
    }
    fprintf(file, " || ");
    

    fprintf(file, "y: ");
    // if exists, print field
    if (curr->y) {
        fprintf(file, "%Lf", curr->y);
    }
    fprintf(file, " ||\n");
}
