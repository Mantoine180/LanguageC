/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void afficher_tab (int tab[], int taille)
{
    int i;
    printf("[");
    for (i=0;i<taille;i++) 
    {
        printf (" %d", tab [i]);
    }
    printf("]\n");
}

int somme_tab (int tab[],int taille)
{
    int i;
    int somme=0 ;
    for (i=0; i<taille; i=i+1)
    {
         somme= somme+ tab [i];
    }
    return somme;
    
}

int main()
{
    int monTableau [6] = { 3, 5, 8,16 ,35, 12 };
    int tab2[] = {1,2,3,4,5,6,7,8};
    int res= somme_tab(monTableau,6) ;
    printf("La somme est %d",res);
    return 0;
}

