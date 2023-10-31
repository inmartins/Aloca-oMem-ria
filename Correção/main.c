#include <stdio.h>
#include <stdlib.h>

void main(){
	
	float *notas;
	int i, quant;
	
	printf("Digite a quant de alunos: ");
	scanf("%i", &quant);
	
	notas=(float*)malloc(sizeof(float)*quant);
	if(notas==NULL){
		printf("Erro!\n");
		exit(1);
	}
	
	for(i=0;i<quant;i++){
		printf("Digite a %ia nota: ", i+1);
		scanf("%f", &notas[i]);
	}
	
	for(i=0;i<quant;i++){
		printf("%.1f\t", notas[i]);
	}
	
	printf("\n");
	
	free(notas);
}
