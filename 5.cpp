#include<iostream>
#include<cmath>
using namespace std;
bool checknt(unsigned int n )
{
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++)
    {
        if (n%i==0) return false;
    }
    return true;
}
int main()
{
   int x;
   cin >> x;
   for(int i=2;i<x;i++)
    {
        if (checknt(i)) cout << i << " ";
    }
}
