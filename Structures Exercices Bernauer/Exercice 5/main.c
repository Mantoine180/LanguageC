#include <stdio.h>
#include <stdlib.h>




typedef struct
    {
            char nom [20];
            char prenom[20];
            int age;
    } Personne;




void ageMax(Personne *tableau)
{
    int max=-1;
    for (int i = 0 ; i <= 10 ; i ++)
    {
      if (max< tableau[i].age)
      {
          max=tableau[i].age;
      }
    }

    for (int z = 0 ; z <= 10 ; z ++)
    {
      if (max==tableau[z].age)
      {
          Afficherpersonne(tableau[z]);
      }
    }

}
// on n'y touche pas
void Afficherpersonne(Personne a1)
{
    printf( "</////%s %s %d//////> \n",a1.nom, a1.prenom,a1.age);
}

int main()
{
    Personne p1={"Machin","Truc",32};
    Personne p2={"Bidule","Etc",35};
    Personne p3={"A","c",18};
    Personne p4={"Amat","Clement",25};

    Personne truc [10]={p1,p2,p3,p4,{"Bob","Moris",35}};

    ageMax(truc);

    // AFFICHER CARACTERISTIQUES DES PERSONNES LES PLUS AGEES

    // Trouver l'age maximum

    // Afficher les caractéristiques des personnes ayant l'age max

    return 0;
}
