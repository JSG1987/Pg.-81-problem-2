// Problem 2 Sales prediction the goal of this problem is to preict how much East Coast will generat if the company ha $8.6 million

#include<iostream>
#include<iomanip>


using namespace std; 

int main()
{
	double precent;
	double sales; 
	double prediction;

	sales = 8.6*1000000;
	precent = .58;
	prediction = sales * precent;
	cout << "If the East Coast sales devision generates $8.6 million with 58% of total sales the sales for that year is " << prediction << endl;

	system("PAUSE");
	return 0;
}