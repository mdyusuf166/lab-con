#include<io>
int main(){
    int N,reversed=0,original,reminder;
    cin>>N;
    printf("%d",N);
    original=N;
    while(N>0){
        reminder =N%10;
        reversed = reversed*10+reminder;
        N=N/10;


    }
    if(original == reversed){
        printf("YES\n");

    }
    else{
        printf("NO\n");
    }
    return 0;
}