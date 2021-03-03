#include<iostream>
using namespace std;
int ucln(unsigned int a,unsigned int b)
{
    if (a == 0 || b == 0)
        return a + b;
    while(b != a) {
        if (a > b) {
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}
int main()
{
    unsigned int x,y;
    cin >> x >> y ;
    if (ucln(x,y)==1) cout << "Nguyen to cung nhau";
    else cout << "khong nguyen to cung nhau";
}
