#include <stdio.h>

int busca_ultimo(int v[], int n, int e) {
    int ultimoIndice = -1;

    for (int i = 0; i < n; i++) {
        if (v[i] == e) {
            ultimoIndice = i;
        }
    }

    return ultimoIndice;
}

int main() {
    int vetor[] = {1, 2, 3, 4, 2, 5, 2, 6};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int elemento = 2;

    int indice = busca_ultimo(vetor, tamanho, elemento);

    if (indice != -1) {
        printf("O último índice de %d no vetor é: %d\n", elemento, indice);
    } else {
        printf("%d não foi encontrado no vetor.\n", elemento);
    }

    return 0;
}
