#include "pch.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;


vector<string> vec_init(vector<string> &V, string *p, int count) {
	for (size_t i = 0; i < count; i++)
	{
		cout << p->size() << endl;
		V.push_back(*p);
		p++;
	}
	return V;
}
void test(const int &a) {
	cout << a << endl;
}

int main()
{
	vector<string> V;
	string arr[] = {" hello", " happy", " C++", " practice"};
	string *p = arr;

	vec_init(V, p, 4);
	string ins = " hhh";
	V.insert(V.begin()+V.size(), ins);

	for (size_t i = 0; i < V.size(); i++)
	{
		cout << V[i] << endl;
	}
	cout << "string length: " << V.size() << endl;

	char arr1[] = "china";
	cout << strlen(arr1) << endl;//5
	cout << sizeof(arr) << endl;//6

	char *p1 = arr1;
	cout << strlen(p1) << endl;//5
	cout << sizeof(p1) << endl << endl;//4

	char brr[6] = "china";
	cout << strlen(brr) << endl;//5
	cout << sizeof(brr) << endl;//6

	char crr[5] = { 'c', 'h', 'i', 'n', 'a'};
	cout << strlen(crr) << endl;//21
	cout << sizeof(crr) << endl;//5

	string str = "china";
	cout << sizeof(str) << endl;//28

	cout << str.find('i') << endl;
	str.pop_back();
	cout << str << endl;
	cout << str.front() << endl;

	int a = 0;
	int *b;
	b = &a;
	test(a);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
