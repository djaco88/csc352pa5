/* Author: Jacob Davis
Purpose: create a library for the arrayz.c file
*/

// Return the sum of every element in values
long sum(long values[]);

// Return the index of the minimum value in values
long minil(long values[]);

// Return the index of the minimum value in values
long minid(double values[]);

// Return the index of the maximum value in values
long maxil(long values[]);

// Return the index of the maximum value in values
long maxid(double values[]);

// Print the elements in values
// Formatted as: length ARRAY_LENGTH array: EL1, EL2, ..., ELN
void printal(long values[]);

// Print the elements in values
// Formatted as: length ARRAY_LENGTH array: EL1, EL2, ..., ELN
void printad(double values[]);

// Return the mean (average) of the elements in values
// Note: return a double, the result may not be a whole number.
double mean(long values[]);

// Return the standard deviation of the elements in values
// If you don’t know what standard deviation is, or how to calculate it, see this site:
double sdev(long values[]);
