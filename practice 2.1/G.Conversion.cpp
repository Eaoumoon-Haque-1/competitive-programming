#include <bits/stdc++.h>
using namespace std;

char s[100009];

int main(){
	cin >> s;
	for(int i = 0; i < strlen(s); i++){
		if(s[i] != ',' && s[i] >= 'a' && s[i] <= 'z' ){
			int asciiNumberDiff = (s[i] - 97) + 65;
			s[i] = (char) asciiNumberDiff;	
		}
		else if(s[i] != ',' && s[i] >= 'A' && s[i] <= 'Z' ){
			int asciiNumberDiff = (s[i] - 65) + 97;
			s[i] = (char) asciiNumberDiff;	
		}else {
			s[i] = ' ';
		}
		
	}cout << s;
	// char s = 'b';
	// int x = s - 97;
	// cout << x;
}

