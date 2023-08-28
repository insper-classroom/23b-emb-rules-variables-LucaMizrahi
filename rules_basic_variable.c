#include "stdio.h"

// ..

void foo(int *a) {
    *a = *a + 1; // acessa variavel local
}

void main(void) {
    while (1) {
        foo(&a);
        
        if (a > 5) {
            b = 1;
        }
    }
}
