#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class num
{
public:
char n[9]; //for hexadecimal number
long int m; //for octal number
num()
{
n[9]='\0';
m=0;
}
};
class hexa:public num
{
public:
int read_hexa()
{
cout<<"Enter hexadecimal no:\n";
cin>>n;
int sum=0,i,j=0,len;
len=strlen(n);
for(i=len-1;i>=0;i--)
{
if(n[i]>='0' && n[i]<='9')
{
sum=sum+(n[i]-48)*pow(16,j);
j++;
}
else if(n[i]>='A' && n[i]<='F')
{
sum=sum+(n[i]-55)*pow(16,j);
j++;
}
else if(n[i]>='a' && n[i]<='f')
{
sum=sum+(n[i]-87)*pow(16,j);
j++;
}
else
cout<<"Headecimal value enetered is wrong \n";
}
return sum;
}
};
class octa:public num
{
public:
int read_octa()
{
long int k=0,decnum=0;
cout<<"Enter octal no:\n";
cin>>m;
while(m!=0)
{
if(m%10>7)
{
cout<<"Invalid octal number\n";
return -1;
}
decnum+=(m%10)*pow(8,k);
k++;
m=m/10;
}
return decnum;
}
};
int main()
{
int choice,i,j,k,l,m,n;
hexa h1;
octa o1,o2;
for(;;)
{
cout<<"1.To add hex and oct\n2.To add oct and integer\n";
cin>>choice;
switch(choice)
{
case 1: i=h1.read_hexa();
cout<<"After converting hex to dec : "<<i<<endl;
j=o1.read_octa();
if(j==-1)
{
break;
}
else
{
cout<<"After converting oct to dec: "<<j<<endl;
k=i+j;
cout<<"Sum is: "<<k<<endl;
break;
}
case 2: l=o2.read_octa();
if(l==-1)
{
break;
}
else
{
cout<<"After converting oct to dec: "<<l<<endl;
cout<<"Enter interger to be added:\n";
cin>>m;
n=l+m;
cout<<"Sum is: "<<n<<endl;
break;
}
default:return(0);
}
}
return 0;
}