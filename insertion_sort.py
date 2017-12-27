def insertion_sort(arr):
	for i in range(1,len(arr)):
		key = arr[i]
		j = i-1
		while j >= 0 and key < arr[j]:
			arr[j+1] = arr[j]
			j -= 1
		arr[j+1] = key
	print(arr)

def main():
	arr = [74,54,11,2,4]
	insertion_sort(arr)


if __name__ == '__main__':
	main()