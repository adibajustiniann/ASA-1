#input
pattern = input()
n = int(input())

#banyak karakter a
def count_a_in_pattern(pattern):
    return pattern.count('a')
def count_a_in_text(pattern, n):
    pattern_length = len(pattern)
    a_count = count_a_in_pattern(pattern)
    repetitions = n // pattern_length
    remaining_chars = n % pattern_length
    a_count *= repetitions
    a_count += count_a_in_pattern(pattern[:remaining_chars])
    return a_count

result = count_a_in_text(pattern, n)
print(result)