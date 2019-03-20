//MERGESORT
#include<bits/stdc++.h>
#include <iostream>
using namespace std;


void merge(int arr[], int l, int m, int r){
	int n1 = m - l + 1;
	int n2 = r - m;
    int left[n1],right[n2];  //temp arrays
    
    int i,j,k;
    for(i = 0; i < n1; i++)
    	left[i] = arr[l+i];
    for(j = 0; j < n2; j++)
    	right[j] = arr[m+1+j];
    //merge the temp array into arr
    i = 0; //initial index of left subarray
    j = 0; //initial index of right subarray
    k = l; //initial index of merged subarray
    while(i < n1 && j < n2){
    	if(left[i] <= right[j]){
    		arr[k] = left[i];
    		i++;
    	}
    	else{
    		arr[k] = right[j];
    		j++;
    	}
    	k++;
    }
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
    	arr[k] = left[i]; 
    	i++; 
    	k++; 
    } 
    
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
    	arr[k] = right[j]; 
    	j++; 
    	k++; 
    } 
    
}


void mergesort(int arr[],int l,int r){
	if( l < r){
		int mid = (l + r) / 2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}

int main() {
	int arr[] = {7,8,5,4,3};
	int size = sizeof(arr)/sizeof(int);
	mergesort(arr,0,size-1);
	for(int i = 0; i < 5; i++)
		cout<<arr[i]<<" ";
	return 0;
}