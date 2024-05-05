#include<iostream>
#include<cstring>
#include<conio.h>
#include<math.h>
#define MAX 50
using namespace std;
class stack
{
 public:
       stack()
       {
             top=-1;
             optop=-1;
       }
       char infix[MAX];
       char postfix[MAX];
       char array[MAX];
       int operandstack[MAX];
       int top,optop;

 int full()
 {
       if(top==MAX-1)
            return(1);
      else
            return(0);
 }

 int empty()
{
       if(top==-1)
            return(1);
       else
            return(0);
}

 void push(char item)
 {
       if(full())
       {
            cout<<"\n stack overflow:\n";
       }
       else
       {
            top++;
            array[top]=item;
       }
}

char pop()
{
       if(empty())
            return('#');
       else
            return(array[top--]);
 }

 void read()
 {
      cout<<"Enter and Infix Expression : ";
      cin>>infix;
 }
 int priority(char item)
 {
       switch(item)
       {
             case '^':return(5);
             case '/':return(4);
             case '*':return(3);
             case '+':return(2);
             case '-':return(1);
             case '(':return(0);
             default:return(-1);
       }
 }
 void infixTopostfix()
 {
       int k=0,i,ip;
       char input;
       for(i=0;infix[i]!='\0';i++)
       {
            switch(infix[i])
            {
                   case '(':
                         push(infix[i]);
                   break;
                   case ')':
                         while((input=pop())!='(')
                         postfix[k++]=input;
                   break;
                   case '+':
                   case '-':
                   case '*':
                   case '/':
                   case '^':
                   if(!empty())
                   {
                         ip=priority(infix[i]);
                         input=pop();
                         while(ip<=priority(input))
                         {
                               postfix[k++]=input;
                               if(!empty())
                               input=pop();
                               else
                               break;
                         }
                         if(ip>priority(input))
                         push(input);
                   }
                   push(infix[i]);
                   break;
                   default:
                         postfix[k++]=infix[i];
                         break;
             }
       }
       while(!empty())
             postfix[k++]=pop();
             postfix[k]='\0';
             cout<<"Postfix expression is : "<<postfix<<endl;
}

int isOperator(char x) //Function to check if given character is operator or not
{
      if (x == '+' || x == '-' || x == '*' || x == '/' || x == '(' || x == ')' || x == '^')
      {
            return 1;
      }
      else
            return 0;
 }

 void postfixeval() //Function for evaluation
 {
      int a1, b1, c1, d1, e1, f1, length;
      a1 = b1 = c1 = d1 = e1 = f1 = 0;
      cout << "\nEnter the value of Variables - ";
      cout << "\n a : ";
      cin >> a1;
      cout << "\n b : ";
      cin >> b1;
      cout << "\n c : ";
      cin >> c1;
      cout << "\n d : ";
      cin >> d1;
      cout << "\n e : ";
      cin >> e1;
      cout << "\n f : ";
      cin >> f1;
      length = strlen(postfix);
      cout<<"Length of expression is : "<<length;
      for (int i=0; i<length; i++)
      {
            if (isOperator(postfix[i]))
            {
                  int t1=0, t2=0;
                  t1 = pop(t1);
                  t2 = pop(t1);
                  if (postfix[i] == '+')
                  {
                        t1 = t2 + t1;
                        push(t1);
                  }
                  else if (postfix[i] == '-')
                  {
                        t1 = t2 - t1;
                        push(t1);
                  }
                  else if (postfix[i] == '*')
                  {
                        t1 = t1*t2;
                        push(t1);
                  }
                  else if (postfix[i] == '/')
                  {
                        t1 = t2 / t1;
                        push(t1);
                  }
                  else if (postfix[i] == '^')
                  {
                        t1 = pow(t2,t1);
                        push(t1);
                  }
            }
            else
            {
                  if (postfix[i] == 'a')
                  {
                        push(a1);
                  }
                  else if (postfix[i] == 'b')
                  {
                        push(b1);
                  }
                  else if (postfix[i] == 'c')
                  {
                        push(c1);
                  }
                  else if (postfix[i]== 'd')
                  {
                        push(d1);
                  }
                  else if (postfix[i]== 'e')
                  {
                        push(e1);
                  }
                  else if (postfix[i]== 'f')
                  {
                        push(f1);
                  }
            }
      }
      cout << "\nEvaluation is : " << operandstack[0] << endl;
 }


 void push(int x) //PUSH Function for integer stack
 {
      optop = optop + 1;
      operandstack[optop] = x;
}

 int pop(int x) //POP Function for integer stack
 {
      optop = optop - 1;
      return operandstack[optop + 1];
 }
};
int main()
{
       stack s;
       s.read();
       s.infixTopostfix();
       s.postfixeval();
       return 0;
}
