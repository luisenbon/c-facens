#include <stdio.h>

//void E1(int E1);
void E2(int E2); 

int main (){
    int e1, e2;
    printf("\n\nexercise 1\n");
    E2(e2);
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