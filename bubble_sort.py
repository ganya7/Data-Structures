a = []
n = int(input("Enter number of elements: "))
for x in range(0,n):
  z = int(input())
  a.append(z)
for i in range(0,n):
  for j in range(0,n-i-1):
    if a[j] > a[j+1]:
      temp = a[j]
      a[j] = a[j+1]
      a[j+1] = temp
print("After sorting: ",end="")  
for i in range(0,n):
  print(a[i],end=" ")