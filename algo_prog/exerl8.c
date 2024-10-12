#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void E1(int E1);//multiply one by other
void E2(int E2); //asks a vector, average from  from pair and odd numbers
void E3(int E3);
void E4(int E4);

int main (){
    int e1, e2, e3, e4;
    printf("\n\nexercise 1\n");
    E1(e1);

    printf("\n\nexercise 2\n");
    E2(e2);

    printf("\n\nexercise 3\n");
    E3(e3);

    printf("\n\nexercise 4\n");
    E4(e4);
}
void E1(int E1){
    int vet[5], vet2[5], i;
    for (i=0; i<5; i++){
        printf("whats the value %i from the vector 1 and 2: ", i+1);
        scanf("%i %i", &vet[i], &vet2[i]);
    }
    for(i=0;i<5;i++){
        printf("thew product from the position %i is %i\n", i, vet[i]*vet2[i]);
    }
}

void E2(int E2){
    int alt,i;
    do{
        printf("whats the lenght of the vector: ");
        scanf("%i", &alt);
    }while(alt>100);
    float vet[alt], somp=0, somi=0;
    for(i=0;i<alt;i++){
        printf("\nwhats the value from position %i: ", i);
        scanf("%f", &vet[i]);
        if(i%2==0){
        somp+=vet[i];
        }
        else{
            somi+=vet[i];
        }
    }
    printf("the average number of pair is %f and odd is %f", somp, somi);
}

void E3(int E3){
    int vet[12], vet2[12], i;
    for(i=0;i<12;i++){
        printf("whats the value from the vector 1: ");
        scanf("%i", &vet[i]);
    }
    for(i=0;i<12;i++){
        if(i%2==0){
            vet2[i]=vet[i]/2;
        }
        else{
            vet2[i]=vet[i]*3;
            }
            }
            for(i=0;i<12;i++){
                printf("the value from the vector 2 is %i\n", vet2[i]);
            }
}

void E4(int E4){
    int vet[6], i, c=0, vet2[10];
    for(i=0; i<6; i++){
        vet[i]=random(60);
        printf("whats the value i: ");
        scanf("%i", &vet2[i]);
    }
    for(i=0;i<6;i++){
        if(vet2[i]==vet[i]){
            c++;
        }
    }
    if(c==6){
        printf("u got THE SENA");
    }
    else if(c==5){
        printf("u got a quinter");
    }
    else if(c==4){
        printf("u got a quarter");
    }
}

void E5(int E5){
    int vet[10], vet2[10], vet1[10], i, j=0, k=0;
    for(i=0; i<10; i++){
        printf("whats the input from the space %i: ", i);
        scanf("%i", &vet[i]);
        if(vet[i]%2==0){
            vet2[j]=vet[i];
            j++;
        }
        else{
            vet1[k]=vet[i];
            k++;
        }
    }
    for(i=0;i<10;i++){
        printf("vector 1: %i\nvector 2: %i\n\n", vet1[i], vet2[i]);
    }
}