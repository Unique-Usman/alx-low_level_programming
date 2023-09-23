def merge(leftArray: list, rightArray: list) -> list:
    i = 0
    j = 0

    res = []
    while i < len(leftArray) and j < len(rightArray):
        if (leftArray[i] < rightArray[j]):
            res.append(leftArray[i])
            i += 1
        else:
            res.append(rightArray[j])
            j += 1

    while (j < len(rightArray)):
        res.append(rightArray[j])
        j += 1

    while (i < len(leftArray)):
        res.append(leftArray[i])
        i += 1

    return res

def mergeSort(arr: list) -> list:

    if len(arr) == 1:
        return arr
    leftArray = mergeSort(arr[0:int(len(arr) / 2)])
    rightArray = mergeSort(arr[int(len(arr)/ 2):])
    return merge(leftArray, rightArray)


print(mergeSort([9, 5 ,6, 4, 10, 32, 76, 70, 30, 30, 59, 70, 52, 33, 44, 65]))
