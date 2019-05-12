#include<iostream>
#include<string.h>
using namespace std;
int main(){
long long t,i,c;
string str;
cin>>t;
while(t--){
	cin>>str;
	c=0;
	for(i=0;i<str.length();i++){
		if(str[i]== '+' && str[i+1]=='+'){
			str[i+1]='-';
			c++;
			i++;
		}
		else if(str[i]=='-' && str[i+1]=='-'){
			str[i+1]='+';
			c++;
			i++;
		}
	}
	for(i=0;i<str.length();i++){
	cout<<str[i];
	}
	cout<<c<<endl;
}
return 0;
}
