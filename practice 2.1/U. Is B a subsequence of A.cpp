#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    int m; cin >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int b[m];
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    int i = 0, j = 0;
    for(; i < n && j < m; i++){
        if(a[i] == b[j]){
            j++;
        }
    }
    if(j == m) cout<< "YES\n";
    else cout << "NO\n";
    return 0;
}