#include <bits/stdc++.h>
using namespace std;

int main(){
	int size;
	cout<<"\nEnter size: ";
	cin>>size;
	int *a = new int[size];	//dynamic array
	cout<<"\nShift: ";
	int shift;
	cin>>shift;
	cout<<"\nEnter numbers: ";
	for(int i =0; i < size;i++){
		cin>>a[i];
	}
	int temp=0;
	int *b = new int[size];
	shift = shift % size;
	for(int i =0; i < size;i++){
      b[i] = a[(((i-shift)%size)+size)%size];
      //c++ -2%5 = -2, but should be 3
      //-2%5 = -2 => -2+5 = 3 => 3%5 = 3 workaround
	}
	for(int i =0; i < size;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}