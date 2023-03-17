## BLM615 Özerk Robotlar - ROS - Week 2 Homework

- Define a class named `point` in the nokta.cpp and nokta.h files.

- The `point` class consists of **x, y, z** member variables.

- Convert from string expression to object. A function called "transform", that take string object (**x,y,z**) and returns a point object.
  
  - This must be outside of main() function. This function must be in `donustur.cpp` file.

- Write a **CMakeLists.txt** file that can compile main and other files.

- In main() function
  
  - string nokta1 = "15.34 25.67 13.245";  ( donustur fonksiyonu --> nokta.x=15.34 , nokta.y =25.67, nokta.z=12.245 çevirmeli)
  
  - string nokta2 = "15.34 25 13.245"; //sorun yok fakat . nokta yok
  
  - string nokta3 = "15.34 25.67 13.245 45.456"; //hatalı durum
  
  - string nokta4 = "15.23 56.7879 "; //hatalı durum.
  
  - değişken tanımlaması yapılabilir.

- Let a vector store point objects.  ( vector<int> g1; ) If string doesn't meet the requirements (like nokta3 and nokta4) you cannot convert the string to object. So maybe you send 8 string object to function and it will return only 5 point object..

## Files

- **c1_string_vector** : add strings to string vector and print them all.
- **c2_classes :** implementation of classes.
- **c3_split_strings:** splitting strings and put on vector with `strtok()`
- **c4_transform:** splitting string function implementation

# How to Compile

```bash
g++ main.cpp -o main.exe

# -----------C1_STRING_VECTOR-----------
# to compile c1_string_vector
cd c1_string_vector
g++ c1_string_vector.cpp -o c1_string_vector

# -----------C2_CLASSES-----------
# to compile c2_classes codes
cd c2_classes
# Compiles the source file Point.cpp
# --> object file Point.o
g++ -c Point.cpp
# Links the object file containing the implementation of Point
# to the compiled, object version of main.cpp
# and then produces the final executable main.exe
g++ main.cpp Point.o -o main.exe   
# to run 
main.exe

# -----------C3_SPLIT_STRING-----------
cd c3_split_strings
g++ .\\split_string.cpp -o split_string.exe

# -----------C4_TRANSFORM-----------
cd c4_transform
g++ -c Point.cpp 
g++ -c transform.cpp
g++ main.cpp Point.o transform.o -o main.exe  
main.exe
```
