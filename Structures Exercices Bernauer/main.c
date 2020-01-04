#include <stdio.h>
#include <stdlib.h>


typedef struct
    {
            char nom [20];
            char prenom[20];
            int age;
    } Personne;

int main()
{
    Personne p1={"Machin","Truc",32};
    Personne p2={"Bidule","Etc",25};
    Personne p3={"A","c",18};

    if (p1.age>=p2.age && p1.age>=p3.age)
    {
        printf("%s",p1.prenom);
    }

    else if (p2.age>p1.age && p2.age>=p3.age)
    {
        printf("%s",p2.prenom);

    }

    else
    {
        printf("%s",p3.prenom);

    }

    return 0;
}
