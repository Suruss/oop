#include<iostream>
using namespace std;
const int size=10;
template <class type>
class queue
{
 type q[size];
 int r,f;
 public:
 queue()
 {
 r=-1;
 f=0;
 }
 void insert_rear(type);
 type delete_front();
 void display();
};
template<class type>
void queue<type>::insert_rear(type item)
{
 if(r==size-1)
 {
 cout<<"Queue is full! Can't insert\n";
 return;
 }
 r=r+1;
 q[r]=item;
}
template<class type>
type queue<type>::delete_front()
{
 type item;
 if(f>r)
 return -1;
 else 
 type item;
 item=q[f];
 f++;
 return item;
}
template<class type>
void queue<type>::display()
{
 if(f>r)
 {
 cout<<"Queue is empty!\n";
 return;
 }
 cout<<"Elements of queue are:\n";
 for(int i=f;i<=r;i++)
 {
 cout<<q[i]<<endl;
 }
}
int main()
{
 int choice;
 cout<<"1.Interger queue \t 2.Double queue \n";
 cout<<"Enter your choice:\n";
 cin>>choice;
 if(choice==1)
 {
 queue<int> q;
 for(;;)
 {
 cout<<"1.Insert\t 2.Delete\t 3.Display\t4.Exit\n";
 cout<<"Enter your choice";
 int ch;
 cin>>ch;
 switch(ch)
 {
 case 1:cout<<"Enter element to insert:\n";
 int item;
 cin>>item;
 q.insert_rear(item);
 break;
 case 2:int y;
 y=q.delete_front();
 if(y==-1)
 cout<<"Queue is empty\n";
 else 
 cout<<y<<"is deleted";
 break;
 case 3:q.display();
 break;
 default:return(0);
 }
 }
 }
 else if(choice==2)
 {
 queue<double> q;
 for(;;)
 {
 cout<<"1.Insert\t 2.Delete\t 3.Display\t4.Exit\n";
 cout<<"Enter your choice";
 int ch;
 cin>>ch;
 switch(ch)
 {
 case 1:cout<<"Enter element to insert:\n";
 double item;
 cin>>item;
 q.insert_rear(item);
 break;
 case 2:float x;
 x=q.delete_front();
 if(x==-1)
 cout<<"Queue is empty\n";
 else 
 cout<<x<<"is deleted";
 break;
 case 3:q.display();
 break;
 default:return(0);
 }
 }
 }
 else
 cout<<"Entered wrong choice!\n";
 return 0;
}