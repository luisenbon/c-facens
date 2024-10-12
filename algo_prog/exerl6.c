#include <stdio.h>
#include "percent.h"

void E1(int E1); //nm pares do 0 ao 100
void E2(int E2); //nm impares do 1 ao 100
void E3(int E3); //average nm btw 2 modules
void E4(int E4); //average, biggest numbers
void E5(int E5); //calc
void E6(int E6); //bank account
void E7(int E7); //int divisor
void E8(int E8); //votes - incomplete\\\\\\\\\\\\\\\\

int main() {
    int e1,e2,e3,e4,e5,e6,e7,e8;

    printf("\nexercise 1\n");
    E1(e1);

    printf("\n\nexercise 2\n");
    E2(e2);

    printf("\n\nexercise 3\n");
    E3(e3);

    printf("\n\nexercise 4\n");
    E4(e4);

    printf("\n\nexercise 5\n");
    E5(e5);

    printf("\n\nexercise 6\n");
    E6(e6);

    printf("\n\nexercise 7\n");
    E7(e7);

    printf("\n\nexercise 8\n");
    E8(e8);
}
void E1(int E1) {
    int i=0;    while(i<=100)
    {
        printf("%i\n", i);
        i+=2;
    }
 }
 void E2(int E2) {
    int i=1;
    while(i<=100)
    {
        printf("%i\n", i);
        i+=2;
    }
 }
    void E3(int E3) {
    int med1=-1,med2=-1;
    while(med1<0 || med1>10){
        printf("insert the first module average grade: ");
        scanf("%i", &med1);
        if(med1<0 && med1>10){
            printf("\nplease insert a nm between 0 and 10");
        }
    }
    while (med2<0 || med2>10){
        printf("insert the second module average grade: \n");
        scanf("%i", &med2);
            printf("please insert a nm between 0 and 10\n");
    }
    printf("the average grade: %i\n", (med1+med2)/2);
 }

 void E4(int E4){
    int i=1, j=1;
    float soma=0, nm, time=0, bigg=0;
    do {
        printf("whats the value %i: ", i);
        scanf("%f", &nm);
        soma+=nm;
        time++;
        if(bigg<nm){
            bigg=nm;
        }
        do {
        printf("\ndo u wanna continue?\n1-continue\n2-stop\n");
        scanf("%i",&j);
        printf("\n");
        } while (j!=1 && j!=2);
        i++;
        } while(j==1);
    printf("\nthe biggest nm is %f, the average nm is %f and the nm of values is %f", bigg, soma/time, time);
 }

 void E5(int E5) {
    float inp1, inp2;
    int act, con=1;
    do {
        printf("insert the first and second values: ");
        scanf("%f %f", &inp1, &inp2);
        printf("what do u wanna do:\1-Sum\n2-Sub\n3-Mult\n4-Div\n5-exit\n");
        scanf("%i", &act);
        switch (act) {
            case 1:
            printf("sum: %f", inp1+inp2);
            break;

            case 2:
            printf("sub: %f", inp1-inp2);
            break;

            case 3:
            printf("mult: %f", inp1*inp2);
            break;

            case 4:
            printf("div: %f", inp1/inp2);
            break;

            default:
            con=0;
            break;
        }
    }while(con==1);
 }

void E6(int E6) {
     float valt=0, vala=0;
     int op,con=1;
     do{
        printf("insert the operation needed:\n1-deposit\n2-withdraw\n3-stop\n");
        scanf("%i", &op);
        switch(op) {
            case 1:
            printf("insert the value to deposit: ");
            scanf("%f", &vala);
            valt+=vala;
            break;

            case 2:
            printf("insert the value to withdraw: ");
            scanf("%f", &vala);
            if(vala>valt){
                printf("\nu dont have enough money\n");
            } else {
                valt-=vala;
            }
            break;

            case 3:
            if(valt==0) {
                printf("account with no money");
            }
            else if(valt>0) {
                printf("preferencial account");
            }
            else {
                printf("account with debt");
            }
            con=0;
            break;

            default:
            printf("invalid option");
            break;
        }
     }while(con==1);
 }
 void E7(int E7) {
    int div, num, minum, manum,i;
    printf("whats the divisor number: ");
    scanf("%i", &div);
    printf("first limit: ");
    scanf("%i", &minum);
    printf("final limit: ");
    scanf("%i", &manum);
    for (i=minum; i<manum; i++) {
        if(i%div==0) {
            printf("%i\n", i);
        }
    }
 }
 void E8(int E8) {
    int njs=0, nm=0, nja=0, nb=0, nn=0, i, c=1, n=0;
    printf("Vote for: \n");
    do {
        printf("1-Jose\n2-Maria\n3-Joao\n4-White\n5-Null\n0-Stop\n");
        scanf("%i", &i);
        n++;
        switch(i) {
            case 1:
            njs++;
            break;

            case 2:
            nm++;
            break;

            case 3:
            nja++;
            break;

            case 4:
            nb++;
            break;

            case 5:
            nn++;
            break;

            case 0:
            c=0;
        }
    }while(c==1);
    printf("Votes Jose: %i\nVotes Maria: %i\nVotes Joao: %i\nWhite votes: %i\nNull votes: %i\n", njs, nm, nja, nb, nn);
    }