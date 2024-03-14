def main():
    n = int(input("Enter the number of elements of the array: "))
    array = []
    
    print("Enter the elements of the array:")
    for _ in range(n):
        array.append(int(input()))
    
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if array[j] < array[min_index]:
                min_index = j
        if min_index != i:
            array[i], array[min_index] = array[min_index], array[i]
    
    print("The sorted array:")
    for num in array:
        print(num, end="\t")
    print()

if __name__ == "__main__":
    main()
