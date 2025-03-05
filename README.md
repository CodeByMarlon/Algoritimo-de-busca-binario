# Busca Binária em C

Este programa implementa a **busca binária** em um vetor ordenado de números inteiros e exibe o número de comparações realizadas durante a busca.

## Funcionamento

1. O vetor é preenchido automaticamente com valores de 2 em 2 (2, 4, 6, ..., 100).
2. O usuário insere um número para buscar no vetor.
3. A busca binária é realizada para encontrar o elemento.
4. O programa exibe a posição do elemento (caso encontrado) e o número de comparações realizadas.

## Estrutura do Código

- **Função `busca_binaria`**
  - Realiza a busca binária no vetor.
  - Retorna o índice do elemento encontrado ou -1 caso o elemento não esteja presente.
  - Conta o número de comparações realizadas.

- **Função `main`**
  - Preenche o vetor.
  - Exibe os números gerados.
  - Solicita um número ao usuário.
  - Chama a função `busca_binaria`.
  - Exibe os resultados da busca.

## Compilação e Execução

Para compilar e executar o programa, utilize um compilador **GCC**:

```sh
gcc busca_binaria.c -o busca_binaria
./busca_binaria
```

## Exemplo de Uso

```
Vetor de numeros: 2 4 6 8 10 ... 100
Digite o numero que deseja buscar: 20
Elemento encontrado na posicao: 9
Numero de comparacoes realizadas: 4
```

## Observações
- O vetor utilizado no programa já está ordenado, condição essencial para o funcionamento da busca binária.
- O programa pode ser modificado para aceitar diferentes tamanhos de vetor ou diferentes critérios de preenchimento.

---


