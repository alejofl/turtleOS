#include <processes.h>
#include <types.h>
#include <syslib.h>

void wc(int argc, char *argv[]) {
    int lines = 0;
    char c, previous = 0;
    while ((c = get_char()) != EOF) {
        if (c == '\n') {
            lines++;
        }
        put_char(c);
        previous = c;
    }
    if (previous != 0 && lines == 0) {
        lines = 1;
    } else if(previous != '\n') {
        lines++;
    }
    fprintf(STDOUT,"%d lines were printed\n",lines);
}