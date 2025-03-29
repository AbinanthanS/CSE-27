#include<bits/stdc++.h>
using namespace std;

/*void func(int i,int n){
	if (i > n) return;
	func(i+1,n);
	cout<<i;   //using back tracking

}
int main(){
	int n;
	cin>>n;
	func(1,n);
	return 0; 
}*/


//PARAMETERISED AND FUNCTIONSL RECURSION

/*void func(int n,int sum){
	if (n<1){
		cout<<sum;
		return;
	} 
	
	func(n-1,sum+n);
	
	
}
int main(){

int n;
cin>>n;
func(n,0);

return 0;	
}*/


//Functional

/*void func(int arr[],int a,int size){
	if (a>size) return;
	func(arr,a+1,size);
	cout<< arr[a-1]; //using basic back tracking
}
int main(){
	int arr[] = {4,5,6,8,7,8,7,6,5};
	int size = sizeof(arr)/sizeof(int);
	func(arr,1,size);

	return 0;
}

//or

void func(int i,int arr[],int n){
	if (i>=n/2) return;
	swap(arr[i],arr[n-i-1]);
	func(i+1,arr,n);
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;i++) cin>>arr[i];
	func(0,arr,n);
	for (int i =0;i<n;i++) cout<<arr[i];
}*/

/*
bool func(int n,string &s){
	if (n >= s.size()/2) return true;
	if (s[n]!=s[s.size()/2-n-1]) return false;
	return func(n+1,s);
	
}
int main(){
	
	string s = "madam";
	cout<<func(0,s);
	return 0;
}*/

//MULTIPLE RECURSION CALL (fibanocci example)
/*
int func(int n){
	if(n<=1) return n;
	int last = func(n-1);
	int slast = func(n-2);
	return last + slast;
}
int main(){
	cout<<func(5);
	return 0;
}*/


//SUBSEQUENCE OF ARRAY
/*
void func(int ind,vector<int> &ds,int arr[],int n){
	if (ind == n){
		for (auto i:ds){
			cout<<i<<" ";
		}
		if (ds.size()==0) cout<<"{}";
		cout<<endl;
		return;
	}
	//picking the element to the subsequence
	ds.push_back(arr[ind]);
	func(ind+1,ds,arr,n);
	ds.pop_back();
	//not picking the element to subequence
	func(ind+1,ds,arr,n);
	
}
int main(){
	int arr[]={3,1,2,4};
	int n = sizeof(arr)/sizeof(int);
	vector<int> ds;
	func(0,ds,arr,n);
	return 0;
}
*/
//PRINTING SUBSEQUENCES WHOSE SUM IS K
/*
void func(int i,vector<int> &ds,int s,int sum,int arr[],int n){
	if (i==n){
		if (s==sum){
		 for(auto it:ds) cout<<it<<" ";
		 cout<<endl;
	    }
	return;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    func(i+1,ds,s,sum,arr,n);
    ds.pop_back();
    s-=arr[i];
    func(i+1,ds,s,sum,arr,n);//not pick
}
int main(){
	int arr[] = {1,2,1};
	int n = 3;
	int sum = 2;
	vector<int> ds;
	func(0,ds,0,sum,arr,n);
	return 0;
}*/
/*
//PRINT ANY ONE SUBSEQUENCE WHOSE SUM IS SUM

bool func(int i,vector<int> &ds,int s,int sum,int arr[],int n){
	if (i==n){
		if (s==sum){
		 for(auto it:ds) cout<<it<<" ";
		 cout<<endl;
		 return true;
	    }
	return false;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    if(func(i+1,ds,s,sum,arr,n)==true) return true;
    ds.pop_back();
    s-=arr[i];
    if(func(i+1,ds,s,sum,arr,n)==true) return true;//not pick
    return false;
}

int main(){
	int arr[] = {1,2,1};
	int n = 3;
	int sum = 2;
	vector<int> ds;
	func(0,ds,0,sum,arr,n);
	return 0;
}
*/
