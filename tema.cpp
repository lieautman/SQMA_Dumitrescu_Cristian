#include <iostream>
using namespace std;


int MAXINT = 2147483647;
string problemCode1 = "1";

int funcToTestAddingTwoNums(int a, int b) {
	if (MAXINT - a < b) {
		throw problemCode1;
		return MAXINT;
	}
	return a + b;
}

bool testMaxInt() {
	try {
		funcToTestAddingTwoNums(MAXINT, MAXINT);
	}
	catch(string problemCode) {
		cout << "Exception thrown. Code:" << problemCode << endl;
		return 1;
	}
	return 0;
}


int main(int argc, char** argv) {
	if (argc > 1) {
		char* whatTestToRun = argv[1];

		if (*whatTestToRun == '1') {
			bool testMaxIntResult = testMaxInt();
			if (testMaxIntResult == 1) {
				return 1;
			}
		}

		if (*whatTestToRun == '2') {
			cout << "Not Implemented yet";
			return 0;
		}

		if (*whatTestToRun == '3') {
			cout << "Not Implemented yet";
			return 0;
		}

		if (*whatTestToRun != '1' || *whatTestToRun != '2' || *whatTestToRun != '3') {
			cout << "Wrong test. choose 1, 2 or 3";
			return 1;
		}
	}
	else {
		cout << "No arguments found" << endl;
		return 1;
	}

	return 0;
}