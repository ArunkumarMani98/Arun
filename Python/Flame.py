s1,s2=input("Enter your name : ").lower().replace(" ",""),input("Enter the other name : ").lower().replace(" ","")
l,m1,m,a,b=list(s1),list(s2),6,['f','l','a','m','e','s'],[]
for x in range(0,len(l)):
    for y in range(0,len(m1)):
        if(l[x]==m1[y]):
            l[x],m1[y]="",""
n=(len(l)-l.count(""))+(len(m1)-m1.count(""))
if(n==0):
    print("\nYou have Entered the same Names : %s = %s!!!"%(s1.capitalize(),s2.capitalize()))
else:
    for k in range(0,5):
        s=int(n)%m
        b=a[s:len(a)]+a[0:s-1]
        a=b
        del a[m-1:len(a)]
        m=m-1
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
