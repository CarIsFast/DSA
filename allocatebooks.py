def get_number_groups(l, threshold):
    stu = 1
    cnt = 0
    for i in range(len(l)):
        if cnt + l[i] <= threshold:
            cnt += l[i]
        else:
            stu += 1
            cnt = l[i]
    return stu


def solve(arr, books, students):
    if students > books:
        return -1

    # range of min no of pages per group -> min(arr) to max(arr-1)

    l = min(arr) # can also be 0
    h = max(arr)-1

    while l <= h:
        mid = (l + h) // 2
        ans = get_number_groups(arr, mid)
        # print('for mid = ' + str(mid) + ', no. of groups = ' + str(ans) + ", expected groups = " + str(students))
        if ans > students:
            l = mid + 1
        else:
            h = mid - 1
    return l


l = [10 ,20,30,40]

print(solve(l,len(l),2))