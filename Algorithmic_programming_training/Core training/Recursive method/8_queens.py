# placing 8 queens on 8x8 chessboard

import numpy as np

chessboard = np.zeros((8,8), dtype=np.int)
diag1 = []
diag2 = []
rows = []
cols = []


def backtrack(row):
	for i in range(8):
		if not ((i+row in diag1) or ((i-row) in diag2) or (i in col)):
			cols.append(i)
			diag1.append(i+row)
			diag2.append(i-row)
			if (cols.len() < 8):
				backtrack(row+1)
			else:
				print(cols)
		if (i == 7) and (row > 0):
			backtrack(i-1)
	pass
'''
algorithmic design:
	- run for loop on row i
		if no solution on i+1, go back to i and check the next solution
		else check the row i+1 (if i is not the last row)

'''

