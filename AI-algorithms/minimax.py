def minimax(graph,nval,i,fl):
	fl = not(fl)	#flip flag value
	if i not in graph:	#if leaf node, return value
		return int(i)
	l = len(graph[i])	#calculate length of sub-tree nodes
	for j in range(l):
		val = minimax(graph,nval,graph[i][j],fl)
		if isinstance(val,int):		
			l=[nval[i] ,val]
			if fl:	#flag = true, calculate max
				nval[i] = max(k for k in l if k is not 0)
			else:	#flag = false, calculate min
				nval[i] = min(k for k in l if k is not 0)
	# print(nval)
	return nval[i]

graph = dict()
n = int(input("Enter number of vertex:"))
node_val = dict()
for i in range(n):
	v = input("Vertex: ")
	print("Enter connected nodes: ")
	adjacent = [adj_temp for adj_temp in input().strip().split()]
	graph[v] = adjacent
	node_val[v] = 0		#initialize node min-max values = 0
parent = input("Enter parent node: ")
print("Graph: ",graph)
print("Initial node values: ",node_val)
flag = False
minimax_val = minimax(graph,node_val,parent,flag)
print("Final node values: ",node_val)
print("Optimal value: ",minimax_val)