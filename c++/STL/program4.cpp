#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int Q,y,x;
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>y>>x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else {
            cout<<(s.find(x) == s.end() ? "No" : "Yes")<<endl;
        }
    }
    return 0;
}
