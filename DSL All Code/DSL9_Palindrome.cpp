#include<iostream>
#include<string.h>
#define max 25
using namespace std;
class stack
{
public:
int top;
char st[max];
stack()
{
top = -1;
}
void push(char);
char pop();
int isempty();
int isfull();
};
class str
{
char inputstr[25], reverse[25];
stack stobj;
public:
void readstr();
void convertstr();
void revstr();
void checkpal();
};
int stack :: isempty()
{
if(top == -1)
return 1;
else
return 0;
}
int stack :: isfull()
{
if(top == max-1)
return 1;
else
return 0;
}
void stack :: push(char val)
{
if(!isfull())
{
top++;
st[top] = val;
}
else
cout << "Stack Is Full" << endl;
}
char stack :: pop()
{
char ch;
if(!isempty())
{
ch = st[top];
top--;
}
else
cout << "Stack Is Empty" << endl;
return ch;
}
void str::readstr()
{
cout << "Enter Your String : ";
cin.get(inputstr,25);
}
void str::convertstr()
{
char tempstr[25];
int j = 0;
for(int i{0} ; inputstr[i] != '\0' ; i++)
{
if(inputstr[i] >= 65 && inputstr[i] <= 90)
{
tempstr[j] = inputstr[i] + 32;
j++;
}
else if(inputstr[i] >= 97 && inputstr[i] <= 122)
{
tempstr[j] = inputstr[i];
j++;
}
}
tempstr[j] = '\0';
strcpy(inputstr, tempstr);
}
void str::revstr()
{
for(int i=0; inputstr[i] != '\0' ; i++)
{
stobj.push(inputstr[i]);
}
int i=0;
while(!stobj.isempty())
{
reverse[i] = stobj.pop();
i++;
}
reverse[i] = '\0';
}
void str::checkpal()
{
if(strcmp(inputstr,reverse) == 0)
{
cout << "String Is Palindrome" << endl;
}
else
cout << "String Is Not Palindrome" << endl;
}
int main()
{
str s;
//stack stk;
s.readstr();
s.convertstr();
s.revstr();
s.checkpal();
cout << endl;
return 0;
}
