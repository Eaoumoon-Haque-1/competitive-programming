#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    bool flag = true;
    for(int i=0,j=n-1; i<n; i++,j--){
        if(a[i] != a[j]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout << "YES";
    }else cout << "NO";

    return 0;
}