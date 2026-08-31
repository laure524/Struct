#include <stdio.h>
#include <string.h>

typedef struct Pessoa
{
    char nome [50];
    int idade;
    float salarioBruto;
    float salarioLiquido;
} Pessoa;

float calcularSalarioLiquido(struct Pessoa p, float salarioBruto)
{
    return p.salarioLiquido = salarioBruto*0.8;
}

void imprimePessoa(struct Pessoa p)
{
    printf("Nome: %s \n", p.nome);
    printf("Idade: %d \n", p.idade);
    printf("Salario bruto: %2.f \n", p.salarioBruto);
    printf("Salario liquido: %2.f \n", p.salarioLiquido);
}

int main()
{
    Pessoa p1;
    strcpy(p1.nome, "Fulano de Tal");
    p1.idade = 30;
    p1.salarioBruto = 5000;
    p1.salarioLiquido = calcularSalarioLiquido(p1, p1.salarioBruto); // assumindo 20% de reducao
    imprimePessoa(p1);
}

