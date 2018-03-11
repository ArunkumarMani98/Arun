n=input("Enter the number : ")
k=int(input("Enter the K value : "))
m=[]
l=[]
c=0
for x in n:
    l.append(int(x))
for i in range(0,k+1):
    m.append(i)
for x in m:
    if x not in l:
        c=1
if(c==0):
    print("YES")
else:
    print("NO")
