#include <iostream>
#include <fstream>
#include <string>
#include "header.h"

using namespace std;

int main(){

	string name,target,oname;
	cout<<"please enter the full name of the file you will use:\n";
	cin>>name;
	cout<<"please enter the full name of the file you will save:\n";
	cin>>oname;
	in(name,&target);
	cout<<target<<endl;
	out(oname,target);

	return 0;
}
