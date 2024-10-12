#ifndef PERCENT_H
#define PERCENT_H
#include <stdio.h>

void percent(int num, int totalnum, float res){
    res = (num*100)/totalnum;
    printf("\nThe percentage is %f", res);
}
#endif