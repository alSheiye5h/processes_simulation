#pragma once

#include <stdbool.h>

typedef enum {

    AAA, BBB, CCC, DDD, EEE, FFF

} RESSOURCE;

typedef struct {
    
    char ressource_name[10]; // nom de ressource
    RESSOURCE ressource; // type 
    bool disponibilite; // dispo ou non true / false
    struct RESSOURCE_ELEMENT* next_ressource;

} RESSOURCE_ELEMENT;