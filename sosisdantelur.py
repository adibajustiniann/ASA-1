def generate_strings(k):
    results = []
    def backtrack(curr):
        if len(curr) == k:
            results.append(curr)
            return
        backtrack(curr + '0')
        if curr == '' or curr[-1] == '0':
            backtrack(curr + '1')
    backtrack('')
    return results

def filter_strings(strings):
    return [s for s in strings if '11' not in s]

k = int(input())
strings = generate_strings(k)
filtered_strings = filter_strings(strings)

for s in filtered_strings:
    print(s)