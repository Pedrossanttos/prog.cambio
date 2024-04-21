#include<stdio.h>

main()
{
  
     float real, valor;
     int escolha;
    
     printf("prog para calcular o cambio de moedas");
         printf("\nQuanto de dinheiro voce teria em reais\n");
             scanf("%f", & real);

     printf("para qual moeda voce gostaria de trocar?\n");
         printf("sabendo que seus valores sao");
             printf("\n dolar = 5,04 \n euro = 5,46 \n franco = 5,58 \n libra = 6,38 \n peso = 0,0059\n");
    
     printf("escolha qual moeda gostaria de trocar\n\n");
         printf("1 == dolar \n 2 == euro \n 3 == franco \n 4 == libra \n 5 == peso\n\n");
             scanf("%d", & escolha);

          switch (escolha)
         {
    	     case 1: valor = real/5.04;
    	         printf("voce obteria %f dolares", valor);
    	         break;
    	
    	     case 2: valor = real/5.46;
    	         printf("voce obteria %f euro", valor);	
    	         break;
    	    
    	     case 3: valor = real/5.58;
    	         printf("voce obteria %f franco", valor);	
    	         break;
    	    
    	     case 4: valor = real/6.38;
    	         printf("voce obteria %f libra", valor);
			     break;
    	    
    	     case 5: valor = real/0.0059;
    	         printf("voce obteria %f peso", valor);
		         break;
    	    
    	     default : printf("voce digitou uma opçao invalida");
    	
 	     }

















}


