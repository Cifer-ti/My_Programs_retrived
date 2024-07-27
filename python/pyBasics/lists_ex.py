numbers = [3, 6, 2, 8, 4, 10]

max_ = numbers[0]

for number in numbers:
    if number > max_:
        max_ = number

print(f"Max number in {numbers} is {max_}")