#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arregloa[5],arreglob[5], arregloc[5],count=0;
    float promedio;
    for(int i=0;i<5;i++)
    {
        cout<<"ingrese valor ["<<i<<"]";
        cin>>arregloa[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<"ingrese valor ["<<i<<"]";
        cin>>arreglob[i];
    }
    for(int i=0;i<5;i++)
    {
        arregloc[i]=arregloa[i]-arreglob[i];
        count+=arregloc[i];
    }
    for(int i=0;i<5;i++)
    {
        cout<<"Arreglo C ["<<i<<"]"<<arregloc[i] <<"\n";   

    }
    promedio= count/5;
    cout<<"El promedio de los arreglos es: "<<promedio;

    return 0;
}
