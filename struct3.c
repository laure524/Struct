#include<stdio.h>

struct Pessoa{
    char *nome;
    int idade;
    float peso;
    char *email;
    char cidade[50];
};

int main (){
    //declara uma variavel do tipo struct
    struct Pessoa p1;
    p1.nome = "Alice";
    p1.idade = 26;
    p1.peso= 70;
    p1.email = "alice.maria@iffar.com";
    strcpy(p1.cidade, "Santa Maria");

    //obtem os dados
    printf("Nome: %s\n", p1.nome);
    printf("Idade: %d\n", p1.idade);
    printf("Peso: %.2f\n", p1.peso);
    printf("Email: %s\n", p1.email);
    printf("Cidade: %d\n", p1.cidade);

    return 0;
}