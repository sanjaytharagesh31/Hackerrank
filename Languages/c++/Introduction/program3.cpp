#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int i;
    long l;
    char c;
    float f;
    double d;
    cin>>i>>l>>c>>f>>d;
    cout<<i<<endl;
    cout<<l<<endl;
    cout<<c<<endl;
    cout<<setprecision(3)<<fixed<<f<<endl;
    cout<<setprecision(9)<<fixed<<d<<endl;
    return 0;
}

