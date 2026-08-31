#include <stdio.h>
#include <string.h>

typedef struct Pessoa
{
    char nome [50];
    int idade;
} Pessoa;

void imprimePessoa(struct Pessoa p)
{
    prinft ("Nome: %s \n", p.nome);
    prinft ("Idade: %s \n", p.idade);
}

int main()
{

    Pessoa p1;
    (p1.nome, "Fulano de Tal");
    p1.idade = 30;

    imprimePessoa(p1);
}

