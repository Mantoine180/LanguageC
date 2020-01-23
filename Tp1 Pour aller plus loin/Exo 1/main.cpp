#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    int n;
    int l;
    char car;
    char  position[20];
    cout << "Saisir un nombre entier:";
    cin>>  n;
    cout << "Saisir une largeur minimale d'affichage:" ;
    cin>>l;
    cout<<"Choisir un caractère de remplissage: ";
    cin>>car;
    cout<<"Saisir un affichage gauche ou droit: ";
    cin>>position;


    if(strcmp(position, "gauche")==0)
 {
      cout<< std::setfill(car)<< std::setw(l)<<setiosflags(ios::left)<<n <<endl;
 }

   else if(strcmp(position, "droit")==0)
 {
      cout<< std::setfill(car)<< std::setw(l)<<setiosflags(ios::right)<<n<<endl;
 }

 else
 {
     cout<<"La valeur entree n'est pas correcte"<<endl;
 }

;
    return 0;
}
