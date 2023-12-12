#include <iostream>
using namespace std;


int MAXINT = 2147483647;

int funcToTestAddingTwoNums(int a, int b) {
	if (MAXINT - a < b)
		throw 1;
	return a + b;
}

bool testMaxInt() {
	try {
		funcToTestAddingTwoNums(MAXINT, MAXINT);
	}
	catch(int problemCode) {
		cout << "Exception thrown. Code:" + problemCode;
		return 1;
	}
	return 0;
}


int main(int argc, char** argv) {



	bool testMaxIntResult = testMaxInt();






	return 0;
}