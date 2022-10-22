/** ****************************************************************************************
* \mainpage maggioreMinore3.c
*
* @brief  Scrivere un programma che, richiesti in ingresso tre valori interi distinti, ne determini il minore e il maggiore. 
* 
* @author Tommaso Sollo
* @date 07/10/2022
*/

#include <stdio.h>

int main() {
	
  int a,b,c;	//variabili di input
  int max, min;	//variabili di output
  	
  printf("inserisci tre interi: ");		//richiesta dati
  scanf("%d%d%d", &a, &b, &c);
    
  if (a>b) {					//***************************************************
  	if (a>c) {									
  		max = a;								
  		if (c>b) {								
  			min = b;							
		  } else {								
		  	min = c;							
		  }										
	  } else {									
	  	max=c;									
	  	min=b;										
	  }											
  } else {						//									ALGORITMO											//
  	if (b>c) {									
  		max = b;								
  		if (a>c) {								
  			min=c;								
		  } else {								
		  	min=a;								
			}									
	  } else {									
	  	max=c;									
	  	min=a;									
	  }											
  }							//********************************************************		
  
  	
	printf("%d, %d", min, max);
	
}
