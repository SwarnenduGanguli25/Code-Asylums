n =  int(input())
arr = [-1 for i in range(n)]
for i in range(n) :
	arr[i] = int(input())
for ele in arr:
	sum = 0
	for i in range(1, ele+1) :
		sum += 2*i
	for j in range(1, ele) :
		sum += j
	print(sum)
