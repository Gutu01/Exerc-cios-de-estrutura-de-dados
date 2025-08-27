#include <stdio.h>
#include <string.h>

#define max_letras_nome 160

typedef struct{

    char nome[max_letras_nome];
    float salario;
    int tempo_empresa;
    float reajuste_salario;
}Funcionario;

void limparbufferentrada(){
    int c;
    while ((c = getchar ()) != '\n' && c != EOF);
}

int main(){

    Funcionario funcionario;

    printf("Nome:");
    fgets(funcionario.nome, max_letras_nome, stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';

    printf("Salário base:");
    scanf("%f", &funcionario.salario);
    limparbufferentrada();

    printf("Tempo de empresa (em anos inteiros):");
    scanf("%d", &funcionario.tempo_empresa);
    limparbufferentrada();

    if(funcionario.tempo_empresa < 3){
        funcionario.reajuste_salario = funcionario.salario+funcionario.salario*5/100;

        printf("\nNome:%s\n", funcionario.nome);
        printf("Salário base:R$%.2f\n", funcionario.salario);
        printf("Tempo de empresa:%d anos\n", funcionario.tempo_empresa);
        printf("Salário final do bônus:R$%.2f\n", funcionario.reajuste_salario);
    }else{
        funcionario.reajuste_salario = funcionario.salario+funcionario.salario*10/100;

        printf("\nNome:%s\n", funcionario.nome);
        printf("Salário base:R$%.2f\n", funcionario.salario);
        printf("Tempo de empresa:%d anos\n", funcionario.tempo_empresa);
        printf("Salário final do bônus:R$%.2f\n", funcionario.reajuste_salario);
    }

    return 0;
}