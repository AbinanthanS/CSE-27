#include<iostream>
#include<string>
using namespace std;

class absemployee{
	virtual void promotion() = 0;
};

class employee:absemployee
{
private:
	
	string Company;
	int Age;
protected:
string Name;	
public:
	void setname(string name){
		Name = name;
	}
	string getname(){
		return Name;
	}
	void setcomp(string comp){
		Company = comp;
	}
	string getcomp(){
		return Company;
	}
	void setage(int age){
	
			Age = age;
	}
	int getage(){
        return Age;		
	}
	employee(string name,string comp,int age)
	{
		Name = name;
		Company = comp;
		Age = age;
	}
	void intro_you()
	{
		cout<<"name : "<<Name<<endl;
		cout<<"company : "<<Company<<endl;
		cout<<"age : "<<Age<<endl;
	}
	void promotion(){
		if (Age>30){
		cout<<Name<<"got promoted ";
		}else{
			cout<<" no promotion "<<Name;
		}
	}
};
class dev:employee{
	public:
		string Fav_lang,comP;
		dev(string name,string comp,int age,string fav_lang):employee(name,comp,age){
			Fav_lang = fav_lang;
			comP =comp;
		}
		void fixbug(){
			cout<<getname()<<"fixed bug using "<<Fav_lang<<"in "<<comP<<"company";
		}
};
class teacher:employee{
public:
	string Subject;
	void lesson(){
		cout<<Name<<" is preparing "<<Subject<<" lesson ";
	}
	teacher(string name,string comp,int age,string subject):employee(name,comp,age){
		Subject = subject;
	}
};
int main()
{
	teacher t = teacher("abinanthan","school",17,"history");
	t.lesson();
	t.promotion();
return 0;
}
