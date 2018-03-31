s1=input("Enter your name : ").lower().replace(' ','')
s2=input("\nEnter your partner name : ").lower().replace(' ','')
t=[]
t1=[]
t2=[]
n=0
m=6
j=0
a=['f','l','a','m','e','s']
b=[]
t=[0]*255
t1=[0]*255
t2=[0]*255
for i in s1:
    t[ord(i)]+=1
for i in s2:
    t1[ord(i)]+=1
for i in range(0,255):
    if(t[i]==t1[i]):
        t[i]=0
        t1[i]=0
    elif(t[i]>t1[i]):
        t2[i]=t[i]-t1[i]
    elif(t[i]<t1[i]):
        t2[i]=t1[i]-t[i]
for i in range(0,255):
    if(t2[i]!=0):
        n+=t2[i]
if(n==0):
    print("\nYou have Entered the same Names : %s !!!"%s1)
else:
    for k in range(0,5):
        s=n%m
        b=a[s:len(a)]+a[0:s-1]
        a=b
        del a[m-1:len(a)]
        m=m-1
        j=0
if(a[0]=='f'):
    print("\n%s and %s are FRIENDS!!!"%(s1.capitalize(),s2.capitalize()))   
elif(a[0]=='l'):
    print("\n%s and %s are LOVERS!!!"%(s1.capitalize(),s2.capitalize()))
elif(a[0]=='a'):
    print("\n%s and %s are AFFECTIONATE with each others!!!"%(s1.capitalize(),s2.capitalize()))
elif(a[0]=='m'):
    print("\n%s and %s are MARRIED Couples!!!"%(s1.capitalize(),s2.capitalize()))
elif(a[0]=='e'):
    print("\n%s and %s are ENEMIES!!!"%(s1.capitalize(),s2.capitalize()))
elif(a[0]=='s'):
    print("\n%s and %s are SIBLINGS!!!"%(s1.capitalize(),s2.capitalize()))
