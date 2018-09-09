#include <bits/stdc++.h>
using namespace std;

bool can_color(int **g, int v, int color[], int cur_color, int n){
	for(int i = 0; i < n; i++){
		if(g[v][i] == 1 && cur_color == color[i])
			return false;
	}
	return true;
}

bool color_graph(int **g, int nc, int col[], int v, int n){
	if(v == n)
		return true;
	cout<<"\n\nVisiting node: "<<v;
	for (int c = 1; c <= nc; c++){
		cout<<"\nAssigning colour: "<<c;
		if (can_color(g, v,col,c,n)){
			col[v] = c;
			if (color_graph (g, nc, col, v+1,n) == true)
				return true;
			col[v] = -1;
			cout<<"\n\nBactrack node, Visiting node: "<<v;
		}
		else
			cout<<"\nColour not allowed, backtrack and try another colour";
	}
	return false;
}

int main(){
	int n;
	cout<<"Enter number of vertex in the graph: ";
	cin>>n;
	int **graph = new int*[n];
	for(int i = 0; i < n; i++)
		graph[i] = new int[n];
	cout<<"\nEnter the adjacency matrix:\n";
	for(int i = 0; i < n;i++){
		cout<<i<<": ";
		for(int j =0; j <n; j++){
			cin>>graph[i][j];
		}
	}
	int n_c = 3;
	cout<<"\nNumber of colours: "<<n_c;
	int colours[n];
	for(int i = 0; i < n; i++)
		colours[i] = -1;
	if(color_graph(graph,n_c,colours,0,n) == false){
		cout<<"\nSolution not possible";
		return 0;
	}
	cout<<"\nAssigned colours are:\n";
	for(int i = 0; i < n; i++){
		cout<<i<<": "<<colours[i];
		cout<<endl;
	}

}