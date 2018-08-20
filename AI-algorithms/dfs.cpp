#include <bits/stdc++.h>
using namespace std;

void display_stack(stack <int> st){
	stack <int> s = st;
	while(!s.empty()){
		cout<<" "<<s.top();
		s.pop();
	}
	cout<<endl;
}
int main(){
	int n;
	cout<<"\nEnter number of vertex: ";
	cin>>n;
	cout<<"\nEnter the adjacency matrix:"<<endl;
	int graph[n][n];
	for(int i = 0; i < n;i++){
		cout<<i<<": ";
		for(int j =0; j <n; j++){
			cin>>graph[i][j];
		}
	}
	cout<<endl<<"Adjacency matrix:"<<endl;
	for(int i = 0; i < n;i++){
		cout<<i<<": ";
		for(int j =0; j <n; j++){
			cout<<graph[i][j];
		}
		cout<<endl;
	}
	cout<<"\nEnter start vertex: ";
	int start;
	cin>>start;
	int end;
	cout<<"\nEnter end vertex: ";
	cin>>end;
	bool visited[n];
	for(int i = 0; i < n;i++)
		visited[i] = false;
	stack <int> v;
	v.push(start);
	int temp = 0;
	int t = 0;
	cout<<"Traversal:"<<endl;
	while(!v.empty()){
		cout<<endl<<"----------"<<endl;
		temp = v.top();
		v.pop();
		if(!visited[temp]){
			cout<<temp<<" ";
			visited[temp] = true;
		}


		for(int k = 0; k < n; k++){
			t = graph[temp][k];
			if(t == 1){
				if(visited[k]==false)
					v.push(k);
			}
			
		}
		cout<<"\nCurrent stack: ";
		display_stack(v);
		if(visited[end])
			break;
		
	}
	return 0;
}