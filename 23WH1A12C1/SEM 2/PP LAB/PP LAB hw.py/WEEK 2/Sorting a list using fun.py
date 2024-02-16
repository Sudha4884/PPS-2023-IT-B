#Create a function in Python that accepts two parameters. The first will be a list of numbers.
 #The second parameter will be a string that can be one of the
 # following values: asc, desc, and none.
#If the second parameter is “asc,” then the function should return a list with the numbers in ascending order. If it’s “desc,” then the list should be in descending order, and if it’s “none,” it should return the original list unaltered.
def sort_numbers(input_list, order):
    if order == "asc":
        return sorted(input_list)
    elif order == "desc":
        return sorted(input_list, reverse=True)
    elif order == "none":
        return input_list
    else:
        raise ValueError("Invalid order parameter. Use 'asc', 'desc', or 'none'.")
numbers = [3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5]
ascending_result = sort_numbers(numbers, "asc")
descending_result = sort_numbers(numbers, "desc")
unaltered_result = sort_numbers(numbers, "none")

print("Original list:", numbers)
print("Ascending order:", ascending_result)
print("Descending order:", descending_result)
print("Unaltered list:", unaltered_result)