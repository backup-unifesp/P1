#include <stdio.h>

int main() {
    int soma = 0, maior = -1, indice = -1, elem = 0;
    int v1[50], v2[50]; // Correção: v2 foi dimensionado corretamente
    int i, n;
    
    // Leitura e validação dos 50 elementos
    for(i = 0; i < 50; i++) {
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &v1[i]);
        
        if(v1[i] < 0 || v1[i] > 50) {
            printf("O numero deve estar no intervalo 0-50\n");
            i--; // Decrementa a variável i para repetir a inserção nesta posição
        } else {
            soma += v1[i];
        }
        
        if(v1[i] > maior) {
            maior = v1[i];
        }
    }
    
    // Exibição dos elementos digitados e dos valores calculados
    printf("\nElementos de v1:\n");
    for(i = 0; i < 50; i++) {
        printf("%d ", v1[i]);
    }
    printf("\nSoma = %d, Maior = %d\n", soma, maior);
    
    // Busca pelo elemento
    printf("\nDigite um numero para busca: ");
    scanf("%d", &n);
    
    for(i = 0; i < 50; i++) {
        if(n == v1[i]) {
            indice = i;
            break;
        }
    }
    
    if(indice == -1) {
        printf("Numero nao encontrado\n");
    } else {
        printf("A primeira ocorrencia do numero e no indice %d\n", indice);
    }
    
    // Preenchimento e exibição do vetor de pares
    printf("\n");
    for(i = 0; i < 50; i++) {
        if(v1[i] % 2 == 0) {
            v2[elem] = v1[i]; // Armazena o número no vetor de pares de forma sequencial
            printf("Vetor par %d: %d\n", elem, v2[elem]);
            elem++; // Incrementa a quantidade de elementos pares
        }
    }
    
    printf("O vetor par possui %d elementos\n", elem);
    
    return 0;
}
