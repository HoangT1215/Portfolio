# Arbitrage problem
import pdb
"""
The Bellman-Ford algorithm
Graph API:
    iter(graph) gives all nodes
    iter(graph[u]) gives neighbours of u
    graph[u][v] gives weight of edge (u, v)
"""

# Step 1: For each node prepare the destination and predecessor
def initialize(graph, source):
    d = {} # Stands for destination
    p = {} # Stands for predecessor
    for node in graph:
        d[node] = float('Inf')
        p[node] = None
    d[source] = 0 # For the source we know how to reach
    return d, p

def relax(node, neighbour, graph, d, p):
    # If the distance between the node and the neighbour is lower than the one I have now
    if d[neighbour] > d[node] + graph[node][neighbour]:
        # Record this lower distance
        d[neighbour]  = d[node] + graph[node][neighbour]
        p[neighbour] = node

def bellman_ford(graph, source):
    d, p = initialize(graph, source)
    for i in range(len(graph)-1): #Run this until is converges
        for u in graph:
            for v in graph[u]: #For each neighbour of u
                relax(u, v, graph, d, p) #Lets relax it

    # Step 3: check for negative-weight cycles
    for u in graph:
        for v in graph[u]:
            assert d[v] <= d[u] + graph[u][v]

    return d, p

def test():
    graph = {
        'USD': {'USD': 1, 'EUR':  0.741, 'GBP': 0.657, 'CHF': 1.061, 'CAD': 1.005},
        'EUR': {'USD': 1.349, 'EUR':  1, 'GBP': 0.888, 'CHF': 1.433, 'CAD': 1.366},
        'GBP': {'USD': 1.521, 'EUR':  1.126, 'GBP': 1, 'CHF': 1.614, 'CAD': 1.538},
        'CHF': {'USD': 0.942, 'EUR':  0.698, 'GBP': 0.619, 'CHF': 1, 'CAD': 0.953},
        'CAD': {'USD': 0.995, 'EUR':  0.732, 'GBP': 0.650, 'CHF': 1.049, 'CAD': 1}
        }

	paths = []

	for key in graph:
		path = bellman_ford(graph, key)
		if path not in paths and not None:
			paths.append(path)
    d, p = bellman_ford(graph, 'USD')

if __name__ == '__main__': test()

'''
if __name__ == "__main__":
print('Input the number of currencies and contracts')
n, m = int(input.split())
price_matrix = np.zeros((n,n))
for i in range(m):
	print('Enter currency IDs and the respective exchange rate')
	c1, c2, r = int(input.split())
	price_matrix[c1,c2] = r
	price_matrix[c2,c1] = 1/r

'''

# Row of coin game
coin = []
input('Input the number of coins:')
n = int(input())
for i in range(n):
	coin.append(int(input()))

def strategy(c):
	max_value = 0
	i = 0
	j = n-1
	mat = np.zeros((n,n))
	while (j>i):
		if c[i] < c[j]:
			j -= 1
			max_value += c[j]*((n-(j-i))%2) # if it's player 1's turn then n-(j-i) % 2 == 1
		else:
			i += 1
			max_value += c[j]*((n-(j-i))%2)
	return max_value

# dp formula:
# dp[i,j] = max(dp[i,j-2] + c[j], d[i+2,j] + c[i], d[i+1,j-1] + max(c[i], c[j]))
