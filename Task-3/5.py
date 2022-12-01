# this problem can't be solved in O(n) with two pointers technique


n, m = [int(x) for x in input().split()]
stations = sorted([int(x) for x in input().split()])  # with length m


def bisect_left(arr, value):
    """
    bisect left binary searching which will bisect the array
    into two parts, where the left part have items < value
    and the right part have items >= value
    """
    s = -1
    e = len(arr)
    while e - s > 1:
        mid = (s + e) // 2
        if arr[mid] >= value:
            e = mid
        else:
            s = mid
    return e


inf = 1e10
ans = 0
for i in range(n):
    j = bisect_left(stations, i)
    previous_station = stations[j] - i if j < m else inf
    next_station = i - stations[j - 1] if j > 0 else inf
    nearest_station = min(previous_station, next_station)
    ans = max(ans, nearest_station)

print(ans)
