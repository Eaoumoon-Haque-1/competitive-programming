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
    int query;
    cin >> query;
    int index = -1;
    for( int i = 0 ; i < n; i++){
        if(a[i] == query){
            index = i;
            break;
        }
    }
    cout << index << endl;

    return 0;
}