#include <stdio.h>
int somme(int x,int y){
   return x+y;
}
void main(){
    int a,b;
    printf("saisir deux nombres : \n");
    scanf("%d%d",&a,&b);
    printf("la somme est :%d",somme(a,b));
	return 0;
}
