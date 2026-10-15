#include <stdio.h>

int main() {
    int num1, num2, num3;
    
    // 1. Solicitar ao usuário três números inteiros
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro numero inteiro: ");
    scanf("%d", &num3);
    
    printf("\n--- RESULTADOS DOS CALCULOS ARITMETICOS ---\n");
    // Usamos float para exibir a divisão com decimais, caso desejado.
    int soma = num1 + num2 + num3;
    int subtracao = num1 - num2 - num3;
    int multiplicacao = num1 * num2 * num3;
    
    printf("Soma (%d + %d + %d) = %d\n", num1, num2, num3, soma);
    printf("Subtracao (%d - %d - %d) = %d\n", num1, num2, num3, subtracao);
    printf("Multiplicacao (%d * %d * %d) = %d\n", num1, num2, num3, multiplicacao);
    
    // Tratamento para evitar divisão por zero no segundo ou terceiro número
    if (num2 != 0 && num3 != 0) {
        float divisao = (float)num1 / num2 / num3;
        printf("Divisao (num1 / num2 / num3) = %.2f\n", divisao);
    } else {
        printf("Divisao: Nao e possivel dividir por zero (num2 ou num3 sao zero).\n");
    }
    
    printf("\n--- VERIFICACOES RELACIONAIS ---\n");
    // 2. Utilizar operadores relacionais
    if (num1 > num2) {
        printf("O primeiro numero (%d) e MAIOR que o segundo (%d).\n", num1, num2);
    } else {
        printf("O primeiro numero (%d) NAO e maior que o segundo (%d).\n", num1, num2);
    }
    
    if (num2 < num3) {
        printf("O segundo numero (%d) e MENOR que o terceiro (%d).\n", num2, num3);
    } else {
        printf("O segundo numero (%d) NAO e menor que o terceiro (%d).\n", num2, num3);
    }
    
    printf("\n--- VALIDACAO COM OPERADORES LOGICOS ---\n");
    // 3. Operadores lógicos: primeiro número positivo (num1 > 0) E segundo número par (num2 % 2 == 0)
    if (num1 > 0 && num2 % 2 == 0) {
        printf("CONDICAO ATENDIDA: O primeiro numero (%d) e positivo E o segundo numero (%d) e par!\n", num1, num2);
    } else {
        printf("CONDICAO NAO ATENDIDA: Nem todas as exigencias logicas foram satisfeitas.\n");
    }
    
    return 0;
}