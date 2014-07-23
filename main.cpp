#include <iostream>
using namespace std;

int getMenor(int a, int b, int c)
{
    if(a < b && a <c)
        return a;
    if(b < a && b < c)
        return b;
    return c;
}

bool esMultiploDe2(int num)
{
    return num%2==0;
}

int fibonacci(int num)
{
    int numeros[10];
    numeros[0]=0;
    numeros[1]=1;
    for(int i=2;i<10;i++)
        numeros[i]=numeros[i-1]+numeros[i-2];

    return numeros[num];
}

double getPromedio(double a, double b, double c)
{
    return (a+b+c)/3;
}

int func1()
{
    int x=1;
    int *y = new int(2);

    cout<<x<<endl;
    cout<<y<<endl;
    cout<<*y<<endl;
}

int main()
{
    func1();
    return 0;
}
