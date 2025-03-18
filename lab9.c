#include<stdio.h>
int main(){
    double X,Y;
    scanf("%lf %lf",&X,&Y);

    if(X==0 && Y==0){
        printf("Origem");
    }
    else if(X==0){
        printf("Eixo Y");

    }
    else if(Y==0){
        printf("Eixo X");
    }
    else if(X>0 && Y>0){
        printf("Q1\n");
    }
    else if(X<0 && Y>0){
        printf("Q2\n");
    }
    else if(X<0 && Y<0){
        printf("Q3\n");
    }
    else{
        printf("Q4\n");
    }
    return 0;


}