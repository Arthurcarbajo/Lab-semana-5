#include <stdio.h>
#include <stdbool.h>

bool contem(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return true;
        }
    }
    return false;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int elemento = 8;
    
    if (contem(vetor, 5, elemento)) {
        printf("O elemento %d foi encontrado no vetor.\n", elemento);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", elemento);
    }

    return 0;
}
