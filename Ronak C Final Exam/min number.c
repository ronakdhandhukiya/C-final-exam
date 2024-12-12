#include<stdio.h>

int main(){

int A;
int B;
int C;

printf("Enter the Values Of A,B and C \n");
printf("A : ");
scanf("%d", &A);
printf("B : ");
scanf("%d", &B);
printf("C : ");
scanf("%d", &C);
if(A<B){
    if(A<C){
        printf("The minimum Number is A.");
    }else{
     printf("The minimum Number is C.");
    }

}else{
       if(B<C){
         printf("The sminimum Number is B.");
       }else {
        printf("The minimum Number is C.");
       }

}


}
