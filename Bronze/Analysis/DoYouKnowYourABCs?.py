nums = list(map(int, input().split(' ')))
a_b_c = max(nums)
sort = sorted(nums)
a = sort[0]
b = sort[1]
c = sort[-1] - b - a
arr = [str(a), str(b), str(c)]
print(" ".join(arr))
