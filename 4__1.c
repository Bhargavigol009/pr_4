#include<stdio.h>

void main(){
 int n,r,c,a=1;
 
 printf("enter number of row: ");
 scanf("%d",&n);
 
 for(r=1;r<=n;r++)
{
	for(c=1;c<=r;c++)
	printf("%5d",a++);
	
	printf("\n");
}


}
