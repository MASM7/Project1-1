#include <stdio.h>
#include "assembler.h"

int main() {
    assembler("fibonacci.asm", "fibonacci.bin");
    return 0;
}

