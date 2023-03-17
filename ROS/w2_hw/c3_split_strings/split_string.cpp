// main.cpp

#include <vector>
#include <cstring>
#include <iostream>

using namespace std;

int main(){
	
	char point_1[] = "18 29.1 73";
	char delim[] = " ";
	vector<string> splitted_point_vector;  // to store splitted strings

	/// -------SPLITTING-----------
	// break the string when it encounters empty space
  	// str = quote, delim = " "
  	char* word = strtok(point_1, delim);

	// loop until strtok() returns NULL
  	while (word){
		
		// add word to the vector
		splitted_point_vector.push_back(word);
		// NULL indicates we are using the same pointer we used previously i.e. quote
		word = strtok(NULL, delim);

	}
	// --------END SPLITTING-----------

	// print vector
	for (auto i = splitted_point_vector.begin(); i != splitted_point_vector.end(); ++i)
		cout << "splitted" << ": " << *i << endl;
}