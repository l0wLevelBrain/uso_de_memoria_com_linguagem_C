//alocacao simples

#include <stdlib.h>
#include <stdio.h>

//funcao que aloca um novo bloco com 'size' bytes de tamanho e retorno um ponteiro para o inicio do bloco(ou 0 em caso de erro).
//o conteudo desse novo bloco é indefinido e pode conter "lixo"
void *malloc(size_t size);


//exemplo
typedef struct{
    int num;
    char str[30];
}mystruct;

int main(void){

    mystruct *ptr;
    ptr =(mystruct*) malloc(sizeof(mystruct));
    if(ptr==0){ //caso a alocacao nao ocorra
        abort();
    }
    
    printf("Digite um numero: ");
    scanf("%d",&ptr->num);
    printf("\n");
    printf("Digite uma palavra: ");
    scanf("%s",ptr->str);

    printf("palavra digitada:%s\nnumero digitado:%d",ptr->str,ptr->num);
    


    

    free(ptr); //liberar espaço alocado 

    return 0;
}
