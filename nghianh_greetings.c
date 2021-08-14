#include <stdio.h>
#include <string.h>
#include "nghianh_greetings.h"
void nghianh_get_greeting(char * buffer) {

    if(buffer == NULL) {
        return;
    }

    char greeting[] = "Hello NghiaNH from the lib\n";
    strcpy(buffer, greeting);
    return;
}
