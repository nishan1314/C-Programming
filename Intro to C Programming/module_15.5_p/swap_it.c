#include <stdio.h>

// Function to swap two integer variables using pointers
void swap_it(int *a, int *b) {
    int temp = *a; // Store the value of a in a temporary variable
    *a = *b;      // Assign the value of b to a
    *b = temp;    // Assign the value of the temporary variable to b
}

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    int *ptr1=&x;
    int *ptr2=&y;

    swap_it(ptr1,ptr2);

    printf("%d %d\n", x, y);

    return 0;
}
