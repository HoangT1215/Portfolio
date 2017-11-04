#Longest path in DAG --- here we assumed that the graph is DAG

import numpy as np
import math

def topo_order():
	l = []
	i = 0
	while not visited[i]:
		dfs(i)
		visited[i] = 1
		l = [i] + l
		i += 1
	return l

def dfs(v):
	if visited[v]:
		return
	else:
		for j in range(len(adj_list[v])):
			dfs(adj_list[v][j][0])

if __name__ == "__main__":
	n, m = int(input().split())	# number of nodes and edges respectively
	in_deg = np.zeros(n) # contains the number of incoming edge of a vertex, a.k.a in-degree
	visited = np.zeros(n)
	adj_list = [[] for v in range(n)]
	for i in range(m):
		a, b, w = int(input().split())
		adj_list[a].append([b,w])
		in_deg[b] += 1
		edge_count[a] += 1
	topo = topo_order()
	dp = np.zeros(n) # the array that will save the states of our dynamic programming algorithm
	parent = np.zeros(n) # point to the parent with the heaviest path

	for i in range(n):
		if in_deg[topo[i]] == 0:
			dp[topo[i]] = 0
			parent[topo[i]] = -1
		else:
			for k in range(len(adj_list[topo[i]])):
				dp[adj_list[topo[i]][k]] = max(dp[topo[i]] + adj_list[topo[i]][k][1],dp[adj_list[topo[i]][k]])
				if adj_list[topo[i]][k] == dp[topo[i]] + adj_list[topo[i]][k][1]:
					parent[adj_list[topo[i]][k]] = topo[i] # save the parent with the heaviest path

	dist = -1
	flag = -1
	path = []
	for i in range(n):
		dist = max(dist, dp[i])
		if dist == dp[i]:
			flag = i

	v = flag
	while parent[v] != -1:
		path = [v] + path
		v = parent[v]

	print('Weight of the longest path', dist)
	print(path)




