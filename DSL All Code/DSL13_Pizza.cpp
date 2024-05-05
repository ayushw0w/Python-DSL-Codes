#include <iostream>
using namespace std;
#define size 5
class pizza
{
      int pizza_order[size];
      int front,rear;
      public:
      pizza()
      {
            front=rear=-1;
      }
      int qfull()
      {
            if((front==0)&&(rear==(size-1))||(front==(rear+1)%size))
            return 1;
            else
            return 0;
      }
      int qempty()
      {
            if(front==-1)
            return 1;
            else
            return 0;
      }
      int accept_order(int);
      void make_payment(int);
      void order_in_queue();
};

int pizza::accept_order(int item)
{
      int n;
      int k;
      int price;
      if(qfull())
            cout<<"\nVery Sorry !!!! No more orders....\n";
      else
      {
            if(front==-1)
            {
                  front=rear=0;
            }
            else
            {
                  rear=(rear+1)%size;
            }
            pizza_order[rear]=item;
      }
      cout<<"\nHow many Pizza do you want to order? ";
      cin>>n;
      k = item;
      if(k == 1)
      {
            price = 100;
      }
      else if(k == 2)
      {
            price =120;
      }
      else if(k == 3)
      {
            price =150;
      }
      else
      {
            price = 200;
      }
      n=n*price;
      return n;
}

void pizza::make_payment(int n)
{
        int item;
        char ans;
        if(qempty())
                cout<<"\nSorry !!! No orders...\n";
        else
        {
                cout<<"\nOrder Delivered....\n";
                item=pizza_order[front];
                if(front==rear)
                {
                        front=rear=-1;
                }
                else
                {
                        front=(front+1)%size;
                }
                cout<<"  "<<item;
        }
        cout<<"\nTotal amount to pay : Rs."<<n;
        cout<<"\nThank you visit Again....\n";
}

void pizza::order_in_queue()
{
        int temp;
        if(qempty())
        {
                cout<<"\nSorry !! There is no pending order...\n";
        }
        else
        {
                temp=front;
               //cout<<"\nPending Order...\n";
                cout<<"\n Pending Orders....\n";
                while(temp!=rear)
                {
                        cout<<"  "<<pizza_order[temp];
                        temp=(temp+1)%size;
                }
                cout<<"  "<<pizza_order[temp];
        }
        cout << "\n";
}

int main()
{
        pizza p1;
        int ch,k,n;
        do{
                cout<<"\n--------- Welcome To Pizza Parlor --------- \n";
                cout << "\n\t1.Accept order\n\t2.Make_payment\n\t3.Pending Orders\n\tEnter your choice : ";
                cin>>ch;
                cout<<"\n-------------------------------------------- \n";
                switch(ch)
                {
                        case 1:
                                cout<<"\nWhich Pizza would you like to Order....\n";
                                cout<<"\n1.Margarita Plain Cheese Pizza\n2.Peri Peri Pizza\n3.Cheese Burst Pizza\n4.Chicken Dominator Pizza";
                                cout<<"\nPlease enter your order: ";
                                cin>>k;
                                n=p1.accept_order(k);
                                break;

                        case 2:
                                p1.make_payment(n);
                                break;

                        case 3:
                                p1.order_in_queue();
                                break;

                        default:
                                cout<<"\nInvalid Choice....\n";
                                break;
                }
        }while(ch!=4);
        return 0;
}
