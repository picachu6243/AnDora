#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,j,k;
	printf("Nhap so tang tam giac: ");scanf("%d",&n);
	k=n;
	for(i=1;n>=i;i++)
	{
		for(j=1;k>=j;j++) printf(" ");
		for(j=1;i>=j;j++) printf("%d ",j);
		printf("\n");
		printf("\n");
		k--;
	}
}
