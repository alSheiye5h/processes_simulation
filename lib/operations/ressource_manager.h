#pragma once

#include "structs/ressource_manager.h"
#include "structs/ressource.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


int ressource_number = 6;


// typedef struct {
//     char* ressource_name[10]; // nom de ressource
//     RESSOURCE ressource; // type 
//     bool disponibilite; // dispo ou non 1 / 0
// } RESSOURCE_ELEMENT;

// on start
RESSOURCE_ELEMENT* op_create_ressource_list(void) {
    RESSOURCE_ELEMENT* ressources_head = (RESSOURCE_ELEMENT*)malloc(sizeof(RESSOURCE_ELEMENT)); // init the head

    if (ressources_head == NULL) { // check allocation
        printf("ERROR ON: op_create_ressource_list failed to allocate ressources head");
        exit(1);
    }

    RESSOURCE_ELEMENT* TEMP1 = ressources_head;

    // enum_size should update this when updating ressources // change var

    for (int i = 0; i < ressource_number; i++) {
        RESSOURCE_ELEMENT* node = (RESSOURCE_ELEMENT*)malloc(sizeof(RESSOURCE_ELEMENT));
        if (node == NULL) {  // CHECK FAIL
            printf("ERROR ON: op_create_ressource_list failed to allocate new node");
            exit(1);
        }
        if (i == 5)
            TEMP1->next_ressource = NULL;
        else {
            TEMP1->next_ressource = node;
            TEMP1 = TEMP1->next_ressource;
        }
    }
    
    RESSOURCE_ELEMENT* TEMP = ressources_head;


    while (TEMP != NULL) {

        switch (TEMP->ressource) {
            case 0:
                strcpy(TEMP->ressource_name, "AAA");
                break;
            case 1: 
                strcpy(TEMP->ressource_name, "BBB");
                break;
            case 2: 
                strcpy(TEMP->ressource_name, "CCC");
                break;
            case 3: 
                strcpy(TEMP->ressource_name, "DDD");
                break;
            case 4: 
                strcpy(TEMP->ressource_name, "EEE");
                break;
            case 5: 
                strcpy(TEMP->ressource_name, "FFF");
                break;
        }

        TEMP = TEMP->next_ressource;
    }

    return ressources_head;
}


// ressources operations
RESSOURCE_ELEMENT* op_look_for_ressource_in_list(char* ressource_name) {

}

bool op_mark_ressource_available(RESSOURCE* ressource) {

}

bool op_mark_ressource_unavailable(RESSOURCE* ressource) {

}

bool op_check_if_ressource_available(RESSOURCE* ressource) {


}