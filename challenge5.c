#include <stdio.h>
void permuter(int a,int b){
   int temp;
        temp=a;
        a=b;
        b=temp;
    printf("x= %d\n",a);
    printf("y= %d\n",b);
    }
int main() {
   int x,y;
   printf("saisir 2 nombre \n");
   scanf("%d%d",&x,&y);
   printf(" les deux nombre avant la permutation est :\n");
   printf("x= %d\n",x);
    printf("y= %d\n",y);
 printf(" les deux nombre apres la permutation est :\n");
 permuter(x,y);
 return 0;
}
