#include <stdio.h>

void E1(int E1); //10 numbers
void E2(int E2); //reverse 10 numbers
void E3(int E3); //choose a value on vector
void E4(int E4); //double of a vector
void E5(int E5); //positive numbers
void E6(int E6); //negative number
void E7(int E7); //0 to 100 vector
void E8(int E8); //positive vector
void E9(int E9); //verify
void E10(int E10); //vector, invert vector, print the same values
void E11(int E11); //palidrome incomplete

int main (){
    int e1, e2, e3, e4, e5, e6, e7, e8, e9, e10, e11;

    printf("\n\nexercise 1\n");
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

    printf("\n\nexercise 9\n");
    E9(e9);

    printf("\n\nexercise 10\n");
    E10(e10);

    printf("\n\nexercise 11\n");
    //E11(e11);
}

void E1(int E1){
    int vet[10], i;
    for (i=0; i<10; i++){
        printf("whats the value %i: ", i+1);
        scanf("%i", &vet[i]);
    }
    for(i=0;i<10; i++){
        printf("the value %i is %i\n", i+1, vet[i]);
    }
}

void E2(int E2){
    int vet[10], i;
    for (i=0; i<10; i++){
        printf("whats the value %i: ", i+1);
        scanf("%i", &vet[i]);
    }
    for(i=10;i>0; i--){
        printf("the value %i is %i\n", i+1, vet[i]);
    }
}

void E3(int E3){
    int vet[8], i;
    for (i=0; i<8; i++){
        printf("whats the value %i: ", i+1);
        scanf("%i", &vet[i]);
    }
    printf("what position do u wish: ");
    scanf("%i", &i);

    printf("the value of position %i is %i\n", i, vet[i]);
}

void E4(int E4){
    int vet[15], i;
    for (i=0; i<15; i++){
        printf("whats the value %i: ", i+1);
        scanf("%i", &vet[i]);
    }
    for(i=0;i<15;i++) {
    printf("the double of the value in the position %i is %i\n", i, vet[i]*2);
}
}

void E5(int E5){
    int vet[12], i, con=0;
    for(i=0;i<12;i++){
        printf("\nwhats the value %i: ", i+1);
        scanf("%i", &vet[i]);
        if(vet[i]>=0){
        con++;
        }
    }
    printf("\nthere's %i positive numbers", con); 
}

void E6(int E6){
    int vet[12], i, con=0;
    for(i=0;i<12;i++){
        printf("\nwhats the value %i: ", i+1);
        scanf("%i", &vet[i]);
        if(vet[i]<0){
        con++;
        }
    }
    printf("\nthere's %i negative numbers", con);
}

void E7(int E7){
    int vet[100], i;
    for(i=0;i<100;i++){
        vet[i]=i;
        printf("the value in position %i is %i\n", i, vet[i]);
    }
}

void E8(int E8){
    int vet[10],i, val;
    for(i=0;i<10;){
        printf("input a value for the position %i: ", i+1);
        scanf("%i",&val);
        if(val>0){
            vet[i]=val;
            i++;
        }
    }
    for(i=1;i<10;i+2){
        printf("the value os position %i is %i", i, vet[i]);
    }
}   

void E9(int E9){
    int vet[10], i, chec, cont=0;
    for(i=0;i<10;i++){
        printf("whats the value for position %i: ", i+1);
        scanf("%i", &vet[i]);
    }
    do{
    printf("insert a value: ");
    scanf("%i", &chec);
    for(i=0;i<10;i++){
        if(chec==vet[i]);
        cont++;
    }
    printf("your value repeat itself %i times", cont);
    }while(cont==0);
}

void E10(int E10){
    int vet[10],i,invet[10];
    for(i=0;i<10;i++){
        printf("whats the value for position %i: ", i+1);
        scanf("%i", &vet[i]);
    }
    for(i=0;i<10;i++){
        invet[i]=vet[9-i];
    printf("the value in the position %i is %i", i, invet[i]);
    }
    for(i=0;i<10;i++){
        if(vet[i]==invet[i]){
            printf("the value in the position %i is the same, %i", i, vet[i]);
        }
    }
}

void E11(int E11){
    int tam,i,vet[tam], vet2[tam];
    printf("whats the lenght of your numbers: ");
    scanf("%i", &tam);

    for(i=0;i<tam;i++){
        printf("whats the value of the position %i: ", i+1);
        scanf("%i", &vet[i]);       
    }
}