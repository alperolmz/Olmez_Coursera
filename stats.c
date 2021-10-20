/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * File Name: stats.c
 * File Description: This file contains some functions
 *                   on arrays.
 * Author Name: Alper Ölmez
 * Date:        20.10.2021
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_array(test, SIZE);
  sort_array(test, SIZE);
  print_statistics(test, SIZE);
}

/**
 * @brief <This function prints the maximum element, minimum element, 
 *                              mean and median of given array>
 *
 * @param  <arr>     <unsigned char type array, which specific properties of it will be printed>
 * @param  <length>  <length of given array>
 *
 * @return <There is no return value for this function>
 */
void print_statistics(unsigned char* arr, unsigned int length)
{
  float median, mean = 0;
  int maximum = 0, minimum = 0;

  minimum = find_minimum(arr, length);
  printf("Minimum element of array is %d \n", minimum);
  maximum = find_maximum(arr, length);
  printf("Maximum element of array is: %d \n", maximum);
  mean = find_mean(arr, length);
  printf("Mean of array is: %f \n", mean);
  median = find_median(arr, length);
  printf("Median of array is: %f \n", median);
}

/**
 * @brief <This function prints the element of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which is going to print>
 * @param  <length>  <length of given array>
 *
 * @return <There is no return value for this function>
 */
void print_array(unsigned char* arr, unsigned int length)
{
  int i = 0;
  for(i; i < length; i++)
  {
    printf("%d th element of array is: %d \n", i,arr[i]);
  }
}

/**
 * @brief <This function finds the median of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which the median of it will be returned>
 * @param  <length>  <length of given array>
 *
 * @return <median of given array>
 */
float find_median(unsigned char* arr, unsigned int length)
{
  int i = 0, minimumIndex, temp, medianIndex, median;
  unsigned char tempArr[length];
  for(; i <length; i++)
  {
    minimumIndex = i;
    for(int j = i+1; j<length; j++)
    {
      if(arr[minimumIndex] > arr[j])
      {
        minimumIndex = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[minimumIndex];
    arr[minimumIndex] = temp;
  }
  if(length % 2 != 0)
  {
    medianIndex = ((length-1) / 2);
    median = arr[medianIndex];
    return median;
  }
  else
  {
    medianIndex = (length / 2);
    median = (arr[medianIndex-1] + arr[medianIndex]) / 2;
    return median;
  }
}

/**
 * @brief <This function sorts the element of given array from maximum to minimum>
 *
 *
 * @param  <arr>     <unsigned char type array, which is going to be sorted>
 * @param  <length>  <length of given array>
 *
 * @return <There is no return value for this function>
 */
void sort_array(unsigned char* arr, unsigned int length)
{
  int i = 0, maximumIndex, temp;
  for(; i <length; i++)
  {
    maximumIndex = i;
    for(int j = i+1; j<length; j++)
    {
      if(arr[maximumIndex] < arr[j])
      {
        maximumIndex = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[maximumIndex];
    arr[maximumIndex] = temp;
  }
  printf("Sorted from maximum to minimum array elements are listed below:\n");
  print_array(arr, length);
}

/**
 * @brief <This function finds the mean of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which the mean of it will be returned>
 * @param  <length>  <length of given array>
 *
 * @return <mean of given array>
 */
float find_mean(unsigned char* arr, unsigned int length)
{
  int i = 0, sumOfElements = 0, mean;
  for(; i < length; i++)
  {
    sumOfElements += arr[i];
  }
  mean = (sumOfElements / length);
  return mean;
}

/**
 * @brief <This function finds the maximum element value of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which the maximum of it will be returned>
 * @param  <length>  <length of given array>
 *
 * @return <maximum element of given array>
 */
int find_maximum(unsigned char* arr, unsigned int length)
{
  int i = 0;
  int maximum = arr[0];
  for(; i < length; i++)
  {
    if(maximum < arr[i])
    {
      maximum = arr[i];
    }
  }
  return maximum;
}

/**
 * @brief <This function finds the minimum element value of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which the minimum of it will be returned>
 * @param  <length>  <length of given array>
 *
 * @return <minimum element of given array>
 */
int find_minimum(unsigned char* arr, unsigned int length)
{
  int i = 0;
  int minimum = arr[0];
  for(; i < length; i++)
  {
    if(minimum > arr[i])
    {
      minimum = arr[i];
    }
  }
  return minimum;
}