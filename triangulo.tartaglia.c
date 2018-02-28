#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
int n,m,altura,factn,factm,factmn,i;
printf ("Introduzca altura");
scanf ("%d",&altura);
 
for (n=0;n<altura;n++) {
for (m=0;m<=n;m++)
{
	factn=1;
	for(i=1;i<=n;i++)
	factn=factn*i;
	factm=1;
	for(i=1;i<=m;i++)
	factm=factm*i;
	factmn=1;
	for(i=1;i<=(n-m);i++)
	factmn=factmn*i;
	
	printf("%d",(factn/(factm*factmn)));
	}
	printf("\n");
}
    system("PAUSE");
	return 0;
}
