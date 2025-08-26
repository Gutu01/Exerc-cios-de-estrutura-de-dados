#include <stdio.h>

#define max_dados 10

typedef struct{
    
    float base;
    float altura;
    float resultado;
    
}retangulo;

int main(){
    
    retangulo dados[max_dados];
    int total_dados=0;
    
    for(int i=0; i < max_dados; i++){
        printf("\n%dº entrada\n", i+1);
        printf("Base:");
        scanf("%f", &dados[total_dados].base);
        
        printf("Altura:");
        scanf("%f", &dados[total_dados].altura);
        dados[total_dados].resultado = dados[total_dados].base * dados[total_dados].altura;
        total_dados++;
    }
    
    for(int i=0; i < total_dados; i++){
        printf("\n%dº saída\n", i+1);
        printf("Área = %.2f\n", dados[i].resultado);
    }
    
    
    return 0;
}
