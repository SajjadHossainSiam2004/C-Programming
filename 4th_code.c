#include <stdio.h>

void printIterations(int limit) {
    int i = 0;
    while(i < limit) {
        printf("Iteration %d\n", i);
        i++;
    }
}

int main() {
    printIterations(5);
    return 0;
}
