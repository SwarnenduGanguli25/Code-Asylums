n = int(input())
arr = [-1 for i in range(n)]
for i in range(n) :
	arr[i] = input().split()
for i in range(n) :
	rev = 0
	for j in range(2) :
		rev += int(arr[i][j][::-1]) 
	print(int(str(rev)[::-1]))
