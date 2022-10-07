# Program for Iterative Binary Search Function

# It returns index of x if present it present in arr, else returns -1
def search(arr, curr_index, key):
	if curr_index == -1:
		return -1
	if arr[curr_index] == key:
		return curr_index
	return search(arr, curr_index-1, key)

# Data
arr = [5, 8, 6, 7, 2]
x = 6

# Function call
result = search(arr, len(arr)-1,x)

if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array")
