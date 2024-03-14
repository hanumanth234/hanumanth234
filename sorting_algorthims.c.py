def main():
    n = int(input("Enter the size of the array: "))
    array = []

    print("Enter the array elements: ")
    for i in range(n):
        array.append(int(input()))

    for i in range(n - 1):
        flag = 0
        for j in range(n - 1 - i):
            if array[j] > array[j + 1]:
                array[j], array[j + 1] = array[j + 1], array[j]
                flag = 1
        if flag == 0:
            break

    print("Sorted array is:")
    for num in array:
        print(num, end=" ")

if __name__ == "__main__":
    main()
