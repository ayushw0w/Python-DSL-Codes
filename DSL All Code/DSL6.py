a = []
n = int(input("Enter Total Number Of Students : "))
for i in range (0,n):
    p = float(input("Enter Percentage Of Student %s : "%(i+1)))
    a.append(p)

print("\n")
print("Unsorted Array : ",a)
print("\n")

start = 0
end = n-1
temp = 0

def partition(a, start, end):
    pivot = a[start]
    i = start + 1
    j = end
    while True:
        while(i <= j and a[i] <= pivot):
            i = i + 1
        while(i <= j and a[j] >= pivot):
            j = j - 1
        if(i <= j):
            a[i], a[j] = a[j], a[i]
        else:
            break

    a[start], a[j] = a[j], a[start]
    return j

def Quick_sort(a, start, end):
    while start < end:
        P = partition(a, start, end)
        Quick_sort(a, start, P - 1)
        Quick_sort(a, P + 1, end)
        return a

def Top5(a):
    m = -1
    for j in range(1,6):
        print(a[m])
        m = m - 1

b=True
while(b==True):
    print("\n\t************************* MENU *************************")
    print("\tFor Quick Sort : Enter 1 ")
    print("\tFor Top 5 Students : Enter 2 ")
    print("\tExit : Enter 3")
    Choice = int(input("\tEnter your Choice: "))
    print("\n")
    if(Choice == 1):
        print(Quick_sort(a, start, end))
    elif(Choice == 2):
        print(Top5(a))
    elif(Choice == 3):
        print("\n\t)-X Exiting X-(\n")
        b=False