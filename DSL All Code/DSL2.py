str=input("Enter the string:")
list1=str.split()
#.................................................................
def length():
    max_len=0
    for word in list1 :
        if (len (word)>max_len):
            max_len=len(word)
            temp = word
    print("longest word is:",temp)
    print("length is: ",max_len)
#.................................................................
def occurance():
    count=0
    ch=input("Enter character:")
    for i in range(len(str)):
        if (ch==str[i]):
            count=count+1
    print("occurance=",count)
#.................................................................
def palindrome():
    if(str==str[::-1]):
        print("string is palindrome")
    else:
        print("string is not palindrome")
#.................................................................
def frequency():
    counts=dict()
    for word in list1:
        if word in counts :
            counts[word]=counts[word]+1
        else:
            counts[word]=1
    print("frequency:", counts)
#.................................................................
def substring():
    str1=input("Enter your substring")
    flag=0
    for i in range(len(str)-len(str1)+1):
        if (str[i:i+len(str1)]==str1):
            print("substring occurs at index",i)
            flag=1
            break
    if(flag!=1):
        print("Not found")
#.................................................................
a=True
while(a==True):
    print("***********MENU***********")
    print("Enter 1 for word with longest length")
    print("Enter 2 for finding occurence of particular character")
    print("Enter 3 for checking palindrome")
    print("Enter 4 for Index of 1st apperance of substring")
    print("Enter 5 for frequency of each word")
    print("Enter 6 for Exit")
    choice=int(input("Enter your choice: "))
    if(choice==1):
        length()
    elif(choice==2):
        occurance()
    elif(choice == 3):
        palindrome()
    elif(choice == 4):
        substring()
    elif(choice == 5):
        frequency()
    elif(choice==6):
        print("Exiting---")
        a=False
