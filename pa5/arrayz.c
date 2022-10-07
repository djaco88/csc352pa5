/* Author: Jacob Davis 
Purpose: create a library for the arrayz.c file
*/
#include "arrayz.h"
#include <stdio.h>
 
// Return the sum of every element in values
long sum(long values[]){
  long sum = 0;

  for (int i = 1; i < values[0]; i++){
    sum += values[i];
  } 
  return sum;
}
 
// Return the index of the minimum value in values
long minil(long values[]){
  long min = 101;

  for (int i = 1; i < values[0]; i++){
    if (values[i] < min){
      min = values[i];
    }
  } 
 return min; 
}
 
// Return the index of the minimum value in values
long minid(double values[]){
  double min = 101;

  for (int i = 1; i < values[0]; i++){
    if (values[i] < min){
      min = values[i];
    }
  } 
 return (double) min; 
}
 
// Return the index of the maximum value in values
long maxil(long values[]){
  long max = -1;

  for (int i = 1; i < values[0]; i++){
    if (values[i] > max){
      max = values[i];
    }
  } 
 return max; 
}
 
// Return the index of the maximum value in values
long maxid(double values[]){
  double max = -1;

  for (int i = 1; i < values[0]; i++){
    if (values[i] > max){
      max = values[i];
    }
  } 
 return (long) max; 
}
 
// Print the elements in values
// Formatted as: length ARRAY_LENGTH array: EL1, EL2, ..., ELN
void printal(long values[]){
  printf("length %d array: ", (int) values[0]);
  if (values[0]>0){
    printf("%ld", values[1]);
  }
  for (int i = 1; i < values[0]; i++){
    printf(", %ld", values[i]);
  }
  printf("\n"); 
}
 
// Print the elements in values
// Formatted as: length ARRAY_LENGTH array: EL1, EL2, ..., ELN
void printad(double values[]){
  printf("length %d array: ", (int) values[0]);
  if (values[0]>0){
    printf("%lf", values[1]);
  }
  for (int i = 1; i < values[0]; i++){
    printf(", %lf", values[i]);
  }
  printf("\n"); 
}
 
// Return the mean (average) of the elements in values
// Note: return a double, the result may not be a whole number.
double mean(long values[]){
  long sum = 0;

  if (values[0] == 0){
    return 0;
  }
  for (int i = 1; i < values[0]; i++){
    sum += values[i];
  }
   return (double) (sum/values[0]); 
}
 
// Return the standard deviation of the elements in values
// If you don’t know what standard deviation is, or how to calculate it, see this site:
double sdev(long values[]){
  double meanVar = mean(values);
  double sumOfDevs = 0;
 
  if (values[0] == 0){
    return 0;
  }
  for (int i = 1; i < values[0]; i++){
    double temp = ((values[i] - meanVar) * (values[i] - meanVar));
    if (temp < 0){
      temp = temp * -1;
    }
    sumOfDevs += temp; 
  }
  return (double) (sumOfDevs / values[0]);
}
