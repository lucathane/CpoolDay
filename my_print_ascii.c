#include "cobra.h"

void my_print_ascii(void) {
    for (char ascii = '!' ; ascii != '~'+1; ascii++) {
        printf("%c",ascii) ;
    }
}