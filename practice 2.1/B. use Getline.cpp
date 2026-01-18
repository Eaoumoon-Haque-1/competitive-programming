#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    getline(cin,s);
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '\\'){
            cout << s[i];    
        }
        else break;
    }cout << endl;

    return 0;
}