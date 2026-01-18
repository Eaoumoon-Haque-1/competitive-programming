#include<bits/stdc++.h>
using namespace std;

// const int N = 1e9 + 5;
// int a[N];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    sort(a,a+n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }cout << endl;
    
    return 0;
}