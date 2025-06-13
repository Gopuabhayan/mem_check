print("1.Addition\n2.subtrction\n3.multiplication\n4.division\n")
check=int(input("enter the number\n"))
n1=int(input("enter two numbers\n"))
n2=int(input(""))
if(check==1):
    result=n1+n2
    print("sum",result)
elif(float)(check==2):
    result=n1-n2
    print("sum",result)
elif(check==3):
    result=n1*n2
    print("sum",result)
elif(check==4):
    result=n1/n2
    print("sum",result)
else:
    print("enter your number\n")                