#pragma once


typedef enum {
    AAA, BBB, CCC, DDD, EEE, FFF
} RESSOURCE;

typedef struct {
    char* ressource_name[10]; // nom de ressource
    RESSOURCE ressource; // type 
    bool disponibilite; // dispo ou non 1 / 0
} RESSOURCE_ELEMENT;