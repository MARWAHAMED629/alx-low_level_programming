#!/usr/bin/python3

largest_palindrome = 0

for x in range(100, 1000):
    for z in range(100, 1000):
        product = x * z
        if str(product) == str(product)[::-1] and product > largest_palindrome:
            largest_palindrome = product
# Save  result in  file
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))
