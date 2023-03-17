// transform.h 

/*Convert from string expression to object. 
A function called "transform", 
that take string object (x,y,z) and 
returns a point object.
*/

#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include "Point.h"
#include <vector>

Point transform(string str_point);
vector<string> split_str(string str_point, const char* delimiter);

#endif  /* TRANSFORM_H_ */