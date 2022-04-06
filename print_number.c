#include <stdio.h>

int course_number[6] = {2, 3, 4, 1, 2, 4};
int main() {
    for(int j =  0; j < 6; j++) {
        printf("%d", course_number[j]);
    }
    printf("\n");
    return 0;
}
