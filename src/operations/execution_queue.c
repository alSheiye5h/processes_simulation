
#include <unistd.h>

#include "../../lib/structs/schedular.h"
#include "../../lib/structs/process.h"


WORK_RETURN execute_rr(float quantum) {
    sleep(quantum);
    return WORK_DONE;
}