#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int min_number = INT_MAX;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                int result = a[i] + a[j] + j - i;
                min_number = min(min_number,result);
            }
        }
        cout << min_number << endl;
    }

    return 0;
}