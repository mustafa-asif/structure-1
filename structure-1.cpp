#include <iostream>
#include <string>
using namespace std;

struct students
{
	string name;
	int roll;
	float marks;
};

int main()
{
	students A[5];
	cout << "enter arrays elements" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "enter your name" << endl;
		cin >> A[i].name;
		cout << "enter your roll number" << endl;
		cin >> A[i].roll;
		cout << "enter your marks" << endl;
		cin >> A[i].marks;
	}
	cout << "the elements are " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << A[i].name<<" "<<" :";
		cout << "roll number : "<<A[i].roll << " ";
		cout << "marks obtain : "<<A[i].marks << " ";
		cout << endl;
	}cout << endl;

	int highestmarks = 0;
	for (int i = 0; i < 5; i++)
		
	{
		if (A[i].marks>A[highestmarks].marks)
		{
			highestmarks = i;
		}
	
		
	}
	cout << "details of students with highest marks is " << endl;
	cout << "name is " << A[highestmarks].name << endl;
	cout << "roll number is " << A[highestmarks].roll << endl;
	cout << "marks are " << A[highestmarks].marks << endl;

}