//exemplo de uso de estruturas com ponteiros

#include <stdio.h>
#include <stdlib.h>

struct ST_DADOS{
    char nome[40];
    float salario;

    //estrutura dentro de uma estrutura
    struct nascimento{
        int ano;
        int mes;
        int dia;

    }dt_nascimento;
};

int main(void){
    //pointeiro para a estrutura
    struct ST_DADOS *p;

    //alocacao de memoria para o ponteiro da estrutura
    p=(struct ST_DADOS*) malloc(sizeof(struct ST_DADOS));

    //string(vetor de caracteres) é um ponteiro, por isso a ausencia do &
    printf("\nEntre com o nome ->");
    scanf("%s",p->nome);

    printf("Entre com o salario->");
    scanf("%f",&p->salario);

    /*O -> é chamado de pointer member(apontador de membro).Ele é usado para referenciar um campo da estrutura no lugar do ponto(.)*/
    printf("Entre com o nascimento ->");
    scanf("%d%d%d",&p->dt_nascimento.dia,&p->dt_nascimento.mes,&p->dt_nascimento.ano);

    printf("\n======Dados Digitados======");
    printf("\nNome=%s",p->nome);
    printf("\nSalario=%f",p->salario);
    printf("\nNascimento=%d/%d/%d\n",p->dt_nascimento.dia,p->dt_nascimento.mes,p->dt_nascimento.ano);

    free(p);
    return 0;




}