#include <stdio.h>
#include <string.h>

#define max_letras_nome 160
#define max_pessoas 5

void limparbufferentrar(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

typedef struct{
    
    char nome[max_letras_nome];
    int idade;
    float altura;
    
}pessoa;


int main(){
    
    pessoa dados[max_pessoas];
    int total_pessoas = 0;
    int escolha=0;
    
    do{
        printf("\nMenu\n");
        printf("0-Sair\n");
        printf("1-Resgistrar\n");
        printf("2-Lista\n");
        printf("Escolha:");
        scanf("%d", &escolha);
        limparbufferentrar();
        
        switch(escolha){
            case 1:
                if(total_pessoas > max_pessoas){
                    printf("\nO número máximo de registros foi atingido!\n\n");
                    break;
                }
                else{
                    printf("Nome:");
                    fgets(dados[total_pessoas].nome, max_letras_nome, stdin);
                    dados[total_pessoas].nome[strcspn(dados[total_pessoas].nome, "\n")] = '\0';
                    
                    printf("Idade:");
                    scanf("%d", &dados[total_pessoas].idade);
                    limparbufferentrar();
                    
                    printf("Altura:");
                    scanf("%f", &dados[total_pessoas].altura);
                    limparbufferentrar();
                    
                    total_pessoas++;
                    
                    break;
                }
            case 2:
                if(total_pessoas == 0){
                    printf("\nNão há registros!\n");
                    break;
                }else{
                for(int i=0; i < total_pessoas; i++){
                    printf("\n%dº usuário\n", i+1);
                    printf("Nome:%s\n", dados[i].nome);
                    printf("Idade:%d\n", dados[i].idade);
                    printf("Altura:%.2f\n", dados[i].altura);
                }
                break;
            }
        }
    }while(escolha != 0);
    
    return 0;
}
