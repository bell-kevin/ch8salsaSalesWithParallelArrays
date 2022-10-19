// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


int findHighest(int salsaSales[], int size);
int findLowest(int salsaSales[], int size);
int findTotal(int salsaSales[], int size);
//get sales for each salsa
void getSalsaSales(int salsaSales[], int size);
std::string salsaNames[5] = { "Mild", "Medium", "Sweet", "Hot", "Zesty" };
int main()
{
	std::cout << "Ch 8 Salsa Sales with Parallel Arrays by Kevin Bell\n";
	int salsaSales[5] = { 0 };
	std::cout << "Enter the number of jars sold last month for each salsa type.\n";
	getSalsaSales(salsaSales, 5);
	std::cout << std::endl;
	std::cout << "Salsa Sales Report\n\n";
	std::cout << "Type\t\tJars Sold\n";
	std::cout << "--------------------------\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << salsaNames[i] << "\t\t" << salsaSales[i] << std::endl;
	} // end for
	std::cout << std::endl;
	// total sales
	std::cout << "Total Sales: " << findTotal(salsaSales, 5) << std::endl;
	// Display the highest selling salsa
	std::cout << "The highest selling salsa is " << salsaNames[findHighest(salsaSales, 5)] << std::endl;
	// Display the lowest selling salsa
	std::cout << "The lowest selling salsa is " << salsaNames[findLowest(salsaSales, 5)] << std::endl;
	system("pause");
	return 0;
} // end main

// Find the highest selling salsa
int findHighest(int salsaSales[], int size)
{
	int highest = 0;
	for (int i = 0; i < size; i++)
	{
		if (salsaSales[i] > salsaSales[highest])
		{
			highest = i;
		} // end if
	} // end for
	return highest;
} // end findHighest

// Find the lowest selling salsa
int findLowest(int salsaSales[], int size)
{
	int lowest = 0;
	for (int i = 0; i < size; i++)
	{
		if (salsaSales[i] < salsaSales[lowest])
		{
			lowest = i;
		} // end if
	} // end for
	return lowest;
} // end findLowest

//total sales
int findTotal(int salsaSales[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += salsaSales[i];
	} // end for
	return total;
} // end findTotal

//get sales for each salsa
void getSalsaSales(int salsaSales[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << "Enter the number of jars sold for " << salsaNames[i]  << ": ";
		std::cin >> salsaSales[i];
		while (salsaSales[i] < 0)
		{
			std::cout << "Invalid entry. Enter a positive number: ";
			std::cin >> salsaSales[i];
		} // end while
	} // end for
} // end getSalsaSales
