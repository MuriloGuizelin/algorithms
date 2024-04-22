#include <stdio.h>
#include <math.h>

typedef struct{
    int dia, mes, ano;
} Data;

typedef struct{
    Data data;
    char compromisso[50];

} Agenda;

int main(){
    Agenda agenda[5];

    for(int i=0; i<5; i++){
        printf("digita o dia mes e ano:");
        scanf("%d %d %d", &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano);
        fgets(agenda[i].compromisso[50], sizeof(agenda[i].compromisso), stdin);
    }
}