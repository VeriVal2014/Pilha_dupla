#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

#define MAX 2147483647
#define MIN -2147483648
//#define MIN 0


int validaNum(long int num){
	//printf("numero: %ld\n",num);
	//printf("minimo: %d\n",MIN);

	if(num <= MAX && num >= MIN){
		return 0;
	}
	else{
		return -3;
	}
}


int main(){
    int opcao=0,  erro=0, erroEntrada = 0, erroTamanho=0;
    long int num=0;

    while(1){
        erroEntrada=scanf("%d",&opcao);
        if(erroEntrada!=1){
        		fprintf(stderr,"Entrada invalida\n");
			return -1;
        }

        switch(opcao){
        case 0:
            return 0;
            break;
        case 1: 
			erroEntrada=scanf("%ld", &num);
			
			if(erroEntrada==1){
				erroTamanho = validaNum(num);
					if(erroTamanho == 0){
						erro=empilhar(num); 
					}
			}
			else{
				fprintf(stderr,"Entrada invalida\n");
				return -1;
			}
			break; 
        case 2:
            erro=desempilhar();
            break;
        case 3:
        	  erro=impressao();
        	  break;
        case 4:
            erro=impressaoTopo();
            break;
        default: 
        	  fprintf(stderr,"Entrada invalida\n");
        	  break;
        }
        if(erro==-1){
        	fprintf(stderr,"Pilha Vazia\n");
        }
        if(erro==-2){
        	fprintf(stderr,"Nao foi possivel alocar memoria\n");
        }
        if(erroTamanho ==-3){
        	fprintf(stderr,"Numero invalido\n");
        }
        erro=0;
        erroTamanho=0;
    }
}
