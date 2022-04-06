#include <stdio.h>

<<<<<<< HEAD
int course_number[6] = {2, 3, 4, 1, 2,4};
int main() {
    for(int i =  -1; i < 5; i++) {
        printf("%d", course_number[i+1]);
    }
    printf("\n");
    return 0;
}

=======
int course_number[6] = {4, 2, 1, 4, 3, 2};
int main() {
	for(int i = 6; i > 0; i--) {
		printf("%d", course_number[i-1]);
	}
	printf("\n");
	return 0;
}
>>>>>>> 3580e355c070c99c43a40a853e0373bdf4a2d810
