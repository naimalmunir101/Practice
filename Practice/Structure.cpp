#include <iostream>
using namespace std;

struct Student
{
	char name[50];
	char rollNum[25];
	float gpa;
};

void printData(Student stdArr[], const int size);
void topper(Student stdArr[], const int size);
void sortByGPA(Student stdArr[], const int size);

int main()
{
	const int size = 3;
	Student stdArr[size] = { {"Naimal" , "bscs24101" , 2.25},
							 {"Eman" , "bscs24134" , 2.7},
							 {"Ali" , "bscs24105" , 3.0} };

	cout << "-----Details-----" << endl;
	printData(stdArr, size);

	topper(stdArr, size);

	cout << "\n----Sorting by GPA---" << endl;
	sortByGPA(stdArr, size);

	
	return 0;
}

void printData(Student stdArr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\nStudent-" << i + 1 << ": " << endl;
		cout << stdArr[i].name << "  " << stdArr[i].gpa << "  " << stdArr[i].rollNum << endl;
	}
}

void topper(Student stdArr[], const int size)
{
	int max = 0;
	int index = 0;

	for (int i = 0; i < size; i++)
	{
		if (stdArr[i].gpa > max)
		{
			max = stdArr[i].gpa;
			index = i;
		}
	}

	cout << "\nStudent with highest gpa: " <<  endl;
	cout << stdArr[index].name << "  " << stdArr[index].gpa << "  " << stdArr[index].rollNum << endl;
	
}

void sortByGPA(Student stdArr[], const int size)
{
	Student temp = stdArr[0];

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (stdArr[i].gpa < stdArr[j].gpa)
			{
				temp = stdArr[i];
				stdArr[i] = stdArr[j];
				stdArr[j] = temp;
			}
		}
	}
	printData(stdArr, size);
}


