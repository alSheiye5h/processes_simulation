



typedef struct {
    PCB* head;
    int size;
} buffer_return;


typedef struct {
    int pid;
    char process_name[20];
    char user_id[20];
    int ppid;
    E_etat etat; // one of the values in the enum e_etat
    int prioritie; // priorities from 1 to 5 ; 1-critical

    INSTRUCTION* instructions;
    long programme_compteur; // max 9,223,372,036,854,775,807 instruction
    int memoire_necessaire; // en MB
    INSTRUCTION* current_instruction; // l'instruction en train de s executer

    int burst_time; // total temps necessaire en ms pour l'exec . burst = compte_temps + temps_restant
    float cpu_time_used; // temps cpu consomme en ms init 0
    int remaining_time; // temps restant : = burst - cpu_time_used
    int cpu_usage; // initialized as 0

    PROCESS_STATISTICS* statistics; 

    int* pid_childrens;
    PCB* pid_sibling_next; // pointeur vers next sib
    PCB* pid_sibling_previous; // pointeur vers previous sib
} PCB;

buffer_return* extract_from_buffer(FILE* csv_buffer) {
    
    int count = 0;

    char line_pcb[10000];
    while(fgets(line_pcb, sizeof(buffer), csv_buffer)) { // dont forget temps creation
        

        PCB pcb = {
            count,

        }
    }
}

typedef struct {

} parser_return;

buffer_return* parse(char* line) {

}