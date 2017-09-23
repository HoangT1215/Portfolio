import numpy as np

def binarysearch(a, item):
	first = 0
	last = len(a) - 1

	while first <= last:
		i = (first + last) >> 1
		if a[i] == item:
			return '{item} found at position {i}'.format(item=item, i=i)
		elif a[i] > item:
			last = i - 1
		elif a[i] < item:
			first = i + 1
		else:
			return '{item} not found in the list'.format(item=item)

def binary_search_recursive(a, item):
	first = 0
	last = len(a) - 1

	if len(a) == 0:
		return '{item} was not found in the list'.format(item=item)
	else:
		i = (first + last) // 2
		if item == a[i]:
			return '{item} found'.format(item=item)
		else:
			if a[i] < item:
				return binary_search_recursive(a[i+1:], item)
			else:
				return binary_search_recursive(a[:i], item)

#--- main
arr = [1, 2, 5, 7, 11]
print(binarysearch(arr, 7))