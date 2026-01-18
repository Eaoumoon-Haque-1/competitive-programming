#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m; cin >> n >> m;
    char a[n][m];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
    int x,y; cin >> x >> y;
    for(int i = x - 1; i <= n; i++){
        for(int j = y - 1; j <= m; j++){
            if(i == x && y == j){
                continue;
            }
            if(a[i][j] != 'x'){
                cout << i << j << a[i][j];
                cout << "no\n";
                return 0;
            }
        }
    }cout << "yes\n";
    return 0;
}