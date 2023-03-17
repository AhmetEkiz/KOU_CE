
#include <iostream>
#include <vector>

using namespace std;

int main(){

	string str_point_1 = "15.34 25.67 13.245";  // point 1
	string str_point_2 = "15.34 25 13.245";  // point 2
	string str_point_3 = "15.34 25.67 13.245 45.456";  // point 3
	string str_point_4 = "15.23 56.7879 ";  // point 4
	string str_point_5 = "4 7.5 99.4";  // point 5

	// define string vector
	vector<string> points;

	// add first point to the points vector
	points.push_back(str_point_1);
	points.push_back(str_point_2);
	points.push_back(str_point_3);
	points.push_back(str_point_4);
	points.push_back(str_point_5);

	cout << "------STARTED-------\n";
	cout << str_point_1 << endl;

	cout << "---PRINTING VECTOR---\n";

	// print vector
	for (auto i = points.begin(); i != points.end(); ++i)
		cout << "point" << ": " << *i << endl;

	
	return 0;
}