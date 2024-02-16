#Fibonacci series
num = int(input())
t1,t2 = -1,1
while t2 <= num:
    term = t1+t2
    if term > num:
        break 
    t1,t2 = t2,term
    print(term,end = "")
