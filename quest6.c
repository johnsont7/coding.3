#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    printf("Start\n");
    int PID = fork();
    int PID2 = fork();
    if(PID < 0) {
        printf("Fork failed\n");
    } else if(PID == 0) {
        // int childPID = wait(NULL);
        // printf("I waited for my child: %d\n", childPID);
        printf("Hello, I am the child process %d\n", getpid());
    } else {
        printf("My child PID is: %d\n", PID);
        int childPID = waitpid(PID, NULL, 0);
        printf("I waited for my child: %d\n", childPID);
        printf("Goodbye\n");
    }
    return 0;
}

/*
Your Name: Taylor Johnson

Question 6: waitpid() would be useful when you have many child processes and you want to 
wait for a specific one to finish.
*/