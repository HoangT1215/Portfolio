import numpy as np

n,h = map(int, input().split())

l = [0]
c = 0.5*h/n
def next_cut(a): # a is the height of the last cut
	# t*(a+t)/h == 2*c  the formula
	# t*(a+t) == 2*c*h
	# (t+a/2)**2 == 2*c*h + a**2/4
	g = np.sqrt(2*c*h+(a**2)/4) - float(a)/2
	return g

for i in range(n-1):
	l.append(next_cut(l[i]))

l.pop(0)
print(l)
