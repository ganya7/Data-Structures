#memoization: top-down approach dp
def fibonacci(n,lookup):
	if n<= 1:
		lookup[n] = n
	if lookup[n] is None:#if term not calculated then calculate
		lookup[n] = fibonacci(n-1,lookup) + fibonacci(n-2,lookup);
	return lookup[n]

def main():
	n = 6
	lookup = [None]*10  #initialize lookup of size 10 with value None = null, None is null is py3
	print("Fibonacci of n is ",end=" ")
	print(fibonacci(n,lookup))

if __name__ == '__main__':  #this ensures the program or source file is executed when the file is executed and not imported
	main()
