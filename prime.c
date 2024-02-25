#include <stdio.h>
int checkPrime(int n,int x){int temp;
  if(n==1){
    printf("not Prime");}
  else if(x==1 || n<1){return 0;}
  else{ temp=0 +checkPrime(n,x-1);
       if(n%x==0){ return 1;}}
return temp;
}

int main(){
  int prime;
scanf("%d",&prime);
int cheker=checkPrime(prime,prime-1);
if(cheker==0){
printf("Prime");}
else {printf("NOt Prime");}
}

