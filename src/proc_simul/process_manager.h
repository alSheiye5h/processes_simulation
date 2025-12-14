#pragma once

#include "process.h" // for PCB struct
#include "ressource_manager.h" // for RESSOURCE_ELEMENT

// structures nedded par les fonctions du process_manager
typedef struct { // used by process manager: many iteraction over process list but obe contact with ready queue for time reducing
    PCB* first_element;
    int size;
} pcb_list; // stand for pcb first came

typedef struct {
    int pid; // l identifier du processus
    PCB* pcb; // l id du pcb du processus
} PROCESS_TABLE;

typedef struct {
    int pid; // processus id
    READY_QUEUE_ELEMENT* next; // pointeur vers element suivant
    READY_QUEUE_ELEMENT* previous; // pointeur vers element precedent
} READY_QUEUE_ELEMENT;

typedef struct { // ordred chaine
    READY_QUEUE_ELEMENT* head; // pointeur vers premier element du chaine
    READY_QUEUE_ELEMENT* tail; // pointeur vers last element
    int size; // nombre du nodes
} READY_QUEUE;


typedef struct {
    int pid; // l id processus
    RESSOURCE_ELEMENT* ressource; // ressource needed to execute the instruction
} BLOCKED_QUEUE_ELEMENT;

typedef struct { // circular chaine
    BLOCKED_QUEUE_ELEMENT* head; // first elme
    BLOCKED_QUEUE_ELEMENT* tail; // last one
    int size; // how many elements
} BLOCKED_QUEUE;

typedef struct {
    PROCESS_TABLE* process_table; // pointeur vers process table
    int process_count; // n processes
    READY_QUEUE* ready_queue; // pointer to ready chaine
    BLOCKED_QUEUE* blocked_queue; // pointer to blocked
} PROCESS_MANAGER;