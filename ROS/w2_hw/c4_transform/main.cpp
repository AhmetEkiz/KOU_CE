// main.cpp

#include <vector>
#include "transform.h"
#include "Point.h"
#include <iostream>

using namespace std;

int main(){
	
	int a=0;  // number of point

	string point_1 = "18 29.1 73";
	string point_2 = "15.34 25 13.245";  
	string point_3 = "15.34 25.67 13.245 45.456"; // gives an error.
	string point_4 = "15.23 56.7879 "; // gives an error.
	string point_5 = "15.23 56.7879 0.58"; 

	// to store string pointss
	vector<string> string_point_vector;

	// to store returned points
	vector<Point> point_vector;
	Point point_123;

	// put string points on vector
	string_point_vector.push_back(point_1);
	string_point_vector.push_back(point_2);
	string_point_vector.push_back(point_3);
	string_point_vector.push_back(point_4);
	string_point_vector.push_back(point_5);

	// send points one-by-one to transform
	for (auto i = string_point_vector.begin(); i != string_point_vector.end(); ++i){
		// point_123 = transform(*i);
		// if (point_123 != 0){
		// 	cout << "aaa";
		// }
		// transform returns point
		point_vector.push_back(transform(*i));
	}

	cout << endl << "POINTS CONVERTING" << endl;
	// print points
	for (auto i = point_vector.begin(); i != point_vector.end(); ++i){
		cout << "-----POINT " << a << "------" << endl;
		Point point = *i;
		point.showInfos();
		a +=1;
	}
}