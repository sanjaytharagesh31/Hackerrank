#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N,Q,num;
    vector<int> arr;
    cin>>N;
    
    for(int j, i=0; i<N; i++){
        cin>>j;
        arr.push_back(j);
    }
    
    cin>>Q;
    for(int i=0; i<Q; i++){
        cin>>num;
        vector<int>::iterator low = lower_bound(arr.begin(), arr.end(), num);
        if(arr[low - arr.begin()] == num){
            cout<<"Yes "<<low-arr.begin()+1<<endl; 
        }
        else{
            cout<<"No "<<low-arr.begin()+1<<endl;
        }
    }
    
     
    return 0;
}
