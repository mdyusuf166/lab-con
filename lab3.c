#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);

    int A[N];
    for(int i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    int left =0,right =N-1;
    int is_palindrome =1;
    while(left<right){
        if(A[left]!=A[right]){
            is_palindrome =0;
            break;
        }
        left++;
        right--;
    }
    if(is_palindrome){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}