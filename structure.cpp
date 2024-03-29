#include<iostream>
using namespace std;

struct employee
{
	int eId;
	float salary;
	
	
};
int main()
{
	struct employee tina;
	struct employee sakshi;
	struct employee kshitij;
	
	tina.eId = 4;
	tina.salary=12000000;
	
	
	cout<<tina.eId<<endl;
	
	cout<<tina.salary<<endl;
	
	sakshi.salary=120000;
	sakshi.eId = 7;
	cout<<sakshi.eId<<endl;
	cout<<sakshi.salary<<endl;
	
	
	kshitij.salary=1200000000000000;
	kshitij.eId = 2;
	cout<<kshitij.eId<<endl;
	cout<<kshitij.eId<<endl;

	
}
