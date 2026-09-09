#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Start\n");
    int x = 0;
    fork();
    printf("After fork, x = %d\n", x);
    x += 1;
    printf("x = %d\n", x);
    return 0;
}

/*
Your Name: Taylor Johnson
Question 1: It appears the the varaible in the parent and child processes are two different 
variables because the variable x retains it's value from before the fork in both processes.
*/