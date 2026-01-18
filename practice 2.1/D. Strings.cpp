//4 2
//abcdef
//ebcd af
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    char a[11], b[11]; cin >> a >> b;

    cout << strlen(a) << " " << strlen(b) <<endl;
    cout << a << b << endl;
    swap(a[0],b[0]);
    for(int i = 0; i < strlen(a); i++){
        cout << a[i]; 
    }cout << " ";
    for(int i = 0; i < strlen(b); i++){
        cout << b[i]; 
    }cout << endl;
    return 0;
}