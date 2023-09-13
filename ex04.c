#include <stdio.h>

int busca_primeiro(int v[], int n, int e) {
    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            return i;
        }
    }
    return -1;
}

int main() {
    int vetor[] = {1, 2, 2, 4, 5};
    int elemento = 2;
    
    int indice = busca_primeiro(vetor, 5, elemento);
    
    if (indice != -1) {
        printf("O elemento %d foi encontrado no índice %d.\n", elemento, indice);
    } else {
        printf("O elemento %d não foi encontrado no vetor.\n", elemento);
    }
    
    return 0;
}
