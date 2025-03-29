#include<iostream>
using namespace std;



void pattern1(){
	int row,col;
	cin>>row>>col;
	for (int i = 0;i<row;i++){
		for (int j = 0;j<col;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern2(){
	int row;
	cin>>row;
	/*for (int i = 0;i<row;i++){   
		for (int j = row;j>i;j--){
			cout<<"*";
		}
		cout<<endl;
	}     */
	
	 //{0r}
	 
	 
	for (int i = 1;i<=row;i++){   
		for (int j = 0;j<row+1-i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern3(){
	int row;
	cin>>row;
	for (int i = 1;i<=row;i++){   
		for (int j = 1;j<=row+1-i;j++){
			cout<<j;
		}
		cout<<endl;
	}
}
void pattern4(){
	int row;
	cin>>row;
	for (int i = 0;i<row;i++){
		for (int j = 0;j<row-i-1;j++){
			cout<<" ";
		}
		for (int k = 0;k<2*i+1;k++){
			cout<<"*";
		}
		for(int l =0;l<row-i-1;l++){
			cout<<" ";
		}cout<<endl;
	}
}
void pattern5(){
	int row;
	cin>>row;
		

	for (int i = 0;i<row;i++){
		for (int j = 0;j<i;j++){
			cout<<" ";
		}
		for (int k = 0;k<row*2-2*i-1;k++){
			cout<<"*";
		}
		for(int l =0;l<i;l++){
			cout<<" ";
		}
		cout<<endl;
	}
}
void pattern6(){
	int row;
	cin>>row;
	for(int i = 1;i<=2*row-1;i++){
		int stars = i;
		if (i>row) stars = 2*row-i;
		for(int j = 1;j<=stars;j++){
			cout<<"*";
		}
		cout<<endl;
	}
}
void pattern7(){
	int row;
	cin>>row;
	int start = 1;
	for (int i = 0;i<row;i++){
		if (i%2==0) start = 1;
		else start =0;
		for (int j = 0;j<=i;j++){
			cout<<start<<" ";
			start = 1-start;
		}
		cout<<endl;
	}
	
}
void pattern8(){
	int row;
	cin>>row;
	int space = 2*(row-1);
	for (int i =1;i<=row;i++){
		for(int j =1;j<=i;j++){
			cout<<j;
		}
		for (int k = 1;k<=space;k++){
			cout<<" ";
		}
		for (int l = 1;l>=i;l--){
			cout<<l;
		}
		cout<<endl;
		space-=2;
	}
}
void pattern9(){
	int row;
	cin>>row;
	int num = 1;
	for(int i= 1;i<=row;i++){
		for(int j = 1;j<=i;j++){
			cout<<num<<" ";
			num +=1;
		}
		cout<<endl;
	}
}
void pattern10(){
	int row;
	cin>>row;
	for (int i = 0;i<=row;i++){
		for (char ch = 'A';ch <='A'+i;ch++){
			cout<<ch<<" ";
		}
		cout<<endl;
	}
}
void pattern11(){
	int row;
	cin>>row;
	for (int i =0;i<row;i++){
		for (char ch = 'A';ch<='A'*(row-i-1);ch++){
			cout<<ch<<" ";
		}
		cout <<endl;
	}
}



int main()
{
	
	pattern11();
	
	return 0;
	
}

