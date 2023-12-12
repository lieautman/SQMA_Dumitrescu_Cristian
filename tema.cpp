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
		cout << "Exception thrown. Code:" << problemCode;
		return 1;
	}
	return 0;
}


int main(int argc, char** argv) {



	bool testMaxIntResult = testMaxInt();






	return 0;
}