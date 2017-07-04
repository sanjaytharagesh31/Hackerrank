#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,temp,x,a,b;
    vector<int> arr;
    cin>>N;
    for(int i=0; i<N; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cin>>x;
    arr.erase(arr.begin()+x-1);
    cin>>a>>b;
    arr.erase(arr.begin()+a-1,arr.begin()+b-1);
    cout<<arr.size()<<endl;
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<" ";
    return 0;
}
