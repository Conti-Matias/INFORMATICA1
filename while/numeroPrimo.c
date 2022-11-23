/** ****************************************************************************************
* \mainpage tabulazioneNumeri.c
*
* @brief Letto un numero controlla se è primo
* 
* @author Tommaso Sollo
* @date 23/11/2022
*/

#include <stdio.h>

int main() {
	int n;
	bool control = true;
	
	printf("inserisci un numero: ");
	scanf("%d", &n);
	
	for(int i = 2; i < n/2+1; i++) {
		if (n%i==0 && i!=n)
			control = false;
	}
	
	if (control)
		printf("e' primo");
	else
		printf("non e' primo");
}
