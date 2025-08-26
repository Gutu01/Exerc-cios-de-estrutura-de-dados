#include <stdio.h>

typedef struct{
    
    int dia;
    int mes;
    int ano;
    
}Data;

int main(){
    
    Data data;
    
    printf("Dia:");
    scanf("%d", &data.dia);
    
    printf("Mês:");
    scanf("%d", &data.mes);
    
    printf("Ano:");
    scanf("%d", &data.ano);
    
    printf("\nSua saída\n");
    printf("%.2d/%.2d/%.2d\n", data.dia, data.mes, data.ano);
    //%.2f
    return 0;
}
