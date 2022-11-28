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

    Stability:
        insertion sort is a stable sorting algorithm, as it keeps the relative order between equivalent items
        them same as the input unsorted array
        for example, if we have:
        {'name':'Muhamamd', age: 20}, {'name': 'samir', age:60}, {'name': 'Shaimaa', age: 20}
        after sorting based on age we will have:
        {'name':'Muhamamd', age: 20}, {'name': 'Shaimaa', age: 20}, {'name': 'Samir', age:60}

        -> it is guarenteed that people with the same age will preserve the same relative order as the input
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
