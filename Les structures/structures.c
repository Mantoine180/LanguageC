#include <stdio.h>

typedef struct
{
    char nom;
    int age;
} Personne;

void Afficherpersonne(Personne p)
{
  printf ("%c a %d ans \n",p.nom, p.age)  ;
}

int main()
{
    Personne p1={'a',19};
    Personne clement;
    clement.nom = 'c';
    clement.age = 22;
  
    int tab[] = { 1,2,3};
    Personne tab_personne[5]={ p1, clement, {'d', 8}};
    
    
    int i;
    for (i=0;i<5;i++)
    {
        
        if (tab_personne[i].age>=18)
        {
            Afficherpersonne (tab_personne[i]);
        }
    }
}
