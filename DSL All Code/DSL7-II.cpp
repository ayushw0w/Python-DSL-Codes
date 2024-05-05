#include<iostream>
#include<string>
#define MAX 50
using namespace std;
struct node{
long int PRN;
char name[50];
struct node *next;
};
class club
{
node *head, *head1, *head2, *temp;
int i,count, prn_no;
char a[20];
public:
club()
{
head == NULL;
}
//FUNCTION PROTOTYPES
node *create();
void reverse();
void rev(node *t);
void insert_PRE();
void insert_SEC();
void insert_MEM();
void dlt_PRE();
void dlt_SEC();
void dlt_MEM();
void display_MEM();
void display_club();
node *concatenate_list();
};
int main()
{
int ch, i, n;
club obj;
do{
cout << "\n\t------- WELCOME TO PINNACLE CLUB!!! -------";
cout << "\n\tWhich Operation do you want to perform!!!";
cout << "\n\t1 : To Insert President";
cout << "\n\t2 : To Insert Member";
cout << "\n\t3 : To Insert Secretary";
cout << "\n\t4 : To Delete President";
cout << "\n\t5 : To Delete Member";
cout << "\n\t6 : To Delete Secretary";
cout << "\n\t7 : To Display Count of Members";
cout << "\n\t8 : To Display Club Information";
cout<<"\n\t9 : To Reverse the Club";
cout << "\n\t10 : To Concatenate Two Lists";
cout << "\n\t11 : To Exit";
cout << "\n\tEnter Your Choice : ";
cin >> ch;
switch(ch)
{
case 1:
 cout << "\n------------------------------------------------------------------";
cout << "\nINSERTING PRESIDENT - ";
obj.insert_PRE();
cout << "\n------------------------------------------------------------------";
break;
case 2:
 cout << "\n------------------------------------------------------------------";
cout << "\nINSERTING MEMBER - ";
 obj.insert_MEM();
cout << "\n------------------------------------------------------------------";
break;
case 3:
cout << "\n------------------------------------------------------------------";
cout << "\nINSERTING SECRETARY - ";
obj.insert_SEC();
cout << "\n------------------------------------------------------------------";
break;
case 4:
cout << "\n------------------------------------------------------------------";
cout << "\nDELETING PRESIDENT -";
obj.dlt_PRE();
cout << "\n------------------------------------------------------------------";
break;
case 5:
cout << "\n------------------------------------------------------------------";
cout << "\nDELETING MEMBERS -";
obj.dlt_MEM();
cout << "\n------------------------------------------------------------------";
break;
case 6:
cout << "\n------------------------------------------------------------------";
cout << "\nDELETING SECRETARY -";
obj.dlt_SEC();
cout << "\n------------------------------------------------------------------";
break;
case 7:
cout << "\n------------------------------------------------------------------";
cout << "\nDISPLAYING COUNT OF MEMBERS -";
obj.display_MEM();
cout << "\n------------------------------------------------------------------";
break;
case 8:
cout << "\n------------------------------------------------------------------";
cout << "\nDISPLAYING CLUB INFORMATION -";
obj.display_club();
cout << "\n------------------------------------------------------------------";
break;
case 9:
cout << "\n------------------------------------------------------------------";
obj.reverse();
cout << "\n------------------------------------------------------------------";
break;
case 10:
cout << "\n------------------------------------------------------------------";
cout << "\nLIST B - ";
obj.concatenate_list();
cout << "\n------------------------------------------------------------------";
break;
case 11:
cout << "\nEXITING!!!!!!!\n";
cout << "\n------------------------------------------------------------------";
exit(0);
default:
cout << "Invalid Choice :-(";
cout << "\n------------------------------------------------------------------";
}
}while(ch != 11);
return 0;
}
node *club :: create()
{
node *p;
p = new(struct node);
cout << "\nEnter PRN Number : ";
cin >> p -> PRN;
cout << "Enter Name : ";
cin >> p -> name;
p -> next = NULL;
return p;
}
void club :: insert_PRE(){
node *p = create();
if(head == NULL)
head = p;
else
{
temp = head;
 head = p;
 head -> next = temp -> next;
}
}
void club :: insert_SEC(){
node *p = create();
if(head == NULL)
head = p;
else
{
temp = head;
while(temp -> next != NULL)
{
temp = temp -> next;
}
temp -> next = p;
}
}
void club :: insert_MEM(){
        int n;
cout << "\nEnter how many Members do you want to add : ";
cin >> n;
for(int i = 0 ; i < n ; i++){
node *p = create();
if(head == NULL)
head = p;
else
{
 temp = head;
while(temp -> next != NULL)
{
temp = temp -> next;
}
temp -> next = p;
}
}
}
void club :: dlt_PRE(){
temp = head;
 head = head -> next;
 delete(temp);
 cout << "\nPresident has been Successfully Terminated.........";
 cout << "\n" << head -> name << " has been appointed as the New President of our Club..... ";
}
void club :: dlt_SEC(){
node *prev;
temp = head;
 while(temp -> next != NULL)
 {
 prev = temp;
 temp = temp -> next;
 }
 prev -> next = NULL;
 delete(temp);
 cout << "\nSecretary has been Successfully Terminated.........";
 cout << "\n" << prev -> name << " has been appointed as the New Secretary of our Club..... ";
}
void club :: dlt_MEM(){
node *prev;
int prn_no;
temp = head;
cout << "\nEnter PRN to delete : ";
cin >> prn_no;
int i = 1;
while(i < prn_no)
{
prev = temp;
temp = temp -> next;
i++;
}
prev -> next = temp -> next;
delete(temp);
cout << "\nMember has been Successfully Terminated.........";
}
void club :: display_MEM(){
temp = head;
count = 1;
while(temp -> next != NULL)
{
temp = temp -> next;
count++;
}
cout << "\nCount of members is : " << count;
}
void club :: display_club(){
if(head == NULL)
 {
cout << "\nList is Empty!!!\n";
}
 else
{
 temp = head;
 cout << "\n------------------------------------------------------------------";
 cout << "\nDISPLAYING CLUB INFORMATION - ";
 cout << "\nPRN Numbers" << " " << "Name Of Students" << endl;
 while(temp != NULL)
 {
cout << temp -> PRN << " " << temp -> name << endl;
 temp = temp -> next;
}
}
}
void club::rev(node *p)//function to reverse the node of pinnacle club
{
if(p -> next != NULL) {
rev(p -> next);
}
if(p == head)
cout<<"\nSecretary: "<<p -> PRN<<" — "<<p -> name<<endl;
else if(p -> next == NULL)
cout<<"\nPresident: "<<p -> PRN<<" — "<<p -> name<<" -> ";
else
cout<<"\nMember: "<<p -> PRN<<" — "<<p -> name<<" -> ";
}
void club::reverse() {
rev(head);
}

node *club :: concatenate_list(){
/* int ch, i, n;
club obj;
do{
cout << "\n\t------- WELCOME TO PINNACLE CLUB!!! -------";
cout << "\n\tWhich Operation do you want to perform!!!";
cout << "\n\t1 : To Insert President";
cout << "\n\t2 : To Insert Member";
cout << "\n\t3 : To Insert Secretary";
cout << "\n\t4 : To Display Club Information";
cout << "\n\t5 : To Concatenate Two Lists";
cout << "\n\tEnter Your Choice : ";
cin >> ch;
switch(ch)
{
case 1:
 cout << "\n------------------------------------------------------------------";
cout << "\nINSERTING PRESIDENT OF DIV B- ";
obj.insert_PRE();
cout << "\n------------------------------------------------------------------";
break;
case 2:
 cout << "\n------------------------------------------------------------------";
cout << "\nINSERTING MEMBER PRESIDENT OF DIV B - ";
cout << "\nEnter how many Members do you want to add : ";
cin >> n;
for(int i = 0 ; i < n ; i++){
 obj.insert_MEM();
}
cout << "\n------------------------------------------------------------------";
break;
case 3:
cout << "\n------------------------------------------------------------------";
cout << "\nINSERTING SECRETARY OF DIV B - ";
obj.insert_MEM();
cout << "\n------------------------------------------------------------------";
break;
case 4:
cout << "\n------------------------------------------------------------------";
cout << "\nDISPLAYING CLUB INFORMATION OF DIV B -";
obj.display_club();
cout << "\n------------------------------------------------------------------";
break;
case 5:
cout << "\n------------------------------------------------------------------";
cout << "\nCONCATENATING TWO LISTS -";
cout << "\n------------------------------------------------------------------";
break;
default:
cout << "Invalid Choice :-(";
cout << "\n------------------------------------------------------------------";
}
}while(ch != 5);*/
club obj;
 int n;
cout << "\n------------------------------------------------------------------";
 cout << "\nINSERTING PRESIDENT OF DIV B- ";
 obj.insert_PRE();
 cout << "\n------------------------------------------------------------------";
cout << "\nINSERTING MEMBER PRESIDENT OF DIV B - ";
 obj.insert_MEM();
 cout << "\n------------------------------------------------------------------";
 cout << "\nINSERTING SECRETARY OF DIV B - ";
 obj.insert_SEC();
 cout << "\n------------------------------------------------------------------";
 if(head1 == NULL)
 return head2;
 else{
 temp = head1;
 while(temp -> next != NULL)
 {
 temp = temp -> next;
 }
 temp -> next = head2;
 }
 return head1;
 obj.display_club();
}
