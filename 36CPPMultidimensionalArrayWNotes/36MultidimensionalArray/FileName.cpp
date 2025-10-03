#include <iostream>
using namespace std;

int main() {
	int sally[2][3] = { {2, 3, 4},{8, 9, 10} };
	cout << sally[1][1];

	//The first array [2] means there are 2 rows in the array. 2 "{  }" and 
	//The second array [3] means there are 3 columns in the array so the elements in the arrays" { , , }
	//So  the output of 0,0 would be 2 while 1,1 would be 9. 1,1 is 9. 1,2 is 10. 0,1 is 3
	return 0;
}


