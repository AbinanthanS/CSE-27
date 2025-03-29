#include<bits/stdc++.h>
using namespace std;
int main(){
	nullptr_t np1,np2;
	if (np1>= np2){ // >= and <= always return true and < and > always return false
		cout<<"can compare"<<endl;
	}else{
		cout<<"cant comapre"<<endl;
	}
	char *x = np1;//same as x = nullptr or x = NULL
	if (x == nullptr){
		cout<<"x is null"<<endl;
		//cout<<static_cast<int>(reinterpret_cast<uintptr_t>(np1)); 
	}else{
		cout<<"x is not null"<<endl;
	}
	return 0;
}

