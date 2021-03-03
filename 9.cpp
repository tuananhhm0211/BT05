#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int n;
    cin >> n;
    int a=rand()%n;
    cout << a;
}
