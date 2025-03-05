#include <stdio.h>

// Função de busca binária com contador de comparações
int busca_binaria(int vetor[], int tamanho, int elemento, int *comparacoes) {
    int esquerda = 0, direita = tamanho - 1, meio;
    *comparacoes = 0; // Inicializa o contador

    while (esquerda <= direita) {
        (*comparacoes)++; // Incrementa o contador a cada iteração
        meio = (esquerda + direita) / 2;

        if (vetor[meio] == elemento) {
            return meio; // Retorna o índice onde o elemento foi encontrado
        }

        if (vetor[meio] > elemento) {
            direita = meio - 1;
        } else {
            esquerda = meio + 1;
        }
    }

    return -1; // Retorna -1 se o elemento não for encontrado
}

int main() {
    int numeros[50];
    int tamanho = 50, elemento_procurado, resultado, comparacoes;

    // Preenche o vetor com valores de 2 em 2 (exemplo: 2, 4, 6, ..., 100)
    for (int i = 0; i < tamanho; i++) {
        numeros[i] = (i + 1) * 2;
    }

    // Exibe os valores do vetor
    printf("Vetor de numeros: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    // Solicita ao usuário um número para buscar
    printf("Digite o numero que deseja buscar: ");
    scanf("%d", &elemento_procurado);

    // Chama a função de busca binária
    resultado = busca_binaria(numeros, tamanho, elemento_procurado, &comparacoes);

    // Exibe o resultado da busca e o número de comparações realizadas
    if (resultado != -1) {
        printf("Elemento encontrado na posicao: %d\n", resultado);
    } else {
        printf("Elemento não encontrado no vetor.\n");
    }
    printf("Numero de comparacoes realizadas: %d\n", comparacoes);

    return 0;
}