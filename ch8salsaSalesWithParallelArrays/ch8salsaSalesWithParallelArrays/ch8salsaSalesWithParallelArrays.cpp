// ch8salsaSalesWithParallelArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes
// This function displays the menu
void displaySales(string salsaNames[], int salsaSales[], int size);

// This function displays the total sales
void displayTotalSales(int salsaSales[], int size);

// This function displays the highest selling salsa
int findHighest(int salsaSales[], int size);

// This function displays the lowest selling salsa
int findLowest(int salsaSales[], int size);

int main()
{
	// Declare and initialize the parallel arrays
	std::string salsaNames[5] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
	int salsaSales[5] = { 0 };
	
	// Display the highest selling salsa
	cout << "The highest selling salsa is " << salsaNames[findHighest(salsaSales, 5)] << endl;
	
	// Display the lowest selling salsa
	cout << "The lowest selling salsa is " << salsaNames[findLowest(salsaSales, 5)] << endl;
	
	
    std::cout << "Chapter 8 Salsa Sales with Parallel Arrays by Kevin Bell\n";
	std::cout << "Enter the number of jars sold for each salsa type.\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << salsaNames[i] << ": ";
		std::cin >> salsaSales[i];
	}
	cout << endl;
	// Display the sales report
	displaySales(salsaNames, salsaSales, 5);
	
	cout << endl;
	// Display the total sales
	displayTotalSales(salsaSales, 5);

	// Display the highest selling salsa
	cout << "The highest selling salsa is " << salsaNames[findHighest(salsaSales, 5)] << endl;

	// Display the lowest selling salsa
	cout << "The lowest selling salsa is " << salsaNames[findLowest(salsaSales, 5)] << endl;
	
	// Display the highest selling salsa
	std::cout << "The highest selling salsa is " << salsaNames[findHighest(salsaSales, 5)] << ".\n";
	
	// Display the lowest selling salsa
	std::cout << "The lowest selling salsa is " << salsaNames[findLowest(salsaSales, 5)] << ".\n";


	
	system("pause");
	return 0;
} // end main

// 4 functions

// 1. Display the sales report
void displaySales(string salsaNames[], int salsaSales[], int size)
{
	std::cout << "Salsa Sales Report\n\n";
	std::cout << "Salsa Type\t\tJars Sold\n";
	for (int i = 0; i < size; i++)
	{
		std::cout << salsaNames[i] << "\t\t\t" << salsaSales[i] << endl;
	} // end for
} // end displaySales

// 2. Find the highest selling salsa
	
	int findHighest(int salsaSales[], int size)
	{
		int highest = salsaSales[0];
		for (int i = 1; i < size; i++)
		{
			if (salsaSales[i] > highest)
				highest = salsaSales[i];
		} // end for
		return highest;
	} // end findHighest
	
// 3. Find the lowest selling salsa

	int findLowest(int salsaSales[], int size)
	{
		int lowest = salsaSales[0];
		for (int i = 1; i < size; i++)
		{
			if (salsaSales[i] < lowest)
				lowest = salsaSales[i];
		} // end for
		return lowest;
	} // end findLowest
	
	
// 4. Display the total sales

	void displayTotalSales(int salsaSales[], int size)
	{
		int total = 0;
		for (int i = 0; i < size; i++)
		{
			total += salsaSales[i];
		} // end for
		std::cout << "Total Sales: " << total << endl;
	} // end displayTotalSales