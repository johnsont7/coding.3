#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    printf("Start\n");
    int PID = fork();
    if(PID < 0) {
        printf("Fork failed\n");
    } else if(PID == 0) {
        int childPID = wait(NULL);
        printf("I waited for my child: %d\n", childPID);
        printf("Hello\n");
    } else {
        int childPID = wait(NULL);
        printf("I waited for my child: %d\n", childPID);
        printf("Goodbye\n");
    }
    return 0;
}

/*
Your Name: Taylor Johnson

Question 5: The wait function returned -1 in the child process meaning it failed because 
it has no child processes.
*/