#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int secret;
    srand (time(NULL));
    secret = rand() % 10 + 1;
    int nombre;
    int compteur=0;

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
        cout<<"Vous en etes a votre "<<compteur<<" eme essai"<<endl;

     } while (secret!=nombre) ;

     cout<<endl<<"Bravo vous avez trouve lez nombre mystère"<< endl;


    return 0;
}
