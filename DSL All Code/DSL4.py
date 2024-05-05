num = int(input("Enter number of students : "))
a = [] # array 'a' assigned
for i in range(0,num):
    per = float(input("Enter Percentage Of Student %s : "%(i+1)))
    a.append(per)
print("Unsorted Array : ",a)

def Selection_Sort(a):
    for j in range(0,num-1):
        for k in range(j+1,num):
            if(a[j] > a[k]):
                a[j] , a[k] = a[k] , a[j]
    print("Sorted Array : ",a)
    print("Do you want the list of top 5 students?")
    print('''
    If Yes : Enter 1
    If No : Enter 0
    ''')
    ch1 = int(input("Choice : "))
    if (ch1 == 1):
        m = num-1
        for l in range(1,6):
            print(a[m])
            m = m-1

def Bubble_Sort(a):
    for n in range(1,num):
        for o in range(0,num-n):
            if(a[o] > a[o+1]):
                a[o] , a[o+1] = a[o+1] , a[o]
    print("Bubbled Array :",a)
    print("Do you want the list of top 5 students?")
    print('''
    If Yes : Enter 1
    If No : Enter 0
    ''')
    ch2 = int(input("Choice : "))
    if (ch2 == 1):
        x = -1
        for y in range(1,6):
            print(a[x])
            x = x-1

while(1<2):
    print("*************************** MENU *********************************")
    print('''
    For Selection Sorting : Enter 1
    For Bubble Sorting : Enter 2
    Exit : 3
    ''')
    Ch = int(input("Choice : "))
    if (Ch == 1):
        Selection_Sort(a)
    elif (Ch == 2):
        Bubble_Sort(a)
    else:
        print("Exiting")
        break