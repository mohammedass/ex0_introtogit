#include <stdio.h>

int course_number[6] = {2, 3, 4, 1, 2,4};
int main() {
    for(int i =  -1; i < 5; i++) {
        printf("%d", course_number[i+1]);
    }
    printf("\n");
    return 0;
}

