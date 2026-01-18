#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char s[120],n[120]; cin >> s >> n;
    int a = strcmp(s,n);
    if(a == 0){
        cout << s << endl; 
    }
    else if(a > 0){
        cout << n << endl;
    }else cout << s << endl;

    return 0;
}