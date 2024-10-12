#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "percent.h"

void E1(int E1); //media
void E2(int E2); //posi, nega, nulo
void E3(int E3); //media dos posi
void E4(int E4); // maior menor
void E5(float E5, float EE5); //calc)
void E6(int E6); //menoralt, mediaaltmulh, numhom, sexmaisalta
void E7(int E7); //piramide

int main() {
    int e1;
    printf("\nexercise 1\n");
    E1(e1);
    
    int e2;
    printf("\n\nexercise 2\n");
    E2(e2);
    
    int e3;
    printf("\n\nexercise 3\n");
    E3(e3);
    
    int e4;
    printf("\n\nexercise 4\n");
    E4(e4);

    float e5, ee5;
    printf("\n\nexercise 5\n");
    E5(e5, ee5);

    int e6;
    printf("\n\nexercise 6\n");
    E6(e6);

    int e7;
    printf("\n\nexercise 7\n");
    E7(e7);

    int e8;
    printf("\n\nexercise 8\n");
    E8(e8);
    
    usleep(1000*8);
    return 0;
}

void E1(int E1) {
    int i;
    int value=0, number;
    printf("how many numbers u wish: ");
    scanf("%i", &E1);
    for (i=0;i<E1;i++) {
        printf("\nwhats the number %i: ", i+1);
        scanf("%i", &number);
        value+=number;
    }
    printf("the average value is %i", value/E1);
}
void E2(int E2) {
    int i, pos=0, neg=0, nul=0;
    for (i=0; i<10; i++) {
        printf("insert the value %i: \n", i+1);
        scanf("%i", &E2);
        if(E2<0) {
            neg++;
        }
        else if(E2==0) {
            nul++;
        }
        else {
            pos++;
        }
    }
    printf("\n%i neg - %i null - %i pos", neg, nul, pos);
}
void E3(int E3) {
    int i, num, soma=0;
    printf("how many numbers u wish: \n");
    scanf("%i", &E3);
    for (i=0;i<E3;i++) {
        printf("whats the number %i: \n", i+1);
        scanf("%i", &num);
        if (num>0)
        soma+=num;
    }
    printf("the average value is %i\n", soma/E3);
}
void E4(int E4) {
    int i, high, lowe, num;
    E4=0;
    lowe=E4;
    high=E4;
    for(i=0;i<10;i++) {
        printf("whats the value %i: ", i+1);
        scanf("%i", &num);
        if(lowe>num) {
            lowe=num;
        }
        else if(high<num) {
            high=num;
        }
    }
    printf("The high value is %i, and the lowest is %i", high, lowe);
}
void E5(float E5, float EE5) {
    int i, filh=0, mfilh=0, nsala=0;
    float sala=0, msala=0, mesala=0;
    msala=sala;
    for(i=0; i<15; i++) {
        printf("\n\nperson %i\n", i+1);
        printf("whats your salary:");
        scanf("%f", &sala);
        if(sala<=1000) {
            nsala++;
        }
        mesala+=sala;
        printf("how many childrens do u have:\n");
        scanf("%i", &filh);
        mfilh+=filh;
        if(sala>msala) {
            msala=sala;
        }
    }
        printf("\nthe average salary is %f", mesala/15);
        printf("\nthe number of childrens is %i", mfilh);
        printf("\nthe highest salary is %f", msala);
        percent(nsala, 15, EE5);
}
void E6(int E6) {
    int lowalt=500, mennum=0, i, alt, sex, sexhig=0, sexhigh, altfem=0, numfem=0, highestalt=0;
    for (i=0;i<15;i++) {
        printf("n/whats your sex (1=mas - 2=fem) and height: ");
        scanf("%i %i", &sex, &alt);
        if(lowalt>alt) {
            lowalt=alt;}
        if(sex==1) {
            mennum++;
        }
        if(sex==2) {
            altfem+=alt;
            numfem++;
        }
        if(highestalt<alt) {
        highestalt = alt;
            sexhigh=sex;
    }
    }
    printf("\nthe lowest heigh is %i", lowalt);
    printf("\nthe average heigh from womans is %i", altfem/numfem);
    printf("\nthe number of mens is %i", mennum);
    printf("\nthe sex of the highest person is %i", sexhigh);
}
void E7(int E7) {
    int i,j;
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
        printf("#");
        }
        printf("\n");
            /*if (i+j<5-1) {
                printf(" ");
            }
            else {
                printf("#");
            }
        }
            printf("\n");*/
    }
}
void E8(int E8) {
    int al, i, j, not, mat;
    printf("how many students do u have: ");
    scanf("%i", &al);
    for(i=0;i<al;i++) {
        printf("how many classes do u have: ");
        scanf("%i", &mat);
        for(j-0;j<mat;j++) {
            printf("whats the grade of the student %i in the class %i: ", i+1, j+1);
            scanf("%i", &not);
            printf("the average grade of the student %i is %i", i+1, not/mat);
        }
}