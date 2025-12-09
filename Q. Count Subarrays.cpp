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
        int count = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int x = 1;
                for(int k = i; k < j; k++){
                    if(a[k] > a[k+1]){
                        x=0;
                        break;
                    }
                }if(x == 1) count++;
            }
        }cout << count <<endl;
    }return 0;
}