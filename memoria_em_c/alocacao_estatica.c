//alocacao estatica ocorre variaveis globais ou variaveis locais alocadas com o modificador 'static'

#include <stdio.h>

int a=0; //var global,alocacao estatica

void incrementa(void){
    int b=0; //var local,alocacao automatica
    static int c=0; //var local, alocacao estatica

    printf("a:%d, b:%d, c:%d\n",a,b,c);
    a++;
    b++;
    c++;
}

int main(void){
    int i;

    for(i=0;i<5;i++){
        incrementa();
    }
    return 0;
}

/*as variaveis com alocacao estatica sao alocadas e inicializadas uma unica vez,portanto seus valores se
preservam entre as chamadas consecutivas da função.Já a variavel com alocacao automatica
é alocada e descartada a cada execução da função,assim o valor nao é preservado*/

