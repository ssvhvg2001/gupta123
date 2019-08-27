//registration number 121810314003
#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int x1=0,i=0,z,z1;
	float y;
	char c;
	if(x1!=0)
	cout<<"harsha\n";
	ifstream x("toprintsourcecode_2.cpp");
	string s;
	while(getline(x,s))
	{
		i=0;z=s[0];z1=s[1];
		cout<<s;
		if(s[i]=='\t')
		for(i=0;s[i]=='\t';i++);
		if(s[i]=='i'&&s[i+1]=='f'&&s[i+2]=='(')
		cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t This is a decision making statement \n";
		else
		if(s[i]=='i'&&s[i+1]=='n'&&s[i+2]=='t')
		cout<<"\t\t\t\t\t\t\t\t\t\t\t This is a declararation statement for int \n";
		else
		if(s[i]=='f'&&s[i+1]=='o'&&s[i+2]=='r')
		cout<<"\t\t\t\t\t\t\t\t\t This is a for loop \n";
		else
		if(s[i]=='f'&&s[i+1]=='l'&&s[i+2]=='o'&&s[i+3]=='a'&&s[i+4]=='t')
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t This is a declaration for float \n";
		else
		if(s[i]=='c'&&s[i+1]=='h'&&s[i+2]=='a'&&s[i+3]=='r')
		cout<<"\t\t\t\t\t\t\t\t\t\t\t\t\t This is a declaration for char \n";
		else
		if(s[i]=='w'&&s[i+1]=='h'&&s[i+2]=='i'&&s[i+3]=='l'&&s[i+4]=='e')
		cout<<"\t\t\t\t\t\t\t\t\t\t\t This is a while loop this performe iteration \n";
		else
		cout<<"\n";
	}
}
