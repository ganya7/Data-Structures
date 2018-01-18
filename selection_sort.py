def selection_sort(arr):
    for x in range(len(arr) - 1):
        minimum = x
        for j in range(x + 1, len(arr)):
            if arr[j] < arr[minimum]:
                minimum = j
        temp = arr[minimum]
        arr[minimum] = arr[x]
        arr[x] = temp
    print(arr)

def main():
    n = int(input("Enter number of elements").strip())
    a = [int(arr_temp) for arr_temp in input().strip().split(' ')]  #enter numbers in a single line and then create array of integer
    selection_sort(a)

if __name__ == '__main__':
    main()