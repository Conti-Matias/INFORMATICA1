/** ****************************************************************************************
* \mainpage a_divisoreNumero.c
*
* @brief programma che utilizza funzioni
* 
* @author Tommaso Sollo
* @date 30/11/2022
*/

#include <stdio.h>
#include <limits.h>

//funzione che trova il MCD tra due numeri
int MCD(int, int);

//funzione che restituisce la somma dei divisori del parametro
int sommaDivisori(int);

//funzione che presi in input base e altezza restituisce l'area
int areaRettangolo(int, int);



int main()
{

    printf("\n--Esercizio Sollo Tommaso--\n\n");


    int r;              //variabile che conterrà i risultati delle funzioni
    int n1, n2;         //varibili di input
    

    //chiedo due numeri in input
    printf("Inserisci due numeri: \n");
    scanf("%d%d", &n1, &n2);


    printf("\n---------------\n\n");

    //chiamata funzione MCD
    r=MCD(n1, n2);
    printf("\nMCD = %d\n\n", r);


    printf("\n---------------\n\n");

    //chiamata funzione sommaDivisori per la prima variabile
    r=sommaDivisori(n1);
    printf("\nSomma dei divisori di %d = %d\n", n1, r);
    //chiamata funzione sommaDivisori per la seconda variabile
    r=sommaDivisori(n2);
    printf("\nSomma dei divisori di %d = %d\n\n", n2, r);


    printf("\n---------------\n\n");

    //chiamata funzione areaRettangolo
    r=areaRettangolo(n1, n2);
    printf("\narea di un rettangolo con base %d e altezza %d = %d\n\n", n1, n2, r);


}


int MCD(int x, int y)
{
    float r;    //conterrà il resto
    int c;      //variabile utilizata per scambiare i valori di x e y

    //se y è magiore di x scambio i valori delle variabili
    if(y>x){
        c=x;
        x=y;
        y=c;
    }

    //algoritmo di Euclide per trovare l'MCD
    while(y!=0)
    {
        r = x%y;
        x=y;
        y=r;
    }

    //restituisco il risultato
    return x;
    
}

int sommaDivisori(int x)
{
    int r = 0;  //conterrà la somma di tutti i divisori

    //itero tutti i numeri tra 1 e il numero
    for(int i = 1; i<x; i++)
    {
        if(x%i==0) r += i;    //se l'indice del ciclo è un divisore lo sommo  
    }

    //restituisco il risultato
    return r;
}

int areaRettangolo(int x, int y)
{
    int area = x * y;   //calcolo l'area

    //restituisco il risultato
    return area;
}