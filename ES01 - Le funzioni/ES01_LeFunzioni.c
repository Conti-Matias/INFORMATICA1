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
#include <stdlib.h>



/**
 * @brief Calcola il massimo comune divisore tra due numeri 
 *        utilizzando l'algoritmo di Euclide.
 * @param a primo numero
 * @param b secondo numero
 * @return il massimo comune divisore tra a e b
 */
int MCD(int, int);

/**
 * @brief Calcola la somma di tutti i divisori del parametro
 *        
 * @param a numero
 * @return la somma dei divisori del numero
 */
int sommaDivisori(int);

/**
 * @brief Calcola l'area di un rettangolo che ha per base e 
 *        per altezza i parametri 
 * @param a base
 * @param b altezza
 * @return l'area del rettangolo
 */
int areaRettangolo(int, int);

/**
 * @brief Funzione menu
 */
 int menu(void);



int main()
{

    printf("\n--Esercizio Sollo Tommaso--\n\n");


    int r;              //variabile che conterrà i risultati delle funzioni
    int n1, n2;         //varibili di input
    char c;


    while(1)
    {
        

        r = menu();
        

        switch(r)
        {
            case 1:
                printf("Inserisci due numeri: \n");
                scanf("%d%d", &n1, &n2);
                r=MCD(n1, n2);
                printf("\nMCD = %d\n\n", r);
                goto D;

            case 2:
                printf("Inserisci un numero: \n");
                scanf("%d", &n1);
                r=sommaDivisori(n1);
                printf("\nSomma dei divisori di %d = %d\n", n1, r);
                goto D;

            case 3:
                printf("Inserisci due numeri: \n");
                scanf("%d%d", &n1, &n2);
                r=areaRettangolo(n1, n2);
                printf("\narea di un rettangolo con base %d e altezza %d = %d\n\n", n1, n2, r);
                goto D;
            
            case 0: 
                printf("\nCiao");
                goto endLoop;
            
            default:
                printf("\n\nHai sbagliato a digitare");
                


        }

        endLoop:
            break;

        D:
            scanf("%c", &c);
    }
    
}


int menu()
{
    int r;
    char c;

    scanf("%c", &c);
    system("clear");

    printf("\n-----------------------------------------------------------------");
    printf("\nInserisci il valore corrispondente alle funzione da utilizzare\n");
    printf("\n1 - MCD");
    printf("\n2 - Somma Divisori");
    printf("\n3 - Area Rettangolo");
    printf("\n0 - Esci");
    printf("\n\n>>> ");

    scanf("%d", &r);

    return r;
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