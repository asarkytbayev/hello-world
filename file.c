#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char **argv) {
    printf("Hello, world!\n");
    printf("This is another hello!\n");
    printf("And another hello\n");
    int x = 28;
    int y = 0;
    swap(&x, &y);
    
    printf("swapped values of (x, y) = (%d, %d)\n", x, y);
    return 0;
}
