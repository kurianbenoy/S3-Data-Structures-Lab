# Merges two subarrays of arr[]

def merge(arr,l,m,r):
	n1 = int(m-l+1)
	n2 = int(r -m )

	# copy data to temp arrays L[ ] AND R[]

	L = [0]* int(n1)
	R = [0]*int(n2)

	for i in range(0,n1):
		L[i] = arr[l+i]

	for j in range(0,n2):
		R[j] = arr[m+1+j]

	i=0
	j=0
	k =l

	while i<n1 and j<n2:
		if L[i] <= R[j]:
			arr[k] = L[i]
			i+=1
		else:
			arr[k] = R[j]
			j+=1
		k+=1

	while i<n1:
		arr[k] = L[i]
		i +=1
		k+=1
	while j<n2:
		arr[k] = R[j]
		j +=1
		k +=1

def mergeSort(arr,l,r):
	if l<r:

		m = int((l+(r-1))/2)

		mergeSort(arr,l,m)
		mergeSort(arr,m+1,r)
		merge(arr,l,m,r)

a = [int(x) for x in input().split()]
n = len(a)

mergeSort(a,0,n-1)

print("Sorted array is \n")
for i in range(n):
	print("%d"%a[i])
