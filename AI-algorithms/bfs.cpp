#include <bits/stdc++.h>
using namespace std;

void display_queue(queue <int> p){
    queue <int> z = p;
    while (!z.empty()){
        cout<<'\t'<<z.front();
        z.pop();
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
	cout<<"\nAdjacency matrix:"<<endl;
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
	queue <int> v;
	visited[start] = true;
	v.push(start);
	int temp = 0;
	int t = 0;
	cout<<"Traversal:"<<endl;
	while(!v.empty()){
		cout<<endl<<"----------"<<endl;
		temp = v.front();
		cout<<temp<<" ";
		v.pop();
		for(int k = 0; k < n; k++){
			t = graph[temp][k];
			if(t == 1){
				if(visited[k]==false && visited[end] == false){
					visited[k] = true;
					v.push(k);
				}	
			}
			
		}
		cout<<"\nCurrent queue: ";
		showq(v);
	}
	return 0;
}