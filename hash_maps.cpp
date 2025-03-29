#include<iostream>
#include<map>
#include<vector>
using namespace std;
/*
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;i++){
		cin>>arr[i];
	}
	
	int hash[20]={0};
	for (int i =0;i<n;i++){
		hash[arr[i]] += 1;
	}
	
	int q;
	cin>>q;
	while(q--){
		int number;
		cin>>number;
		cout<<hash[number]<<endl;
	}
	return 0;
}


//char hashing 

int main(){
	string s;
	cin>>s;
	
	
	int hash[26]={0}; //hash[256]
	for (int i =0;i<s.size();i++){
		hash[s[i]-'a'] ++; //or hash[s[i]] for full hash
	}
	int q;
	while(q--){
		char c;
		cin>>c;
		cout<<hash[c-'a']<<endl;//or hash[c]
	}
	
	
	
	return 0;
}
*/

//number hasing MAP

//int main(){
	/*int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;i++){
		cin>>arr[i];
	}
	string s;
	cin>>s;
	map<char,int> mp;
	for(int i =0;i<s.size();i++){
		mp[s[i]]++;//map is sorted
	}
	for (auto it:mp){
		cout<<it.first<<"->"<<it.second; //looping through map
	}
	
	int q;
	cin>>q;
	while(q--){
		char number;
		cin>>number;
		cout<<mp[number];
	}
	return 0;
}*/


void count_freq(int arr[],int n){
	int max=0;int min = n;
	int maxe = 0;int mine = 0;
	vector<bool> arr_itr(n,false);
	
	for (int i = 0;i<n;i++){
		if (arr_itr[i] == true){
			continue;
		}
		int count = 1;
		for (int j = i+1;j<n;j++){
			if (arr[i]==arr[j]){
				arr_itr[j] == true;
				count++;
			}
		}
		if (count>max){
			max = count;
			maxe = arr[i];
		}
		if (count<min){
			min = count;
			mine = arr[i];
		}
		
	}
	cout<<"maax element and freq : "<<maxe<<max<<endl;
	cout<<"min element and freq : "<<mine<<min<<endl;
}


int main(){

int arr[6] = {2,3,4,3,2,2};
int n = sizeof(arr)/sizeof(int);
count_freq(arr,n);

return 0;
}
