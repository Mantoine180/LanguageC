#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int secret;
    int nombre;
    int compteur=0;
    cin >>secret;

    do{

        cout << "Trouver le nombre mystere entre 1 et 10"<< endl;
        cin >>nombre;

        if (nombre<0 || nombre>10)
        {
             cout << "Le nombre entre ne se trouve pas entre 1 et 10"<< endl;
        }

        if (nombre<secret)
        {
            cout << "Plus grand "<<endl ;
        }

        if (nombre>secret)
        {
            cout << "Plus petit "<<endl ;
        }

        compteur++;

     } while (secret!=nombre) ;

     compteur++;
     cout<<endl<<"Bravo vous avez trouve lez nombre mystère au "<<compteur<<"eme coup"<< endl;


    return 0;
}
