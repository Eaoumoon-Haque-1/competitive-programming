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
    int max_number = INT_MIN; 
    int min_number = INT_MAX; 
    int max_index = -1;
    int min_index = -1;

    for(int i = 0; i < n; i++){
        // max_number = max(max_number, a[i]);
        // min_number = min(min_number, a[i]);
        if(max_number < a[i]){
            max_number = a[i];
            max_index = i;
        }
        if(min_number > a[i]){
            min_number = a[i];
            min_index = i;
        }
    }
    swap(a[min_index], a[max_index]);

    for(int i = 0; i < n; i++){
            cout << a[i] << " ";
    }cout << endl;

    return 0;
}