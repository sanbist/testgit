#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	string str;
	int c[27];
	cout<<"enter string ";
	getline(cin,str);
	int i;
	int n;
	int l = str.length();
	/*
	for(i=0;i<l;i++)
	{
		if(str[i]!= ' ')
		{
			cout<<((int)str[i])-97<<" ";
		}
	}*/

	for(i=0;i<26;i++)
	{
		c[i]=0;
	}
		
	for(i=0;i<l;i++)
	{
		if(str[i]!= ' ')
		{
			n=((int)str[i])-97;
			c[n] = c[n]+1;
			
		}
	}
	
	/*for(i=0;i<26;i++)
	{
		cout<<"i: "<<i<<"  "<<c[i]<<endl;
	}*/
	int max=c[0];
	int pos;
	for(i=1;i<26;i++)
	{
		cout<<"i "<<i<<" "<<c[i]<<endl;
		if(c[i]>=max)
		{
		 max=c[i];
		 pos=i;
		}
	}
	
	cout<<"frequent letter is ";
	cout<<pos<<endl;
	char ch;
	ch=(char)(pos+97);
	cout<<"char is : "<<ch;
	
	
	return 0;
}
