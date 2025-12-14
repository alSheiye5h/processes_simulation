#pragma once



enum {
    MEMORY, SOCKET, FILE, CPU, DEVICE_A, DEVICE_B, DEVICE_C
} RESSOURCE;

typedef struct {
    char* ressource_name[10]; // nom de ressource
    RESSOURCE* ressource; // type 
    bool disponibilite; // dispo ou non 1 / 0
} RESSOURCE_ELEMENT;

typedef struct {
    RESSOURCE_ELEMENT* head; // first element in chaine
    RESSOURCE_ELEMENT* tail; // last one
    int size; // how many element in the chaine<
} RESSOURCES_LIST;

typedef struct {
    RESSOURCE_ELEMENT* ressources; // again using malloc to allocate N ressources
    int ressource_count; // n ressources
} RESSOURCE_MANAGER;