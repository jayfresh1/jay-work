#include<iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main()
{
/* getting user details */
string first_name;
string last_name;
string full_name;
string country_code;
cout<< "Enter your first name: "<< endl;
cin>> first_name;
cout<< "Enter your last name: "<<endl;
cin>>last_name;
full_name = first_name + " " + last_name;
cout<< " Welcome " << full_name<< endl;
cout<< "Please enter your country code: " << endl;
cin>>country_code;
for(int i=0;country_code[i]!='\0';i++)
	{
		if (country_code[i] >= 'A' && country_code[i] <= 'Z')    //checking for uppercase characters
			country_code[i] = country_code[i] + 32;         //converting uppercase to lowercase
	}
	cout<<"\n The string in lower case: "<< "Hello " << full_name << ", from " << country_code << "!.";
return 0;
}
