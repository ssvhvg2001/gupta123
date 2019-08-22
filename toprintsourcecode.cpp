#include<iostream>
#include<fstream>
using namespace std;
main()
{
	int x1=0;
	float y;
	char c;
	if(x1!=0)
	cout<<"harsha\n";
	ifstream x("toprintsourcecode.cpp");
	string s;
	while(getline(x,s))
	{
		cout<<s;
		if(s[1]=='i'&&s[2]=='f'&&s[3]=='(')
		cout<<"\t This is a decision making statement \n";
		else
		if(s[1]=='i'&&s[2]=='n'&&s[3]=='t')
		cout<<"\t This is a declararation statement for int \n";
		else
		if(s[1]=='f'&&s[2]=='o'&&s[3]=='r')
		cout<<"\t This is a for loop \n";
		else
		if(s[1]=='f'&&s[2]=='l'&&s[3]=='o'&&s[4]=='a'&&s[5]=='t')
		cout<<"\t This is a declaration for float \n";
		else
		if(s[1]=='c'&&s[2]=='h'&&s[3]=='a'&&s[4]=='r')
		cout<<"\t\t This is a declaration for char \n";
		else
		if(s[1]=='w'&&s[2]=='h'&&s[3]=='i'&&s[4]=='l'&&s[5]=='e')
		cout<<"\t This is a while loop this performe iteration \n";
		else
		cout<<"\n";
	}
}
