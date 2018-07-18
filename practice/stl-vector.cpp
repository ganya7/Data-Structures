#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {5,3,57,776,8,1};

	vector<int> v (arr,arr+6);
	sort(v.begin(),v.begin()+8);
	for(auto iterator = v.begin();iterator!= v.end();i++)
		cout<< *iterator <<" ";

	vector<int> g1;
	//insert into vector
	for (int i = 1; i <= 5; i++)
		g1.push_back(i);

    // inserts 5 at the beginning
	g1.insert(g1.begin(), 5);

	// removes last element
    g1.pop_back();
 
	// removes the first element
    g1.erase(g1.begin());

	cout << "Size : " << g1.size();
	cout << "\nCapacity : " << g1.capacity();
	cout << "\nMax_Size : " << g1.max_size();

    // resizes the vector size to 4
	g1.resize(4);

    // prints the vector size after resize()
	cout << "\nSize : " << g1.size();

    // checks if the vector is empty or not
	if (g1.empty() == false)
		cout << "\nVector is not empty";
	else
		cout << "\nVector is empty";

    // Shrinks the vector
	g1.shrink_to_fit();
	cout << "\nVector elements are: ";
	for (auto iterator = g1.begin(); iterator != g1.end(); iterator++)
		cout << *iterator << " ";

	cout << "\nReference operator [g] : g1[2] = " << g1[2];

	cout << "\nat : g1.at(4) = " << g1.at(4);

	cout << "\nfront() : g1.front() = " << g1.front();

	cout << "\nback() : g1.back() = " << g1.back();

    // pointer to the first element
	int* pos = g1.data();

	cout << "\nThe first element is " << *pos;

	return 0;
}