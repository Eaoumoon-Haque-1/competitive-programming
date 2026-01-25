#include<bits/stdc++.h>
using namespace std;

// const int N = 1e7 + 10;
char c[51];

// int d[127];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    cin >> c;
    int count = 0;
    for(int i = 0; i < n; i++){
        if((i+1) < n && c[i] == c[i+1]){
            count++;
        }
    }
    cout << count <<endl;

    
}