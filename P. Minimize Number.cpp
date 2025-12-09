#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int freq = 0;
    while(true){
         for(int i = 0; i < n; i++){
            if(a[i] % 2 == 0){
                a[i] /= 2;
            }else{
                cout << freq << endl;
                return 0;
            } 
        }
        freq++;

    }
    
    // return 0;
}