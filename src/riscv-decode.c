#include <stdio.h>

#include "riscv-disas.h"

int main(int argc, char **argv){
    while(!feof(stdin)){
        char buf[1024], buf2[1024];
        buf[0] = 0;
        fscanf(stdin, "%s", buf);
        if(buf[0]){
            int inst;
            unsigned int pc = 0xdeadbeef;
            sscanf(buf, "%x", &inst);

            disasm_inst(buf2, sizeof(buf2), rv32, pc, inst);

            printf("%s\n", buf2);
            fflush(stdout);
            buf2[0] = 0;
        }
    }
    return 0;
}

