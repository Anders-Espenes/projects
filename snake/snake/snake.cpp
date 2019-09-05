// snake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;
int main(){

	int c = 0;

	cout << "Hello world";

	while (cin.fail()) {
		cout << "Error" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> c;
	}
    return 0;
}

