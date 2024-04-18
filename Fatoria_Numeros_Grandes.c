#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 40000

void multiply(int *result, int *size, int x);
void show_result(int *result, int size);

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 2) {
        printf("Resultado: 1\n");
    } else {
        int result[MAX_SIZE] = {0};
        result[0] = 1;
        int size = 1;

        for (int i = 2; i <= n; i++) {
            multiply(result, &size, i);
        }

        printf("Resultado: ");
        show_result(result, size);
    }

    return 0;
}

void multiply(int *result, int *size, int x) {
    int carry = 0;

    for (int i = 0; i < *size; i++) {
        int prod = result[i] * x + carry;
        result[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry) {
        result[*size] = carry % 10;
        carry /= 10;
        (*size)++;
    }
}

void show_result(int *result, int size) {
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");
}
