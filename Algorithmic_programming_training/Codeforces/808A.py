#lucky year

n = int(input())


digit = int(floor(log(n)/log(10)))+1
head = int(floor(n/10**(digit-1)))
if (head == 9):
	ans = int(10**digit - n)
else:
	ans = int((head+1)*(10**(digit-1)) - n)

print(ans)
exit()