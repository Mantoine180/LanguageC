#include <stdio.h>
#include <stdlib.h>


typedef struct
    {
            char nom [20];
            char prenom[20];
            int age;
    } Personne;

void Afficherpersonne(Personne a1)
{
    printf( "%s %s %d",a1.nom, a1.prenom,a1.age);
}


int main()
{
    Personne p1={"Machin","Truc",32};
    Personne p2={"Bidule","Etc",32};
    Personne p3={"A","c",18};

    Afficherpersonne(p1);

    return 0;
}
