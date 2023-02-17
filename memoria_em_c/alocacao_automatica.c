/*->Por padrao,as variaveis definidas dentro de uma função(variaveis locais e parametros) sao alocadas de forma automatica na stack
a cada chamada da função,sendo descartadas quando a função termina

->A pilha de execução do programa normalmente é pequena.Por isso,a tentativa de alocar variaveis locais muito grandes pode resultar em erro
de compilação ou execução(SIGSEGV - Segmentation Fault).Para tais situações devem ser usadas variaveis globais(estaticas) ou variaveis dinamicas

->se a função for chamada recursivamente,as variaveis locais e parametros serao novamente alocados na pilha,em areas diferentes para cada nivel de recursao.
Isso permite preservar os valores anteriores dos mesmos no retorno dos niveis de recursao

->o programa abaixo mostra a existencia de multiplas instancias de variaveis locais(no caso,o parametro 'n')em chamadas recursivas.

*/

#include <stdio.h>

long int fatorial(int n){
    long int parcial;
    printf("antes: n: %d\n",n);

    if(n<2){parcial=1;}
    else{parcial=n * fatorial(n-1);}

    printf("depois: n: %d, parcial: %ld\n",n,parcial);

    return(parcial);

}

int main(void){
    printf("Fatorial(6)=%ld\n",fatorial(6));
    return 0;
}