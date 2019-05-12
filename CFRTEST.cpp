#include<iostream>
using namespace std;
int main(){
int t,n,c,c1,flag;
cin>>t;
while(t--){
	cin>>n;
	int s[n];
	c=0,c1=0;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int i=0;i<n;i++){
		flag=0;
		for(int j=0;j<n;j++){
			cout<<s[j]<<" "<<s[i]<<endl;
			if(s[j]==s[i])
			{
				c1++;
				if(flag==0){
				c++;
				flag=1;
				}
				cout<<c<<" "<<c1<<endl;
			}
		}
	}
	cout<<c<<endl;

}
return 0;
} 
