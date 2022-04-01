#include <stdio.h>
#include<math.h>
int main(){
    int choice;
    printf("Escolha qual tipo de conta voce deseja:\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - DivisaoN\n5 - Elevado a potencia\n6 - Raiz quadrada\n7 - Seno\n8 - Cosseno\n9 - Tangente\n10 - Secante\n12 - Cotangente\n13 - Sair\n");
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
    else if(choice == 5){
        int n1, n2, r;
        printf("Em manutencao\n");
        printf("Me diga o primeiro numero da potencia:\n");
        scanf("%i", &n1);
        printf("Me diga o 2 numero da potencia:\n");
        scanf("%i", &n2);
        r = pow(n1, n2);
        printf("O resultado da potencia e: %i\n", r);
    }
    else if(choice == 6){
        float a, result;
        printf("Me diga o numero da raiz quadrada:\n");
        scanf("%f", &a);
        result = sqrt(a);
        printf("O resultado da raiz quadrada e: %0.2f\n", result);
    }
    else if(choice == 7){
        float a, result;
        printf("Me diga o numero da seno:\n");
        scanf("%f", &a);
        result = sin(a);
        printf("O resultado da seno e: %0.2f\n", result);
    }
    else if(choice == 8){
        float a, result;
        printf("Me diga o numero da cosseno:\n");
        scanf("%f", &a);
        result = cos(a);
        printf("O resultado da cosseno e: %0.2f\n", result);
    }
    else if(choice == 9){
        float a, result;
        printf("Me diga o numero da tangente:\n");
        scanf("%f", &a);
        result = tan(a);
        printf("O resultado da tangente e: %0.2f\n", result);
    }
    else if(choice == 10){
        float a, result;
        printf("Me diga o numero da secante:\n");
        scanf("%f", &a);
        result = 1/cos(a);
        printf("O resultado da secante e: %0.2f\n", result);
    }
    else if(choice == 11){
        float a, result;
        printf("Me diga o numero da cosecante:\n");
        scanf("%f", &a);
        result = 1/sin(a);
        printf("O resultado da cosecante e: %0.2f\n", result);
    }
    else if(choice == 12){
        float a, result;
        printf("Me diga o numero da cotangente:\n");
        scanf("%f", &a);
        result = 1/tan(a);
        printf("O resultado da cotangente e: %0.2f\n", result);
    }
    else if(choice == 13){
        printf("Obrigado por usar o calculadora\n");
    }
    else{
        printf("Opcao invalida\n");
    }
    printf("Aperte qualquer tecla para sair\n");
    //_getch();
    return 0 ;
}
