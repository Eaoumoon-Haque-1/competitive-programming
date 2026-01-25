#include<bits/stdc++.h>
using namespace std;

// const int N = 1e7 + 10;
char c[51];
int a[201][201];

// int d[127];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    for( int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int leftToRightDiagonalSum = 0, RightToLeftDiagonalSum = 0;
    for( int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) leftToRightDiagonalSum += a[i][j];
            if(j == n-i-1) RightToLeftDiagonalSum += a[i][j];
        }
    }
    cout << abs(leftToRightDiagonalSum - RightToLeftDiagonalSum) << endl;
 
}