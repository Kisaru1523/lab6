#include<iostream>
#include<string>
using namespace std;

int main()
{
	string x,z,a,b;
	int y;
	cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
	cout << "?????: ";
	getline(cin,x);
	cout << "Fahsai: Wow!!! "<<x<<" is a really cool name.\n";
	cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
	cout <<x<<": ";
	cin >>y;
	cin.ignore();
	cout << "Fahsai: I think you may be GEAR "<< y/10000000-12<<". I have a free movie ticket for you.\n";
	cout << "Fahsai: Let's go to the cinema together!!!\n";
	cout << "Fahsai: What movie do you want to watch?\n";
	cout <<x<<": ";
	getline(cin,z);
	cout << "Fahsai: So....which day are you free to go with me?\n";
	cout <<x<<": ";
	getline(cin,a);
	cout <<"Fahsai: "<<a<<"....that is OK!!! I'm looking forward to watching "<<z<<" with you.\n";
	cout <<x<<": ";
	getline(cin,b);
	cout << "Fahsai: 555+ see you "<<a<<". Bye Bye \\(^ ^)/";
	return 0;
}
