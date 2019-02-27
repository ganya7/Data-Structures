#include<bits/stdc++.h>
using namespace std;

void match_pattern(string sinput, string pattern){
	int j = 0;
	int ctr = 0;
	bool flag = false;
	for(int i = 0; sinput[i] != '\0'; i++){
		j = 0;
		flag = false;
		if(sinput[i] == pattern[j]){
			while(pattern[j] != '\0'){
				if(sinput[i+j] != pattern[j]){
					flag = true;
					break;
				}
				j++;
			}
			if(!flag)
				ctr++;
		}
	}
	cout<<ctr;
}

int main(){
	string input;
	cout<<"\nEnter string: ";
	getline(cin,input);
	cout<<"\nEnter pattern string: ";
	string pat;
	getline(cin,pat);
	match_pattern(input,pat);
	return 0;
}