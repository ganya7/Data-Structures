a = []
n = int(input("Enter number of elements: "))
a = list(map(int,input().strip().split()
for i in range(0,n):
  for j in range(0,n-i-1):
    if a[j] > a[j+1]:
      temp = a[j]
      a[j] = a[j+1]
      a[j+1] = temp
print("After sorting: ",end="")
print(a)
