#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int update(int *a,int *b) {
     int p = *a;
     *a = p + *b;
     *b = abs(p - *b);
    return 0;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin>>a;
    cin>>b;
    update(pa, pb);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}
