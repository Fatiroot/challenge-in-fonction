#include <stdio.h>
int max_4(int a,int b,int c,int d){
   int i ,max=0,T[4];
   for(i=0;i<4;i++){
       T[0]=a;
       T[1]=b;
       T[2]=c;
       T[3]=d;
       if(max<T[i]){
           max=T[i];
       }
   }
    return max ;
    }
    int max_2(int a,int b){
   int i ,max=0;
       if(a<b){
           max=b;
       }else{
           max=a;
       }
    return max ;
    }
int main() {
   int x,y,z,w;
   printf("saisir 4 nombre \n");
   scanf("%d%d%d%d",&x,&y,&z,&w);
   printf("le maximum de 4 nombre est : %d\n",max_4(x,y,z,w));
   printf("le maximum de deux premiers nombre est : %d",max_2(x,y));
    return 0;
}
