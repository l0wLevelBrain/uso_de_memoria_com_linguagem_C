# Uso de memória em C
C dá acesso à manutenção e ao gerenciamento de memória,então é importante saber como as variáveis estão alocadas e como alocar essas variáveis

## Divisão dos segmentos de memória
O espaço de endereços é divido em vários segmentos lógicos,os mais relevantes são:

![Screenshot 2023-02-17 at 01-20-50 https __www inf ufpr br](https://user-images.githubusercontent.com/107145843/219549010-32297186-5ca5-4d46-bf7b-38907d22ddad.png)

<p><strong>TEXT</strong>:contém o código do programa e constantes<br>
<strong>DATA</strong>:memória de trabalho do processo,aonde ficam alocadas variáveis globais e estáticas<br>
<strong>STACK</strong>:contém a pilha ded execução,onde são armazenados os parâmetros,endereços de retorno e variáveis locais de funções<br>
<strong>HEAP</strong>:contém blocos de memória alocadas dinamicamente,a pedido do processo,durante sua execução</p>

## Tipos de alocações
<p>
<strong>Alocação estática:</strong> variáveis globais ou estáticas -> alocadas em DATA<br>
<strong>Alocação automática:</strong> variáveis locais e parâmetros de funções -> geralmente alocadas na STACK(pilha)<br>
<strong>Alocação dinâmica:</strong> quando o pprocesso requisita explicitamente um bloco de memória para armazenar dados, o controle é manual, ou seja,
o programador é responsável por liberar as áreas alocadas dinamicamente -> geralmente usa a HEAP


</p>

## Funções para alocação e liberação de memória
<p>
<strong>malloc:</strong> realiza a alocação de memória.Deve-se informar para a função a quantidade de bytes para alocação.A função irá retornar,se existir memória suficiente,um endereço que deve ser colocado em uma variável do tipo ponteiro.A função retorna um ponteiro do tipo void,então deve-se usar o typecast<br>
<strong>calloc:</strong> semelhante ao malloc,mas em vez de alocar uma quantidade de bytes,temos que especificar a quantidade de bloco de um determinado tamanho.Funcionalmente a alocação é identica.Contudo, calloc alem de alocar,tambem inicializa o espaço alocado com zeros.<br>
<strong>realloc:</strong> utilizado para expandir uma área alocada.Deve-se passar o ponteiro retornado pelo malloc e a indicação do novo tamanho<br>
<strong>free:</strong> libera a área alocada

</p>
