#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	srand(time(NULL));
	double due,paiement;
	due=rand() %20000 + 1;
	printf("\n---------------------------------------");
	printf("\nLe montant à payer: Rs %.2lf", due);
	do
	{	printf("\nInsérez votre paiement:Rs ");
		scanf("%lf",&paiement);
		if (paiement<due)
		{
			printf("\nLe montant doit être superieur à Rs %.2lf.", due);
		}
	}while(paiement<due);
}
