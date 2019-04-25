#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct cliente{
    char nome[100];
    char endereco[200];
    char tel[13]; #xx xxxxx-xxxx
    char cpf[14]; #xxx.xxx.xxx-xx
    float saldo;
} clientes;

void verificarCliente(){}
void saque(){}
void inserirCliente(){}
void retirarCliente(){}

#endif // BANCO_H_INCLUDED
