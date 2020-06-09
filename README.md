# Glauco-ex-Cont
 
<i>Otavio Henrique Machado<br>
3a Fase de Engenharia de Software</i>

  <h1>Alocação de memória</h1>

A memória de um computador é uma sequência de bytes endereçados e, nessa memória,
são colocados os programas executados pelo computador. Os softwares são códigos carregados 
de instruções e variáveis. Os softwares são carregados na memória quando executados e 
retirados dela quando fechados e devidamente encerrados. A memória utilizada é totalmente controlada pelo sistema operacional, 
assim, toda vez em que se inicia um programa e ele é executado o sistema operacional reserva uma quantidade de espaço 
suficiente para as variáveis do programa trabalharem. Essa memória passa a ser ocupada e não pode ser usada 
para outras variáveis até a finalização do programa. Para cada variável será alocada uma quantidade 
de espaço diferente, isso depende to tipo da variável e da linguagem de programação:
 
<table>
  <tbody>
    <tr><td>tipo Integer = 2 bytes</td></tr> 
    <tr><td>tipo Real = 6 bytes</td></tr> 
    <tr><td>tipo String [n] = n bytes</td></tr> 
    <tr><td>tipo Char = 1 byte</td></tr> 
    <tr><td>tipo Boolean = 1 byte</td></tr> 
    <tr><td>tipo Record = somatória dos tamanhos dos campos</td></tr>
  </tbody>
</table>

<h1>Listas</h1>

Uma lista é uma estrutura de dados abstrata que cria uma coleção ordenada de valores em que o 
mesmo valor pode se repetir mais de uma vez, fazendo assim um loop de valores. Se o mesmo valor acabar de ser repetir várias vezes, cada ocorrência é 
considerada um item distinto. O tipo de lista mais conhecido e utilizado é de listas duplamente ligadas. 
Uma lista duplamente ligada (ou encadeada) é uma estrutura de dados ligada que cria um conjunto de 
registros sequencialmente ligados chamados de "nós". Cada "nó" contém dois campos que são referências 
para o nó anterior e posterior. 
Exemplo de uma struct em C:
<pre>
  struct no {<br>
    int valor;<br>
    struct no *anterior;<br>
    struct no *posterior;<br>
  };
</pre>
  <h1>Pilhas</h1>
 Agora iremos falar sobre pilhas, que é um tipo especial de lista linear, na qual as operações de inserção e remoção acontecem pela extremidadechamada topo. 
 Itens são removidos na ordem do programa inversa daquela em que foram inseridos, assim o 
último item que entra é sempre o primeiro a ser executado, por isso é chamado de LIFO (Last In - First Out). 
Uma pilha normalmente suporta 4 funções básicas:
<table>
	<tbody>
		<tr><td>TOP</td><td>Acessa-se o elemento posicionado no topo da pilha;</td></tr>
		<tr><td>PUSH</td><td>Insere um novo elemento no topo da pilha;</td></tr>
		<tr><td>POP</td><td>Remove o elemento do topo da pilha.</td></tr>
		<tr><td>PULL</td><td>Altera o elemento posicionado no topo da pilha;</td></tr>
	</tbody>
</table>
As pilhas são úteis para armazenar temporariamente uma informação que vamos usar logo depois. 
<b>Curiosidade</b>: StackOverflow (estouro de pilha) dá nome ao site mais conhecido de perguntas e 
respostas para programadores e ocorre quando o ponteiro da pilha excede o limite dela. 
A pilha consiste de um tamanho limitado, geralmente definido no início do programa.
