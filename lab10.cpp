#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
    ofstream outFile;
    outFile.open("Questions");
    if(!outFile)
    {
        cout<<"File could not be opened!"<<endl;
        exit(1); 
    }
    outFile<<"\nWho is the prime minister of India?";
    outFile<<"\nWhich is the capital of India?";
    outFile<<"\nWho won the 2007 world cup t20?";
    outFile.close();
    outFile.open("Answers");
    if(!outFile)
    {
        cout<<"\nFile could not be opened!";
        exit(1);
    }
    outFile<<"\nNarendra Modi";
    outFile<<"\nNew Delhi";
    outFile<<"\nIndia";
    outFile.close();
    char quest[80],ans[40];
    ifstream inpFile;
    inpFile.open("Questions");
    if(!inpFile)
    {
        cout<<"\nFile could not be opened!";
        exit(1);
    }
    cout<<"\n******Sample questions for Quize contest******"<<endl;
    while(inpFile.eof()==0)
    {
        inpFile.getline(quest,80);
        cout<<"\n"<<quest;
    }
    inpFile.close();
    inpFile.open("Answers");
    if(!inpFile)
    {
        cout<<"\nFile could not be opened!";
        exit(1);
    }
    cout<<"\n******Sample answers for Quize contest******"<<endl;
    while(inpFile.eof()==0)
    {
        inpFile.getline(ans,40);
        cout<<"\n"<<ans;
    }
    inpFile.close();
    return 0;
}