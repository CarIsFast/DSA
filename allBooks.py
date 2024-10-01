
    
    #Function to find minimum number of pages.
def solve(arr ,n,m):
    def count(arr,pages):
        stu , cnt = 1 ,0
        for i in arr:
            a = i + cnt
            if a <= pages:
                cnt += i
            else:
                cnt = i 
                stu += 1
        return stu         
    
    
    #code here
    if m > len(arr) : return -1 
    low , high , res = max(arr) , sum(arr) , -1
    # print(low, high)
    while low <= high :
        mid = low + (high - low) //2
        students = count(arr, mid)
        if students <= m:
            res = mid
            high = mid - 1 
        else:
            low = mid +1 
    return res

l = [10,20,30,40]

print(solve(l,len(l),2))