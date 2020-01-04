#include <stdio.h>
#include <stdlib.h>

typedef struct
{
char nom [20];
char prenom [20];
int age;
int sexe;
}Personne;

void affiche(Personne a1)
{
    printf( "%s %s %d",a1.nom, a1.prenom,a1.age);
}


void Afficherpersonne(Personne b1,Personne p2,Personne p3, Personne p4)
 {


if (b1.sexe==1)
{
    affiche(b1);
}

if (p2.sexe==1)
{
     affiche(p2);
}

if (p3.sexe==1)
{
     affiche(p3);
}

if (p4.sexe==1)
{
    affiche (p4);
}
 }

int main()
{
    Personne p1={"Machin","Truc",32,2};
    Personne p2={"Bidule","Etc",32,1};
    Personne p3={"A","c",18,1};
    Personne p4={"Amat","Clement",25,1};
    Afficherpersonne(p1,p2,p3,p4);
}
