def sumFunc(arr):
    count1 = 0
    count2 = 0
    s1 = set()
    s2 = set()

    for _ in range(len(arr)):
        if (arr[0]):
            s1.add(arr[0])
        if (arr[3]):
            s1.add(arr[3])
        if (arr[4]):
            s1.add(arr[4])

    for _ in range(len(arr)):
        if (arr[1]):
            s2.add(arr[1])
        if (arr[2]):
            s2.add(arr[2])
        if (arr[5]):
            s2.add(arr[5])

    for _ in s1:
        count1 = count1 + 1

    for _ in s2:
        count2 = count2 + 1

    return (count1 + count2)

if __name__ == '__main__':
    lis =  [1,2,1,2,2,3]

    print("Sum is : " , sumFunc(lis))