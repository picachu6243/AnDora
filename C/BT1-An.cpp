#include<stdio.h>
#include<conio.h>

main()
{
	int n,tr,ch,dv,ng;
	printf("Nhap so >9999: ");
	scanf("%d",&n);
	if(n>999)
	{
			ng=n/1000;		tr=n/100%10;	ch=n/10%10;		dv=n%10;
	}
	else	if(n>99)
	{
			tr=n/100;	ch=n/10%10;		dv=n%10;
	}
	else	if(n>9)
	{
			ch=n/10%10;		dv=n%10;
	}
	else dv=n;
	
		switch (ng)
		{
			case 1: printf ("Mot ");break;
			case 2: printf ("Hai ");break;
			case 3: printf ("Ba ");break;
			case 4: printf ("Bon ");break;
			case 5: printf ("Nam ");break;
			case 6: printf ("Sau ");break;
			case 7: printf ("Bay ");break;
			case 8: printf ("Tam ");break;
			case 9: printf ("Chin ");break;
		}
	if(ng!=0)	printf("Nghin ");
	
	switch (tr)
		{
			case 1: printf ("Mot ");break;
			case 2: printf ("Hai ");break;
			case 3: printf ("Ba ");break;
			case 4: printf ("Bon ");break;
			case 5: printf ("Nam ");break;
			case 6: printf ("Sau ");break;
			case 7: printf ("Bay ");break;
			case 8: printf ("Tam ");break;
			case 9: printf ("Chin ");break;
		}
		if(tr!=0) printf("Tram ");
		switch (ch)
		{
			case 1: printf ("Mot ");break;
			case 2: printf ("Hai ");break;
			case 3: printf ("Ba ");break;
			case 4: printf ("Bon ");break;
			case 5: printf ("Nam ");break;
			case 6: printf ("Sau ");break;
			case 7: printf ("Bay ");break;
			case 8: printf ("Tam ");break;
			case 9: printf ("Chin ");break;

		}
		if(ch!=0) printf("Muoi ");
		switch (dv)
		{
			case 1: printf ("Mot ");break;
			case 2: printf ("Hai ");break;
			case 3: printf ("Ba ");break;
			case 4: printf ("Bon ");break;
			case 5: printf ("Lam ");break;
			case 6: printf ("Sau ");break;
			case 7: printf ("Bay ");break;
			case 8: printf ("Tam ");break;
			case 9: printf ("Chin ");break;

		}
	return 0;
}
