#include <iostream> #include <iomanip> #include <cstdlib> #include <chrono>
using namespace std;
int main( ) {
// DECLARE VARIABLES
// PRINT THE HEADER OF THE PROGRAM // READ THE INPUT
// Start the chronograph to time the execution of the algorithm
// Reading the input is NOT part of the algorithm so the timer starts after reading the input auto start = chrono::high_resolution_clock::now();
// YOU NEED TO COMPLETE THIS PART OF CODE
// End the chronograph to time the execution of the algorithm auto end = chrono::high_resolution_clock::now();
// DISPLAY THE OUTPUT
// Print the elapsed time in seconds and fractions of seconds
// Displaying the output is NOT part of the algorithm so the timer ends before displaying the output int microseconds = chrono::duration_cast<chrono::microseconds>(end ­ start).count();
double seconds = microseconds / 1E6;
cout << "elapsed time: " << seconds << " seconds" << endl;
return EXIT_SUCCESS; }
