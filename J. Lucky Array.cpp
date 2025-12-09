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
    int min_number = INT_MAX;
    int frequency = 0;

    for(int i = 0; i < n; i++){
            min_number = min(a[i], min_number);
            
    }
    for(int i = 0; i < n; i++){
           if(a[i] == min_number){
                frequency++;
           }
    }
    if(frequency % 2 == 0){
        cout << "Unlucky" << endl;
    }else cout << "Lucky" << endl;

    return 0;
}