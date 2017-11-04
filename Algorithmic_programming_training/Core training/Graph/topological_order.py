#DAG topological ordering --- here we assumed the graph is DAG

def dfs(v):
	if visited[v]:
		return
	else:
		for j in range(len(adj_list[v])):
			dfs(adj_list[v][j])

if __name__ == "__main__":
	n, m = int(input().split())	# number of nodes and edges respectively
	out = np.zeros(n)
	visited = np.zeros(n)
	adj_list = [[] for v in range(n)]
	for i in range(m):
		a, b = int(input().split())
		adj_list[a].append(b)
		out[b] += 1
		edge_count[a] += 1
	l = []

	while not visited[i]:
		dfs(i)
		visited[i] = 1
		l = [i] + l
		i += 1

	print(l)	# l is the desired topological order