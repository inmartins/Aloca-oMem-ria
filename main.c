#include <stdio.h>
#include <stdlib.h>

int *p;
int i, quant_alunos;

void main(){
	
	printf("Digite a quantidade de alunos: ");
	scanf("%i", &quant_alunos);
	
	p=(int *)(malloc(quant_alunos * sizeof(int)));
	
	for(i=0; i < quant_alunos; i++){
	
	
	printf("Digite a nota do aluno para o indice [%i]: ", i+1);
	scanf("%i", &p[i]);
	
     }

	printf("\n");
	
	for(i=0; i < quant_alunos; i++){
	
	printf("Nota armazenada no indice [%i] = %i\n", i, p[i]);
    
     }
     
     printf("\n");
     
     if(p== NULL){
	 
     printf("\nErro de alocacao na memoria");
     system("pause");
     exit(1);
	 }
	 printf("\n");
	 free(p);

system("pause");

}
