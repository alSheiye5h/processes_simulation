
#include <stdio.h>
#include <stdlib.h>

int ask_for_algorithm() {
    int algorithm;

    do {
        printf("Hello\n\twhich algorithm you wish to run :\n");
        printf("0: RR\n");
        printf("1: SRTF\n");
        printf("2: PPP\n");
        printf("3: FCFS\n");
        printf("4: SJF\n");
        scanf("%d", &algorithm);
    } while (algorithm != 0 && algorithm != 1 && algorithm != 2 && algorithm != 3 && algorithm != 4);
    
    return algorithm;
}