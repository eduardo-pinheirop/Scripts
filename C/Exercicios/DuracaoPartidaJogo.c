#include <stdio.h>

int duracao_partida(int hora_ini, int min_ini, int hora_fin, int min_fin);

int main(){
    int dur = duracao_partida(22,30,19,20);

    printf("%d minutos", dur);

    return 0;
}

int duracao_partida(int hora_ini, int min_ini, int hora_fin, int min_fin){
    int duracao_em_min;

    printf("Usuário, verifique se as horas passadas como parâmetro estão no formato 24hrs \n");

    if(hora_fin <= hora_ini){  // o jogo virou pro outro dia
        duracao_em_min = (((24 - hora_ini) + hora_fin) * 60) + (min_fin - min_ini);

        if(duracao_em_min >= 24*60){
            printf("A partida atingiu o tempo máximo de 24hrs \n");
            return 24*60;
        } else {
            return duracao_em_min;
        }

    } else {
        duracao_em_min = ((hora_fin - hora_ini) * 60) + (min_fin - min_ini);
        return duracao_em_min;
    }
}