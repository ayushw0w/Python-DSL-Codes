#include<iostream>
using namespace std;
#define max 5
class deque
{
int list[max];
int front, rear;
public:
deque()
{
front=rear=-1;
list[0]='\0';
}
void addrear(int k)
{
if(isFull())
{
cout<<"Deque is Full!";
return;
} if(isEmpty())
front++;
list[++rear]=k;
}
void addfront(int k)
{
if(isFull())
{
cout<<"Deque is Full!";
return;
} else if(isEmpty())
{
front=1;
rear=0;
} if(front==0)
{
for(int i=rear;i>=0;i--)
list[i+1]=list[i];
rear++;
front++;
}
list[--front]=k;
}
void display()
{
if(isEmpty())
{
cout<<"***Dequeue is Empty***\n";
return;
}
for(int i=front;i<=rear;i++)
cout<<list[i]<<" ";
cout<<"\n";
}
bool isEmpty()
{
if(rear==-1)
return 1;
return 0;
}
bool isFull()
{
int i,j;
if((rear==(max-1))&&front==0)
return 1;
for(i=front,j=rear-1;i>0;i++,j--)
{
list[j+1]=list[j];
}
return 0;
} int delrear()
{
int k;
if(isEmpty())
{
cout<<"Deque already empty\n";
return -1;
}
k=list[rear--];
if(front>rear)
front=rear=-1;
return k;
} int delfr()
{
int k;
if(isEmpty())
{
cout<<"Deque already empty\n";
return -1;
}
k=list[front++];
if(front>rear)
front=rear=-1;
return k;
}
};
int main()
{
deque D;
int g=1,m;
while(g!=0)
{
cout<<"Enter option to perform";
cout<<"\n1.Add to start \n2.Add to last \n3.Display queue\n4.Delete first \n5.Deletelast\n6.exit";
cout << "\nEnter your choice : ";
cin>>g;
switch(g)
{ case 1:
cout<<"Enter number to insert";
cin>>m;
D.addfront(m);
break;
case 2:
cout<<"Enter number to insert";
cin>>m;
D.addrear(m);
break;
case 3:
D.display();
break;
default:
cout<<"Enter valid option";
break;
case 4:
m=D.delfr();
if(m>=0)
cout<<"Number returned is: "<<m<<endl;
break;
case 5:
m=D.delrear();
if(m>=0)
cout<<"Number returned is: "<<m<<endl;
break;
case 6:
cout<<"exiting....";
exit(0);
 break;
}
}
return 0;
}
