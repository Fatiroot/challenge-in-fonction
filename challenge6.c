#include <stdio.h>
#include <stdbool.h>
  bool premier(int a){
   int i,c=0;
        for(i=1;i<100;i++){
            if(a%i==0){
                c++;
            }}
            if(c==2){
                return true;
            }else{
              return false;
            }
    }
int main() {
   int x;
   printf("saisir un nombre \n");
   scanf("%d",&x);
   if(premier(x)){
        printf("le nombre est premier");
      }else{
            printf("le nombre n'est premier");
            }
 return 0;
}
