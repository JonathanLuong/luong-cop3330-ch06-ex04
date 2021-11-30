/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Luong
 */

#include "std_lib_facilities.h"

class Name_value {
	public: 
		string name;
		int score;
		Name_value(string str, int val)	:	name(str), score(val) {}
};

int main()
{
	Vector<Name_value> names;

	try{
		cout << "Enter a name and score pair. Enter NoName or 0 to terminate the program.\n";
		
		string tempName = "";
		int tempScore = -1;

		while(tempName != "NoName" || tempScore != 0) {
			cout << "\nEnter a name and score:\n";
			cin >> tempName >> tempScore;

			for(int i = 0; i < names.size(); i++) {
				if (tempName == names[i].name) {
					cout << "\nDuplicate name\n";

				}
				
			}
		} 

	}

	return 0;
}