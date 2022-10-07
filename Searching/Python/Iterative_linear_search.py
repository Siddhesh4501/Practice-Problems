# Program for Iterative Binary Search Function

# It returns index of x if present it present in arr, else returns -1
def search(arr, x):

    for i in range(len(arr)):

        if arr[i] == x:
            return i

    return -1


# Data
arr = [5, 8, 6, 7, 2]
x = 6

# Function call
result = search(arr, x)

if result != -1:
    print("Element is present at index", str(result))
else:
    print("Element is not present in array")
