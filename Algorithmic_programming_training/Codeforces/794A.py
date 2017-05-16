import numpy as np

a,b,c = map(int, input().split())
n = int(input())
l = [int(x) for x in input().split()]

s = 0
for i in range(n):
	if (l[i] > b) and (l[i] < c):
		s += 1

print(s)



