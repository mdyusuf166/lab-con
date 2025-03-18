#include<stdio.h>
#include<math.h>

int is_prime(int X);

int main(){
    int X;
    scanf("%d",&X);
    if(is_prime(X)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;


}
int is_prime(int X){
    if(X<2)return 0;
    
    for(int i=2; i<=sqrt(X);i++){
        if(X %i ==0){
            return 0;

        }
        
     
        
    }
    return 1;
}



// #include <stdio.h>
// #include <math.h>

// // ফাংশন: একটি সংখ্যা প্রাইম কিনা চেক করে
// int is_prime(int X) {
//     if (X < 2) return 0;  // 2-এর নিচের সংখ্যা প্রাইম নয়

//     for (int i = 2; i <= sqrt(X); i++) { // শুধুমাত্র sqrt(X) পর্যন্ত চেক করব
//         if (X % i == 0) {
//             return 0; // যদি X, i দ্বারা বিভাজ্য হয়, তবে এটি প্রাইম নয়
//         }
//     }
//     return 1; // যদি কোনো সংখ্যা দ্বারা বিভাজ্য না হয়, তবে এটি প্রাইম
// }

// int main() {
//     int X;
    
//     // ইউজার থেকে ইনপুট নেওয়া
//     scanf("%d", &X);
    
//     // যদি সংখ্যা প্রাইম হয়, "YES" প্রিন্ট করব, নাহলে "NO"
//     if (is_prime(X)) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }

//     return 0;
// }
