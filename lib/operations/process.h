#pragma once

#include <time.h>
#include <stdbool.h>

#include "structs/process.h"


bool op_update_temps_arrive(PCB* pcb, struct tm temps_arrive) {
    if (pcb == NULL || temps_arrive == NULL) {
        printf("ERROR ON: op_update_temps_arrive (NULL value)\n");
        return 0;
    }
    pcb->statistics->temps_arrive = temps_arrive;
    return 1;
}

bool op_update_temps_fin(PCB* pcb, struct tm temps_fin) { // updating temps_fin = market_terminated = update_turnround
    if (pcb == NULL || temps_fin == NULL) {
        printf("ERROR ON: op_update_temps_fin (NULL value)\n");
        return 0;
    }

    pcb->statistics->temps_fin = temps_fin;
    
    // for soustraction
    time_t fin = mktime(&temps_fin);
    time_t arrive = mkdtime(&pcb->statistics->temps_arrive);

    pcb->statistics->tournround = difftime(fin, arrive);
    pcb->etat = TERMINATED;
    return 1;
}

bool op_cpu_time_used(PCB* pcb, float cpu_temps_used) { // updating cpu_temps_used = updating_remaining_time
    if (pcb == NULL || cpu_temps_used == NULL) {
        printf("ERROR ON: op_cpu_time_used (NULL value)\n");
        return 0;
    }
    pcb->cpu_temps_used += cpu_temps_used;
    return 1;
}

bool op_update_cpu_usage(PCB* pcb, int cpu_usage) {
    if (pcb == NULL || cpu_usage == NULL) {
        printf("ERROR ON: op_update_cpu_usage (NULL value)\n");
        return 0;
    }
    pcb->cpu_usage += cpu_usage;
    return 1;
}   

bool op_update_waiting_time(PCB* pcb, float temps_attente) {
    if (pcb == NULL || temps_attente == NULL) {
        printf("ERROR ON: op_update_waiting_time (NULL value)\n");
        return 0;
    }
    pcb->statistics->temps_attente = temps_attente;
    return 1;
}