def quick_sort(arr, low, high):
    if high - low <= 0:  # or if low < high: code else: pass
        pass
    else:
        partition_point = partition(arr, low, high)
        quick_sort(arr, low, partition_point - 1)
        quick_sort(arr, partition_point + 1, high)


def partition(arr, low, high):
    low_pointer = low
    high_pointer = high - 1
    pivot = high
    while True:
        while arr[low_pointer] < arr[pivot]:
            low_pointer += 1
        while arr[high_pointer] > arr[pivot] and high_pointer > 0:
            high_pointer -= 1
        if low_pointer >= high_pointer:
            break
        else:
            # swap(arr[low_pointer], arr[high_pointer])
            arr[low_pointer], arr[high_pointer] = arr[high_pointer], arr[low_pointer]
    # swap(arr[low_pointer], arr[pivot])
    arr[low_pointer], arr[pivot] = arr[pivot], arr[low_pointer]
    return low_pointer


array_input = list(map(int, input().strip().split()))
quick_sort(array_input, 0, len(array_input) - 1)
print("Sorted: ", array_input)