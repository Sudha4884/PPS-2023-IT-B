# Program to enter the marks of 5 subjects of a student. Compute the total and average mark of the student and display it.
print("Enter Marks Obtained in 5 Subjects: ")
markOne = int(input())
markTwo = int(input())
markThree = int(input())
markFour = int(input())
markFive = int(input())
total = markOne+markTwo+markThree+markFour+markFive
print(total,"is the total of all subjects")
avg = total/5
print("total avgerage is: ",avg)