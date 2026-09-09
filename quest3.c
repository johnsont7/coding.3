#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Start\n");
    int PID = fork();
    if(PID < 0) {
        printf("Fork failed\n");
    } else if(PID == 0) {
        printf("Hello\n");
    } else {
        sleep(1); 
        printf("Goodbye\n");
    }
}

/*
Your Name: Taylor Johnson

*/