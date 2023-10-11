#include<iostream>
#include<string.h>
using namespace std;
class string_ 
{
 char *name;
 int length;
 public:
 string_()
 {
 length=0;
 name=new char[length+1];
 }
 string_(char *s)
 {
 length=strlen(s);
 name=new char[length+1];
 strcpy(name,s);
 }
 friend string_ operator +(string_ s1,string_ s2);
 friend ostream &operator <<(ostream &out,string_ s);
};
string_ operator +(string_ s1,string_ s2)
{
 string_ s3;
 s3.length=(s1.length+s2.length);
 s3.name=new char[s3.length+1];
 strcpy(s3.name,s1.name);
 strcat(s3.name,s2.name);
 return s3;
}
ostream &operator <<(ostream &out,string_ s)
{
 out<<s.name<<endl;
 return out;
}
int main()
{
 string_ s1("Dr AIT"),s2(" Bangalore");
 string_ s3;
 s3=s1+s2;
 cout<<"string 1 is:"<<s1;
 cout<<"string 2 is:"<<s2;
 cout<<"string 3 is:"<<s3;
 return 0;
}