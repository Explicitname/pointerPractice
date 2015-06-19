#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

string Hex(void* p) {

stringstream stream;

stream << hex << setfill('0') << setw(8) << (long) p << ends;

return stream.str();

}

void Exercise1() {

cout << "Exercise 1" << endl << endl;
stringstream outPut;
int x = 2;
int y = 8;
int* p = &x;
int* q = &y;
cout << "The Value of X is: " << x << endl
		<< "The Address of X is: " << Hex(&x) << endl

		<< "The Value of P is: " << Hex(p) << endl
		<< "The Value of *P is: " << *p << endl

		<< "The Value of Y is: " << y << endl
		<< "The Address of Y is: " << Hex(&y) << endl

		<< "The Value of Q is: " << Hex(q) << endl
		<< "The Value of *Q is: " << *q << endl;


cin.ignore();
cout << "Exercise 1 Complete" << endl;

}


int main()
{

Exercise1();









	return 0;
}
