#include <stdio.h>
#include <stdlib.h>


typedef struct
    {
            char nom [20];
            char prenom[20];
            int age;
    } Personne;

int ageMax(int age1,int age2, int age3)
{
    if (age1>=age2 && age1>=age3)
    {
        return age1;
    }

    else if (age2>age1 && age2>=age3)
    {
        return age2;

    }

    else
    {
        return age3;

    }
}

void rechercheParAge (int nombreMax,Personne a1,Personne a2, Personne a3)
{
    if (nombreMax==a1.age)
    {
        printf("%s \n",a1.prenom );
    }

    if (nombreMax==a2.age)
    {
        printf("%s \n",a2.prenom);
    }

    if (nombreMax==a3.age)
    {
        printf("%s \n",a3.prenom);
    }
}


int main()
{
    Personne p1={"Machin","Truc",32};
    Personne p2={"Bidule","Etc",32};
    Personne p3={"A","c",18};

    rechercheParAge (ageMax(p1.age,p2.age,p3.age),p1,p2,p3) ;

    return 0;
}
