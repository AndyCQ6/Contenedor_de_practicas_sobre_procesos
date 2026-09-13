#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t fh = fork(); 

    if (fh < 0) {
        printf("¡Error! No se pudo crear el proceso hijo.\n");
        return 1;
    }
    else if (fh == 0) {
        printf("Soy el HIJO. Mi PID es %d y mi papá es %d\n", getpid(), getppid());
    }
    else {
        printf("Soy el PADRE. Mi PID es %d y mi hijo es %d\n", getpid(), fh);
    }

    return 0;
}
