#include <iostream>

using namespace std;

int main()
{
    float tab [10]={-1,0,1,2,3,4,5,6,7,8} ;

    for (int i=0;i<10;i++)
    {
        if(tab[i]>=0)
        {
            cout<< tab [i]<<",0"<<endl ;
        }
    }
     cout<<endl<<hex<<tab ;
    return 0;
}
