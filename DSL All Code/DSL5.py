a=[]
n = int(input("Enter no of elements : "))
print("Enter elements : ")
for i in range(0,n):
    elements=int(input())
    a.append(elements)

def selection_sort(list):
    for i in range(0,n-1):
        for j in range(i+1,n):
            if(list[i]>list[j]):
                list[i],list[j]=list[j],list[i]
    return list

def ternary_search(list , n,key):
    s = 0;
    e = n-1;
    while(s<=e):
        mid1=int(s+((e-s)/3))
        mid2=int(e-((e-s)/3))
        if(list[mid1]==key):
            return mid1
        elif(list[mid2]==key):
            return mid2
        elif(list[mid1]>key):
            e = mid1-1
        elif(list[mid2]<key):
            s = mid2+1
        else:
            s = mid1+1
            e = mid2-1
    return -1

while(True):
    print("*****************----MENU----******************")
    print("Enter 1 for sorting the list.")
    print("Enter 2 for searching in the list.")
    print("Enter 3 for Exiting.")
    ch = int(input("Enter your choice: "))
    if(ch==1):
        print("Sorted list is: ",selection_sort(a))
    elif(ch==2):
        k = int(input("enter the no to be searched: "))
        ans2=ternary_search(a,n,k)
        if(ans2==-1):
            print("Element not found")
        else:
            print("Element found at position: ",ans2)
    elif(ch==3):
        print("Exiting-----")
        break
    else:
        print("Check your input.")