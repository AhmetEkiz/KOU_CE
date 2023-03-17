// transform.cpp 

/*Convert from string expression to object. 
A function called "transform", 
that take string object (x,y,z) and 
returns a point object.
*/

#include "Point.h"
#include "transform.h"
#include <vector>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;

Point transform(string str_point){
	/*
	Args:
		str_point : a string with x y z 
	Returns:
		Point Class Vector
	*/

	//to store results
	Point point;

	// split point string to the 3 point axes
	vector<string> splitted_point_vector = split_str(str_point, " ");

	// if there are 3 axes, find dots
	if (splitted_point_vector.size() == 3){
		// convert strings to float
		point.x = stof(splitted_point_vector[0]); // save the element
		point.y = stof(splitted_point_vector[1]);
		point.z = stof(splitted_point_vector[2]);

		// to test
		cout << "Point converted:" << endl;
		point.showInfos();
	}

	else{
		cout << "There is " << splitted_point_vector.size() << " points." << endl;
		
		// to test
		cout << "Point is not converted !" << endl;
	}

	return point;
};

vector<string> split_str(string str_point, const char* delimiter){
	/* Split strings with char delimiter
	Args:
		str_point: string 
		delimeter : a const char pointer to split string
	Returns:
		string vector for seperated strings
	*/
	// to store splitted strings
	vector<string> splitted_point_vector;

	// convert string to char array because strtok gives error
	// https://www.geeksforgeeks.org/convert-string-char-array-cpp/
	char *char_point = new char [str_point.length() + 1];
	strcpy(char_point, str_point.c_str());

	/// -------SPLITTING-----------
	// break the string when it encounters empty space
  	char* word = strtok(char_point, delimiter);

	// loop until strtok() returns NULL
  	while (word){
		
		// add word to the vector
		splitted_point_vector.push_back(word);
		// NULL indicates we are using the same pointer we used previously i.e. quote
		word = strtok(NULL, delimiter);

	}

	return splitted_point_vector;

};
