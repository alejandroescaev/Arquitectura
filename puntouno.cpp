#include <iostream>
#include <math.h>

using namespace std;

int uno(int a, int b)
{
    int r=0;
    for(int cont=0;cont < b;cont++)
    {
    r=r+a;
    }
    return r;
}

int dos(int a, int b)
{
    int r=0;
    int aux=a;
    for(int cont=0;cont<b-1;cont++)
    {
            r=uno(aux,a);
            aux=r;
    }
    return r;
}

double pol(int x,int n)
{
    int exp=n;
    int k[n+1];
    double r=0;
    for(int i=0;i<=n;i++)
    {
    cin>>k[i];
    }
    for(int i=0;i<=n;i++)
    {
            r=r+(k[i]*(pow(x,exp)));
            exp--;
    }
    return r; 
}

int cuatro(int a)
{
    int r=0;
    int aux=1;
    for(int cont=0;cont<a-1;cont++)
    {
            r=uno(aux,aux+1);
            aux=r;
    }
    return r;
}

int cinco(int a, int b)
{
    int cont=0;
    while(a>=b)
    {
               a=a-b;
               cont++;
}
               return cont;
}

int main()
{
    //cout<<uno(6,4);
    //cout<<dos(5,5);
    //cout<<pol(3,2);
    //cout<<cuatro(4);
    cout<<cinco(15,3);
    system ("pause");
}
