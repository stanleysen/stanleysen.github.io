#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t child_pid;
    
    child_pid = fork();

    if (child_pid == 0) {
        // Ini adalah kode anak
        printf("Ini adalah anak process.\n");
    } else if (child_pid > 0) {
        // Ini adalah kode orangtua
        printf("Ini adalah orangtua process.\n");
    } else {
        perror("Fork failed");
        return 1;
    }

    return 0;
}
