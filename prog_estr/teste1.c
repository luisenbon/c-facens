#include <stdio.h>

static int* test() {
    static int x = 5;
    return &x;
}

int main() {
    int *px = test();
    printf("%i", *px);



    Sleep(5000);
    return 0;

}

void metade(float k)