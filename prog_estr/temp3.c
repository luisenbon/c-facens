#include <stdio.h>
#include <stdlib.h>

void cadas_temp(float *x, int h);
void media_temp(float *x, int ch, float *media);
void maior_temp(float *x, float *ma, int *mah, int h);
void menor_temp(float *x, int *y,float m, int ch, int *meh);

int main(){
    float temp[99], maior, media;
    int i, h, ch, mh, a=1, me, mah, menor[99];
    do{
        printf("how many days u wish: ");
        scanf("%i", &h);
        cadas_temp(temp, h);

        printf("how many days u wanna calc: ");
        scanf("%i", &ch);

        media_temp(temp, ch, &media);
        printf("the average temp is: %f\n", media);

        maior_temp(temp, &maior, &mh, h);
        printf("the highest number is: %f in the %i\n", maior, mh+1);

        menor_temp(temp, menor, media, ch, &me);
        for(i=0;i<me;i++){
        printf("theres a day bellow average %f, in the %i day\n", *(temp+*(menor+i)), *(menor+i)+1);
        }

        printf("what u wanna do: \n1-continue\n2-break\n");
        scanf("%i", &a);

    }while(a==1);

}

void cadas_temp(float *x, int h){
    int i;
    for(i=0;i<h;i++,x++){
    printf("whats the degress in the %i: ", i+1);
    scanf("%f", x);
    }
}

void media_temp(float *x, int ch, float *media){
    int i;
    *media=0;
    for(i=0;i<ch;i++){
        *media+=(float)*(x+i);
    }
    *media/=ch;
}

void maior_temp(float *x, float *ma, int *mah, int h){
    *ma=0;
    int i;
    for(i=0;i<h;i++){
        if(*ma<*(x+i)){
            *ma=*(x+i);
            *mah=i;
        }
    }
}

void menor_temp(float *x, int *y,float m, int ch, int *meh){
    int i;
    *meh=0;
    for(i=0;i<ch;i++){
        if(m>*(x+i)){
        *(y+*(meh))=i;
        (*meh)++;
        }
    }
}