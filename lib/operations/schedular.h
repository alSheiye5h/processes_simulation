#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "structs/execution_queue.h"
#include "structs/schedular.h"
#include "structs/ressource.h"
#include "structs/process.h"
#include "structs/simulator.h"

ORDONNANCEUR_STATISTICS* op_create_statistics() {   

    ORDONNANCEUR_STATISTICS* statistics = (ORDONNANCEUR_STATISTICS*)malloc(sizeof(ORDONNANCEUR_STATISTICS)); // init the statistics

    if (statistics == NULL) {
        fprintf(stderr, "ERROR ON: op_create_statistics: Failed to allocate memory for statistics\n");
        exit(1);
    }

    return statistics;

}

// ordonnanceur to simulator
bool op_need_ressources(EXECUTION_QUEUE* execution_queue, RESSOURCE_ELEMENT* ressource_needed) {
    

}

bool op_ressource_is_free(RESSOURCE_ELEMENT* ressource) {

}

bool op_update_cpu_time_used(PCB* process, float inc) {

}

bool op_update_process(PCB* process, float temps_fin, float tournround, float temps_attente) {

}

bool op_ask_sort_rt() {

}

bool op_ask_sort_priority() {

}

PCB* op_ask_for_next_ready_element(PCB* current_pcb) {

}

// ordonnanceur to execution queue
EXECUTION_RESULT* op_execute_instruction(ORDONNANCEUR* self, EXECUTION_QUEUE* execution_queue, INSTRUCTION* instruction) {
    bool disponibility = self->check_ressource_disponibility(instruction->type);
    
    if (disponibility == true) {
        execution_queue->execute_instruction(instruction, self->quantum); // if it's disponible then exeute it
        
    }
    else {
        
    }
}

// update statistics
bool op_update_schedular_statistics(ORDONNANCEUR_STATISTICS* schedular, float cpu_total_temps_usage, float cpu_temps_unoccupied, int context_switch, float total_temps_attente, float process_termine_count, float throughtput) { // must check nullty

}

bool op_check_ressource_disponibility(SIMULATOR* simulator, RESSOURCE ressource) {

    bool result = simulator->check_ressource_disponibility(ressource);

    return result;

}