// Problem 2 on the Practice EPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include "IntegerLinkedList.h"

using namespace std;

int main() {
	IntegerLinkedList mylist;
	cout << "Enter number of integers : ";
	int n, value;
	cin >> n;
	cout << "Enter " << n << " integers" << endl;
	for (int i = 0; i < n; i++) {
		cin >> value;
		mylist.addFront(value);
	}

	mylist.print();

	cout << "Enter position of integer to find : ";
	cin >> n;
	cout << "Integer at position entered is: " << mylist.getInteger(n) << endl;

	int s, e;
	cout << "The max number is " << mylist.getMax() << endl;

	//system("pause");
}
