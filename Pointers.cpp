//POINTERS

/*#include<iostream>
using namespace std;
int main(){
	int a = 1025;
	int *p;
	p = &a;
	cout<<sizeof(int)<<endl;
	cout<<p<<" "<<*p<<endl;
	cout<<p+1<<" "<<*(p+1)<<endl; // p+1 --> this address has a garbage value,
	//hence *(p+1) points to that garbage value
	
	char *p0;
	p0 = (char* )p; //typecasting [p is a int and p0 is char so p is typecasted to char pointer]
	cout<<sizeof(char)<<endl;
	cout<<p0<<" "<<*p0<<endl;
	cout<<p0+1<<" "<<*(p0+1); // 1025 - 00000000 00000000 00000100 00000001
	return 0;
	
} 
*/

//void pointer - generic pointer
/*
#include<iostream>
using namespace std;
int main(){
	int a = 1025;
	int *p;
	p = &a;
	cout<<sizeof(int)<<endl;
	cout<<p<<" "<<*p<<endl;
	void *p0;
	p0 = p;
	cout<<"void address:"<<p0+1<<p0<<endl;
}*/

//pointer to pointer 

/*#include<iostream>
using namespace std;
int main(){
	int x =5;
	int *p = &x;
	*p = 6;
	int **q = &p;
	int ***r = &q;
	

	cout<<&x<<" "<<p<<endl;
	cout<<&p<<" "<<q<<endl;
	cout<<&q<<" "<<r<<endl;
	
	cout<<p<<" "<<*q<<" "<<**r<<endl;
	cout<<q<<" "<<&p<<endl;
	
	**q = 10;
	cout<<**q<<endl;
	**q = *p+2;
	cout<<**q<<endl;
	***r = **q - 2;
	cout<<***r<<endl;
	int ****h = &r;
	cout<<****h; */
	
//////////////////////////////////////////////////////////////////////////////////////////////////////////////	

// POINTERS AS FUNCTION ARGUMENTS - CALL BY REFERENCE	(saves lot of memory)

/*#include<iostream>
using namespace std;
void increment(int *p){
	*p += 1;
	
}
int main(){
	
	int a = 10;
	increment(&a);
	cout<<a;
	return 0;
	
}*/

//POINTERS AND ARRAYS

/*#include<iostream>
using namespace std;
int main(){
	int arr[5] = {2,3,4,5,4};
	int *p ;
	p = &arr[0]; 
	cout<<p<<endl;
	cout<<arr;//simply prints address of frist element of array
	for (int i = 0;i<5;i++){
	
	cout<<*(p+i)<<" "; //or
	p = &arr[i];
	cout<<*p<<" ";
	cout<<arr[i];
	}
		
}*/

//ARRAYS AS FUNCTION ARGUMENTS (for arrays there is no call by value)

/*#include<iostream>
using namespace std;
int sum_of_array(int *arr,int size){   // (int *arr) or (int arr[]) both are same....
	int sum= 0;
	for (int i=0;i<size;i++){
		sum += arr[i];
	}
	return sum;
}
int main(){
	int arr[] = {2,3,5,4,5};
	int size = sizeof(arr);
	int sum = sum_of_array(arr,size);
	cout<<sum;
}

#include<iostream>
using namespace std;
int Double(int *arr,int size){
	int i = 0,sum = 0;
	for (i;i<size;i++){
		arr[i] = 2*arr[i];
	}
}
int main(){
	int arr[] = {2,3,4,5,6};
	int size = sizeof(arr)/sizeof(arr[0]);
	int i;
	Double(arr,size);
	for (i = 0;i<size;i++){
		cout<<arr[i];
	}
	
}*/

//CHARACTER ARRAYS AND POINTERS

/*#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char c[] = "abinanthan";
	//cout<<sizeof(c)<<" ";//stores null termination '\0'
	int len = strlen(c);
	char *c2;
	c2 = c;//returns address of frist element
	c2[2]= 'h';//*(c2+2) = 'h' is also same
	cout<<c2;//c2++ is valid
}*/

/*#include<iostream>
using namespace std;
void print(char *c){
//	c[0] = 'a';
	
	while (*c!='\0'){
		cout<<*c;
		c++;
	}
}
int main(){
	char c[20] = "hello";//string gets stored in the space for array
	//char *c = "hello";//string stored as compile time cosntant
	
	print(c);
}*/

//POINTERS AND MULTI-D ARRAY

/*#include<iostream>
using namespace std;
int main(){
int b[3][3] = {{2,3,4},{5,6,4}};
int (*p)[3] = b;
cout<<b<<" "<<b[0]<<" "<<*b<<" "<<&b[0][0]<<endl; //*b dereferenced compelete 1-d array
cout<<*(b+1)<<" "<<b[1]<<" "<<*(*(b+1)+2)<<" "<<*(b[1]+2)<<endl;
cout<<&b[1][2]<<" "<<b[1]+2<<endl;
cout<<*(*b+1);
}*/

/*#include<iostream>
int func(int *a) //arguments 3-d array of integers
{
	
}
using namespace std;
int main(){
	int c[3][2][2] = {{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};
	cout<<*c<<" "<<c<<" "<<c[0]<<" "<<&c[0][0]<<endl;
	//cout<<c[0][1]+1;
	int a[2] = {1,2};
	int b[2][3] = {{2,4,6},{5,7,6}};//b returns int (*)[3]
	int x[5][3];
	func(c);
	
}*/

////pointers and dynamic memory
/*#include<iostream>
using namespace std;
int main()
{
	int a;
	int *p;
	p = new int;
	*p = 10;
	delete p;
	p = new int[20];
	delete[] p; 
}*/

/*#include<iostream>
using namespace std;
int *add(int *a,int *b){//called function
	int c = (*a)+(*b);
	return &c;
}
int main(){//calling function
	int a =2,b=4;
	cout<<&a<<endl;
	int *ptr = add(&a,&b);//a and b are integers local to main
	cout<<"sum is : "<<*ptr;
	
}*/
#include<iostream>
using namespace std;

void initializer(int* arr,int size){
	for (int i = 0;i<size;i++){
		arr[i]= i+1;
	}
}
void print(int size){
	int arr[size];
	initializer(arr,size);
	for(int i = 0;i<size;i++){
		cout<<arr[i]<<endl;
	}
}


int main(){
	int n =5;
	print(n);
	return 0;
}







