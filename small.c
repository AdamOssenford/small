#include <unistd.h>

void _start() {
    char msg[] = "Hello Docker World!\n";
    write(1, msg, sizeof(msg));
    _exit(0);
}
