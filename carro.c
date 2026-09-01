#include <stdio.h>
typedef struct{
    char modelo[30];
    float potenciaMotor;
    int anoFabricacao, numPortas;
} Carro;

void ImprimeCarro(struct Carro *c){
    printf("\nExibindo carro\n");
    printf("Modelo %s\n", c.modelo);
    printf("Motor: %f\n", c.potenciaMotor);
    printf("Ano: %d\n", c.anoFabricacao);
    printf("%d portas\n", c.numPortas);
}

//funcao cadastrar/inserir dados do carro
void preencherCarro (struct Carro c){
    printf("Modelo do carro: ");
    scanf("%s", &c->modelo);
    printf("Motor carro: ");
    scanf("%f", &c->potenciaMotor);
    printf("Ano: ");
    scanf("%d", &c->anoFabricacao);
    printf("Numero de portas: ");
    scanf("%d", &c->numPortas);
}

int main(){
    Carro c;
    preencherCarro(&c);
    ImprimeCarro(c);
    return 0;
}