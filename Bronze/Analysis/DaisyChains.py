len_of_inp = 2
inputs = []
while len(inputs) < 2:
    inputs.append(input())

n = int(inputs[0])
petals = list(map(int, inputs[1].split(' ')))
avg_flowers = n
start = 0
end = start + 1
while start < len(petals)-1:
    end += 1
    splitted_arr = petals[start:end]
    avg = sum(splitted_arr) / len(splitted_arr)
    if avg in splitted_arr:
        avg_flowers += 1
    if end == n:
        start += 1
        end = start + 1

print(avg_flowers)
