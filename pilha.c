#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"

Pilha pilha = {.primeiroNo = NULL};

int empilhar(int num){

   No *emp = (malloc(sizeof(No)));
       if (!emp){
       	 return -2;
       }
     else {
		   emp->elemento = num;

		   if (pilha.primeiroNo == NULL){
			  emp->proximo = NULL;
			  pilha.primeiroNo = emp;
			  return 0;
			  }
		   else{
			  emp->proximo = pilha.primeiroNo;
			  pilha.primeiroNo = emp;
			  return 0;
		   }
  	 }
}

int desempilhar(){

    if(pilha.primeiroNo == NULL){
        return -1;
    }
    else{
        No *emp = pilha.primeiroNo;
        pilha.primeiroNo = pilha.primeiroNo->proximo;
        free(emp);
    }
}

int impressaoTopo(){

    if(pilha.primeiroNo==NULL){
        return -1;
    }
    else{
        printf("%d",pilha.primeiroNo->elemento);
    }

}

int impressao(){
	if(pilha.primeiroNo==NULL){
        return -1;
    }
    else{
    		No *impressao = pilha.primeiroNo;
    		while(impressao != NULL){
    			printf("%d",impressao->elemento);
    			impressao = impressao->proximo;
    		}
    	return 0;
    }
}
