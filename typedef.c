#include<stdio.h>

int main(){
typedef struct Data{

    int dia;
    int mes;
    int ano;
} Data;


    void mostrarData(struct Data d);
    Data d1; // d1 eh do tipo Data
    d1.ano = 2024;
    d1.mes = 6;
    d1. dia = 6;

    printf("Data: %d/%d/%d \n", d1.dia, d1.mes, d1.ano);

    return 0;
    
}