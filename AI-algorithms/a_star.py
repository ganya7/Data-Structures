import heapq

def dijkstra(g,source,end,b=False):
	dist = [100]*len(g)
	dist[source] = 0 #distance source vertex = 0, rest infinity
	vertex = []
	w = 0
	e = 0
	vis_d = [False]*len(g)	#initialize all vertices as unvisited and insert them in queue
	for i in range(len(g)):
		heapq.heappush(vertex,(dist[i],i))
	parent = [-1]*n 	#array to store the shortest path from source
	while vertex:	#until all vertices are visited
		wei,v = heapq.heappop(vertex)
		if vis_d[v] == False:
			vis_d[v] = True
		for i in range(len(g)):
			if graph[v][i] > 0:		#connected nodes of current vertex
				e = i 	#edge to connected node
				w = graph[v][i] 	#weight of current and connected vertex
			if dist[v] + w < dist[e]:
				dist[e] = dist[v] + w
				parent[e] = v
				heapq.heappush(vertex,(dist[e],v))
	if b:
		path = []
		path.append(source)
		print("Path:")
		path = path_print(parent,end,path)
		print(path)
	return dist[end]

def path_print(parent,end,path):
	if parent[end] == -1:
		return
	path_print(parent,parent[end],path)
	path.append(end)
	return path

n = int(input("Enter number of vertex:"))
graph = []
print("Enter the weights in matrix:")
for i in range(n):
	print(i,":",end="")
	graph_temp = [int(arr_temp) for arr_temp in input().strip().split()]
	graph.append(graph_temp)
start = input("Enter start node:")
goal = input("Enter goal node:")
print("Enter heuristics of the nodes:")
heuristics = {}
for i in range(n-2):
	key,val = input().strip().split()
	key,val = [int(key),int(val)]
	heuristics[key] = val
p_queue = []
heapq.heappush(p_queue,(0,start))
explore = []
visited = [False]*n
g = 0
flag = False
while p_queue:
	val,current = heapq.heappop(p_queue)	#initially source node is popped
	current = int(current)
	visited[current] = True
	explore.append(current)
	if current == goal:
		break
	for i in range(n):
		g = 0
		if graph[current][i] > 0 and visited[i]!=True:	#connected nodes
			if i!= int(goal):
				g = dijkstra(graph,int(start),i)
				f = g + heuristics[i]
			else:
				f = dijkstra(graph,int(start),i,True)
				flag = True
				break
			heapq.heappush(p_queue,(f,i))
	if flag:	#goal reached or not
		explore.append(int(goal))
		break
print("Explore: ",explore)