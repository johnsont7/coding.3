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

*/