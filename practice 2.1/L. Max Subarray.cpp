#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int max_num = INT_MIN;
                for(int k = i; k <= j; k++){
                    max_num = max(max_num, a[k]);
                }
                cout << max_num << " ";
            }
        }cout << endl;
    }
    // 1 6 3 7 6 6 7 6 7 7
    return 0;
}