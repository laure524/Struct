#include<stdio.h>

int main(){
{
    typedef struct Pessoa
    char nome[50];
    int idade;
    struct Pessoa *pai;
} Pessoa;

Pessoa Joao, Pedro;
strcpy(Joao.nome, "Joao");
Joao.idade = 30;
strcpy(Pedro.nome, "Pedro");
Pedro.idade = 5;
Joao.pai = &Pedro;
Printf("Nome: %s, Idade: %d, Pai: %s\n", Joao.nome, Joao.idade, Joao.pai->nome);
Printf("Nome: %s, Idade: %d\n", Pedro.nome, Pedro.idade);

return 0;
}