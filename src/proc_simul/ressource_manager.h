#pragma once



enum {
    // ressources
} RESSOURCE;

typedef struct {
    char* ressource_name[10]; // nom de ressource
    RESSOURCE* ressource; // type 
    bool disponibilite; // dispo ou non 1 / 0
} RESSOURCES_ELEMENT;

typedef struct {
    RESSOURCES_ELEMENT* ressources; // again using malloc to allocate N ressources
    int ressource_count; // n ressources
} RESSOURCE_MANAGER;