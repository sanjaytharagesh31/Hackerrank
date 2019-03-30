#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int arr[n+1];
        for(int i=1; i<=n; i++)
            arr[i] = i;
        int max = -1;
        for(int i=1; i<=n; i++) {
            for(int j=i+1; j<=n; j++) {
                if(max < (arr[i]&arr[j]) && (arr[i]&arr[j]) < k)
                    max = arr[i] & arr[j];
            }
        }
        cout << max << endl;
    }
}
