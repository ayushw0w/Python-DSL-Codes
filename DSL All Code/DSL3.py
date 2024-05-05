r=int(input("Enter row for matrix: "))
c=int(input("Enter col for matrix: "))

A_mat=[[0 for j in range(c)] for i in range(r)]

print("Enter the element of matrix A : ")
for i in range(r):
    for j in range(c):
        A_mat[i][j]=int(input())
print("Display Matrix A")
for n in A_mat:
    print(n)

#......................................................................................
B_mat=[[0 for j in range(c)] for i in range(r)]

print("Enter the element of B : ")
for i in range(r):
    for j in range(c):
        B_mat[i][j]=int(input())
print("Display Matrix B")

for n in B_mat:
    print(n)
#......................................................................................
def add():
    C_mat=[[0 for j in range(c)] for i in range(r)]
    for i in range(r):
        for j in range(c):
            C_mat[i][j]= A_mat[i][j] + B_mat[i][j]
    print("Addition of A and B")
    for n in C_mat:
        print(n)
#......................................................................................
def sub1():
    D_mat=[[0 for j in range(c)] for i in range(r)]
    for i in range(r):
        for j in range(c):
            D_mat[i][j]= A_mat[i][j] - B_mat[i][j]
    print("Subtract B from A")
    for n in D_mat:
        print(n)
#.......................................................................................
def sub2():
    E_mat=[[0 for j in range(c)] for i in range(r)]
    for i in range(r):
        for j in range(c):
            E_mat[i][j]= B_mat[i][j] - A_mat[i][j]
    print("Subtract A from B")
    for n in E_mat:
        print(n)
#.......................................................................................
def mult():
    F_mat=[[0 for j in range(c)] for i in range(r)]
    for i in range(len(A_mat)):
        for j in range(len(B_mat[0])):
            for k in range(len(B_mat)):
                F_mat[i][j] += A_mat[i][k] * B_mat[k][j]
    print("The Multiplication of Matrix A and B Is ::>")
    for n in F_mat:
        print(n)
#.......................................................................................
def transA():
    K_mat=[[0 for j in range(c)] for i in range(r)]
    for i in range(r):
        for j in range(c):
            K_mat[i][j] = A_mat[j][i]
    for n in K_mat:
        print(n)
#.......................................................................................
def transB():
    P_mat=[[0 for j in range(c)] for i in range(r)]
    for i in range(r):
        for j in range(c):
            P_mat[i][j] = B_mat[j][i]
    for n in P_mat:
        print(n)
#.......................................................................................
a=True
while(a==True):
    print("***********MENU***********")
    print("Enter 1 for Addition of matrix")
    print("Enter 2 for Subtract B from A")
    print("Enter 3 for Subtract A from B")
    print("Enter 4 for The Multiplication of Matrix A and B")
    print("Enter 5 Transpose of Matrix A")
    print("Enter 6 Transpose of Matrix B")
    print("Enter 7 for Exit")
    choice=int(input("Enter your choice: "))
    if(choice==1):
        print(add())
    elif(choice==2):
        print(sub1())
    elif(choice == 3):
        print(sub2())
    elif(choice == 4):
        print(mult())
    elif(choice == 5):
        print(transA())
    elif(choice == 6):
        print(transB())
    elif(choice== 7):
        print("Exiting---")
        a=False
