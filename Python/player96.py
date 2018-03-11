n=int(input("Enter the number : "))
l=[]
while(n!=0):
    temp=int(n%10)
    l.append(temp)
    n=n//10
print('The sum of first and last digit is : ',l[0]+l[len(l)-1])
