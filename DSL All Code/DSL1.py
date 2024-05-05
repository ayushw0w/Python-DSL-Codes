a=[]
n=int(input("Enter total number of students : "))
print("Enter -1 for absent students")

for i in range(0,n):
    marks = int(input("Enter marks of student %s : "%(i+1)))
    a.append(marks)

def AVG(a):
    sum=0
    absent = 0
    for j in a:
        if(j!=-1):
            sum+=j
        else:
            absent+=1

    if(absent!=0):
        avg = float(sum / n)
        print("Average marks of students : ", avg)

    else:
        avg=float(sum/(n-absent))
        print("Average marks of students : ",avg)

def MAX(a):
    Max=a[0]
    for k in a:
        if(k>Max):
            Max=k
    print("Highest Marks : ",Max)

def MIN(a):
    for m in a:
        if(m!=-1):
            Min=m
            break
    for l in a:
        if(l!=-1 and l<Min):
            Min=l
    print("Lowest Marks : ",Min)

def Abs(a):
    absent = 0
    for k in a:
        if(k==-1):
            absent += 1
    print("Absent Students : ",absent)

def Freq(a):
    Max=a[0]
    for j in a:
        if(j>Max):
            Max=j
    large = Max
    count = 0
    for i in a:
        if(i==large):
            count+=1
    print("Highest marks : ",Max)
    print("Frequency of highest marks : ",count)

b=True
while(b==True):
    print("--------- MENU ---------")
    print("1 : For Average marks")
    print("2 : For Highest marks")
    print("3 : For Lowest marks")
    print("4 : For Absent Studens")
    print("5 : For Frequency of Highest Marks")
    print("6 : To Exit")
    ch=int(input())
    print("Enter your choice : ",ch)
    if(ch==1):
        AVG(a)
    elif(ch==2):
        MAX(a)
    elif(ch==3):
        MIN(a)
    elif(ch==4):
        Abs(a)
    elif (ch == 5):
        Freq(a)
    elif (ch == 6):
        print("Exiting")
        b=False
    else:
        print("ERROR")

