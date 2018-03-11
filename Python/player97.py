l=int(input("Enter the start range : "))
r=int(input("Enter the end range : "))
sum=0
for i in range(l,r+1):
    if(i%2==1):
        sum=sum+i
print(sum)
    
      
