#include <iostream>
#include <string>
#include <fstream>
#include "header.h"

using namespace std;

void in(string source, string *target){
ifstream inf(source);
string line;
while(getline(inf,line)){
	for(int i=0;i<line.length();i++){
		*target+=to_string((int)line[i]);
		*target+=" ";
	}
	*target+="<end of line>\n";
}
inf.close();
}
void out(string name, string source){
ofstream ouf(name);
ouf<<source;
ouf.close();
}