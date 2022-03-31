#include <stdio.h>
int main(){
    int choice;
    printf("Escolha qual tipo de conta voce deseja:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n");
    scanf("%i", &choice);
    if(choice == 1){
        float a, b, result;
        printf("Me diga o primeiro numero da soma:\n");
        scanf("%f", &a);
        printf("Me diga o 2 numero da soma:\n");
        scanf("%f", &b);
        result = a + b;
        printf("O resultado da soma e: %0.2f\n", result);
    }
    else if(choice == 2){
        float a, b, result;
        printf("Me diga o primeiro numero da subtracao:\n");
        scanf("%f", &a);
        printf("Me diga o 2 numero da subtracao:\n");
        scanf("%f", &b);
        result = a - b;
        printf("O resultado da subtracao e: %0.2f\n", result);
    }
    else if(choice == 3){
        float a, b, result;
        printf("Me diga o primeiro numero da multiplicacao:\n");
        scanf("%f", &a);
        printf("Me diga o 2 numero da multiplicacao:\n");
        scanf("%f", &b);
        result = a * b;
        printf("O resultado da multiplicacao e: %0.2f\n", result);
    }
    else if(choice == 4){
        float a, b, result;
        printf("Me diga o primeiro numero da divisao:\n");
        scanf("%f", &a);
        printf("Me diga o 2 numero da divisao:\n");
        scanf("%f", &b);
        result = a / b;
        printf("O resultado da divisao e: %0.2f\n", result);
    }
    else{
        printf("Opcao invalida\n");
    }
    printf("Aperte qualquer tecla para sair\n");
    _getch();
}
