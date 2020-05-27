#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

typedef struct _estudante {
	int id;
	char nome[255];
	float nota;
} estudante;

typedef struct _no {
	estudante k;
	struct _no *prox; // ponteiro para o próximo elemento
} no, *lista;

void inserir(lista *L, estudante k) {
	no *p;
	p = (no *) malloc (sizeof (no));
	p->k = k;
	p->prox = *L;

	*L = p;
}

estudante *buscar_lista (lista L, int id) {
	no *p;

	for (p=L; p && p->k.id != id; p=p->prox);

	if (p)
		return &p->k;
	else
		return NULL;
}

/* cria uma lista vazia */
void criar_lista(lista *L) {
	*L = NULL;
}

buscar_estudante(int opt, char texto[], char aux[]){

	lista C;
	estudante s, *p;
	int id;
	FILE *arquivo;

if(opt == 1){

	criar_lista(&C);
	arquivo = fopen("./List.txt", "r");

	while(!feof(arquivo)){
		fscanf (arquivo, "%d %s %f\n", &s.id, s.nome, &s.nota);
		inserir(&C, s);
	}

	while(id != -1){
		printf ("\nDigite o Id do estudante (-1 para sair):\n");
		scanf ("%d", &id);

		p = buscar_lista(C, id);
        if(!p){
			printf ("ID #%d não encontarda!\n", id);
		}else{
			printf("Id\tNome\tNota\n");
			printf("%d\t%s\t%0.2f\n", p->id, p->nome, p->nota);
		}

	}


}else if(opt == 2){

    arquivo = fopen ("./List.txt", "wt");
    criar_lista(&C);
    printf("Adicionar novo estudante:\n\n");

	//while (!feof(arquivo)) {

    printf("ID do estudante: \n");
    scanf("%d",&s.id);
    fprintf(arquivo,"%d ",&s.id);

    printf("Nome do estudante: \n");
    scanf("%s", s.nome);
    fprintf(arquivo,"%s ",s.nome);

    printf("Nota do estudante: \n");
    scanf("%.20f ",&s.nota);
    fprintf(arquivo, "%f", &s.nota);

	//fscanf (arquivo, "%d %s %f\n", &s.id, s.name, &s.gpa);

	inserir(&C, s);
	//}

}else if(opt == 3){

    arquivo = fopen ("./List.txt", "r");
    criar_lista(&C);

	while (!feof(arquivo)) {

		fscanf (arquivo, "%d %s %f\n", &s.id, s.nome, &s.nota);
		fgets(texto, 300000, arquivo);
		strcat(aux, texto);

		inserir(&C, s);

	}

	printf("Alunos: \n\n%s", aux);

}else if (!arquivo) {
		printf("O arquivo não existe!");
		system("pause");
		exit (1);
}

	fclose (arquivo);
	printf("\n\n");
   	system("pause");

}

int main(){

	setlocale(LC_ALL, "Portuguese");

	int opt;
	char texto[300000], aux[300000];

	do{

	    printf("Digite a função: \n");
	    printf("\n1 > Encontrar estudante");
	    printf("\n2 > Cadastrar estudante");
	    printf("\n3 > Listar estudantes");
	    printf("\n4 > Sair \n\n");
	
		scanf("%d", &opt);
	   	system("cls");

    switch(opt){

        case 1:
           buscar_estudante(opt, texto, aux);
        break;

        case 2:
        	system("pause");
        break;

        case 3:
            buscar_estudante(opt, texto, aux);
        break;

        default:
            printf("Função inválida!\n");

         system("pause");

     }

	system("cls||clear");

	} while(opt != 4);

}
