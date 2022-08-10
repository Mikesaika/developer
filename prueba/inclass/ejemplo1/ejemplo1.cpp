#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int impar[10],i=0,c=-1;
    cout<<"ingrese dato de arreglos";
    //pares//
    for(i=0;i<=9;i++)
    {
       c=c+2;
       impar[i]=c;
    }
    for(i=0;i<=9;i++)
    {
        cout<<"\n"<<impar[i];
    }
    
    return 0;
}