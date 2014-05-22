#ifndef PILHA_H
#define PILHA_H

typedef struct no No;
typedef struct pilha Pilha;

struct no{
    int elemento;
    No *proximo;
};

struct pilha{
    No *primeiroNo;
};

extern int empilhar(int num);
extern int desempilhar();
extern int impressaoTopo();
extern int impressao();
extern int fim();

#endif
