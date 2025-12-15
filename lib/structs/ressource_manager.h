#pragma once



#include "structs/ressource.h"


typedef struct {
    RESSOURCE_ELEMENT* ressources; // again using malloc to allocate N ressources
    int ressource_count; // n ressources

    //functions
    // on start
    RESSOURCE_ELEMENT* (*create_ressource_list)(void);

    // ressources operations
    RESSOURCE_ELEMENT* (*look_for_ressource_in_list)(char* ressource_name);
    RESSOURCE_ELEMENT* (*mark_ressource_available)(RESSOURCE* ressource);
    RESSOURCE_ELEMENT* (*mark_ressource_unavailable)(RESSOURCE* ressource);
    RESSOURCE_ELEMENT* (*check_if_ressource_available)(RESSOURCE* ressource); // if available return  if not return 0
    
} RESSOURCE_MANAGER;

/*
typedef enum {
    RES_CPU,
    RES_MEMORY,
    RES_DISK,
    RES_NETWORK,
    RES_COUNT   // 👈 sentinel
} RESSOURCE_TYPE;
Now you can iterate:

c
Copy code
for (int r = 0; r < RES_COUNT; r++) {
    // initialize resource r
}
*/