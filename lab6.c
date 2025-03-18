#include<stdio.h>
int main(){
    int A,B,C,min,max;
    scanf("%d %d %d",&A,&B,&C);
     min =A;
    if(B<min){
        min=B;
    }
    if(C<min){
        min=C;
    }
     max=A;
    
    if(B>max){
        max=B;
    }
    if(C>max){
        max=C;
    }
    printf("%d %d",min,max);
    return 0;


}