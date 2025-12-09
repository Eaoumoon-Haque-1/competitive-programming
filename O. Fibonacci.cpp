#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    long long a[n+1];
    a[1] = 0;
    a[2] = 1;
    for(int i = 3; i <= n; i++){
        a[i] = a[i-1] + a[i-2];
    }cout << a[n] << endl;

    return 0;
}