marks = int(input("Enter your marks: "))
if (90 < marks) & (marks <= 100):
    print("Grade O")
elif (75 < marks) & (marks <= 90):
    print("Grade A")
elif (60 < marks) & (marks <= 75):
    print("Grade B")
elif (45 < marks) & (marks <= 60):
    print("Grade C")
else:
    print("Grade D")