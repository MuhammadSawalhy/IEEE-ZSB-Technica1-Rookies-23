numbers = [int(x) for x in input().split()]


def heapify(index: int, array: list[int]):
    # zero-indexed array
    left = index * 2 + 1
    right = index * 2 + 2

    index_max = index

    if left < len(array) and array[left] > array[index_max]:
        index_max = left

    if right < len(array) and array[right] > array[index_max]:
        index_max = right

    if index_max != index:
        array[index], array[index_max] = array[index_max], array[index]
        heapify(index_max, array)


for i in range((len(numbers) - 1) // 2, -1, -1):
    heapify(i, numbers)

print(" ".join([str(x) for x in numbers]))
