// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
#include <algorithm>    // std::sort
#include <vector>       // std::vector
using namespace std;
 
int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
 	//sort(start address,end address)
    sort(arr, arr+n);
 	cout << "\nArray after sorting using default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    
    //descending order using greater
    sort(arr, arr+n, greater<int>());
    cout << "Array after sorting : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    return 0;
}