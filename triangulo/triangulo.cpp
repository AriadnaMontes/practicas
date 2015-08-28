#include<stdio.h>
#include<stdlib.h>


int l1,l2,l3;

main()
{
	printf("\nPROGRAMA DE TRIANGULOS\n\n");
	printf("Dame el primer el valor: ");
	scanf("%d", &l1);
	printf("Dame el segundo el valor: ");
	scanf("%d", &l2);
	printf("Dame el tercer el valor: ");
	scanf("%d", &l3);
	printf("\n");
	
	if((l1==l2)&(l2==l3))
	{
       printf("El triangulo es equilatero ");
       printf("\n");
    }
    else 
    {
        if((l1==l2)||(l2==l3)||(l3==l1))
        {
        
          printf("Es un triangulo isoseles");
          printf("\n");
        }
        else
          printf("El triangulo escaleno");
          printf("\n");
    }
                         
	
	printf("\n");
	system("pause");
	return 0;	
	
}
