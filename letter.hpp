/******************************************************************************* 
** Author:       Areeb Siddiqui 
** Date:         July 2, 2019
** Assignment:   Lab 2
** Description:  Implement a program that reads a file filled with letters, counts
the letter frequencies in the file, and write the results to a new file. 
*******************************************************************************/ 

#ifndef LETTERHPPFILE
#define LETTERHPPFILE

#include <iostream>
#include <fstream>
#include <string>

void count_letters(std::ifstream &, int*);
void output_letters(std::ofstream &, int*);

#endif