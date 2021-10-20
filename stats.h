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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <This function prints the element of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which is going to print>
 * @param  <length>  <length of given array>
 *
 * @return <There is no return value for this function>
 */
void print_array(unsigned char* arr, unsigned int length);

/**
 * @brief <This function sorts the element of given array from maximum to minimum>
 *
 *
 * @param  <arr>     <unsigned char type array, which is going to be sorted>
 * @param  <length>  <length of given array>
 *
 * @return <There is no return value for this function>
 */
void sort_array(unsigned char* arr, unsigned int length);

/**
 * @brief <This function finds the median of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which the median of it will be returned>
 * @param  <length>  <length of given array>
 *
 * @return <median of given array>
 */
float find_median(unsigned char* arr, unsigned int length);

/**
 * @brief <This function finds the mean of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which the mean of it will be returned>
 * @param  <length>  <length of given array>
 *
 * @return <mean of given array>
 */
float find_mean(unsigned char* arr, unsigned int length);

/**
 * @brief <This function finds the maximum element value of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which the maximum of it will be returned>
 * @param  <length>  <length of given array>
 *
 * @return <maximum element of given array>
 */
int find_maximum(unsigned char* arr, unsigned int length);

/**
 * @brief <This function finds the minimum element value of given array>
 *
 *
 * @param  <arr>     <unsigned char type array, which the minimum of it will be returned>
 * @param  <length>  <length of given array>
 *
 * @return <minimum element of given array>
 */
int find_minimum(unsigned char* arr, unsigned int length);

/**
 * @brief <This function prints the maximum element, minimum element, 
 *                              mean and median of given array>
 *
 * @param  <arr>     <unsigned char type array, which specific properties of it will be printed>
 * @param  <length>  <length of given array>
 *
 * @return <There is no return value for this function>
 */
void print_statistics(unsigned char* arr, unsigned int length);

#endif /* __STATS_H__ */
