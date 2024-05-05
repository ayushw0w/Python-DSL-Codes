#include <iostream>
#define max 50
using namespace std;
class Queue
{
int job_id[max];
int front,rear;
public:
Queue()
{
front = rear = -1;
}
int isQfull();
int isQempty();
void enQueue(int);
int deQueue();
void display();
};
int Queue :: isQfull()
{
if(rear == max-1)
return 1;
else
return 0;
}
int Queue :: isQempty()
{
if(front == -1 || front > rear)
return 1;
else
return 0;
}
void Queue :: enQueue(int val)
{
if(!isQfull())
{
if(!isQempty())
{
rear++;
job_id[rear] = val;
}
else
{
front++;
rear++;
job_id[rear] = val;
}
}
else
{
cout << "Queue is full!!" << endl;
}
}
int Queue :: deQueue()
{
int val;
if(!isQempty())
{
val = job_id[front];
front++;
}
else
{
cout << "Queue is empty!!" << endl;
}
return val;
}
void Queue :: display()
{
if(!isQempty())
{
cout << "Queue is : ";
for(int i = front; i<=rear; i++)
{
cout << job_id[i] << " ";
}
cout << endl;
}
}
int main()
{
Queue obj;
int ch;
do
{
cout << "----------- *MENU* ------------" << endl;
cout << "To Insert Job Enter : 1" << endl;
cout << "To Delete Job Enter : 2" << endl;
cout << "To Display Job Enter : 3" << endl;
cout << "To Exit Enter : 4" << endl;
cout << "Enter Your Choice : ";
cin >> ch;
cout << endl;
switch(ch)
{
case 1:
{
int item;
cout << "Enter Job_Id : ";
cin >> item;
obj.enQueue(item);
break;
}
case 2:
{
int item = obj.deQueue();
cout << "Deleted Job_Id : " << item << endl;
break;
}
case 3:
{
obj.display();
break;
}
case 4:
{
cout << "****** Exiting ******" << endl;
break;
}
default:
{
cout << "Invalid Choice" << endl;
}
}
}while(ch != 4)
return 0;
}
