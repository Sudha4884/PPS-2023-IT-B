print("Enter 10 numbers")
num_list = []
for i in range(10):
    num_list.append(int(input()))
order = input("Type asc for ascending or descending for descending or none")
if order == "asc":
    num_list.sort()
    print(num_list)
elif order == "desc":
    num_list.sort()
    print(num_list)
else:
    print(num_list)