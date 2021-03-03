#include<iostream>
using namespace std;
void write(int m,int n)
{
    for(int i=1;i<=m;i++) cout << " ";
    for(int i=1;i<=n;i++) cout << "*";
}
int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        write(n-i-1,(2*i+1));
        cout << endl;
    }
}
