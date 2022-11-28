def insertion_sort(a):
    """
    Description:
        insertion sort is a simple and intuitive sorting algorithm that
        iterates over the array items from the beginning, focus on take the current
        item, and try to go back with it with swapping to place this item in
        its correct place
        (more formally, we swap with the previos elements as long as they are greater than the current)

    Space Complexity:
        O(1) as it do in-place sorting

    Time Complexity:
        O(n*n), the worst case happens when the array is reversed
    """
    for i in range(len(a)):
        j = i
        ref = a[j]
        while j > 0 and a[j - 1] > ref:
            a[j] = a[j - 1]
            j -= 1
        a[j] = ref


if __name__ == "__main__":
    test_list = [3, 2, 4, 6, 5, 1]
    print(test_list)
    insertion_sort(test_list)
    print(test_list)
