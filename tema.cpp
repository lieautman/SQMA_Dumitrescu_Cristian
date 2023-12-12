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

bool testNegativeInt() {
	try {
		int retVal = funcToTestAddingTwoNums(-20, -30);
		if (retVal == -50) {
			return 0;
		}
		else {
			return 1;
		}
	}
	catch (string problemCode) {
		cout << "Exception thrown. Code:" << problemCode << endl;
		return 1;
	}
	return 0;
}

bool testFloatInput() {
	try {
		int retVal = funcToTestAddingTwoNums(10.2, 5.3);
		if (retVal == 15.5) {
			return 0;
		}
		else {
			return 1;
		}
	}
	catch (string problemCode) {
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
			return 0;
		}

		if (*whatTestToRun == '2') {
			bool testNegativeIntResult = testNegativeInt();
			if (testNegativeIntResult == 1) {
				return 1;
			}
			return 0;
		}

		if (*whatTestToRun == '3') {
			bool testNegativeIntResult = testFloatInput();
			if (testNegativeIntResult == 1) {
				return 1;
			}
			return 0;
		}

		else {
			cout << "Wrong test. choose 1, 2 or 3";
			return 1;
		}
	}
	else {
		cout << "No arguments found" << endl;
		return 1;
	}
}