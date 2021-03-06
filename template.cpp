// =============================================================================
// file: squarefeet.cpp
// =============================================================================
// Programmer: Brian Alexander
// Date: 09/15/2018
// Class: CSCI 123 ("Intro to Programming Using C++")
// Time: MW 04:30pm
// Instructor: Mr. Edwards
// Project: SquareFeet
//
// Description:
//      This program is used to caculate the square footage for a house given
//      The number of rooms.  The user is prompted for a positive integer, which
//      is used as an upper bound for a loop.  The loop prompts users for two
//      doubles which represent the length and width of the room.  The dimensions
//      are then multiplied together and a running sum is tabulated.  The sum is
//      then returned to the user as the total square footage.
//
// =============================================================================

#include <iostream>
using namespace std;

// function prototypes


// ==== main ===================================================================
//
// =============================================================================
int main() 
{
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);
	return 0;
}  // end of "main"



// ==== CalcSquareFeet =========================================================
//
// This function calculates the sum from one to the limit parameter
// (inclusive), then returns the value to the caller.
//
// Input:
//      numRooms[IN]  -- an integer value containing the number of rooms in 
//                     the persons home.  Used for loop iteration counter.
//
// Output:
//      The total sum of all area for all rooms in the house in square feet.
//
// =============================================================================

double CalcSquareFeet(int numRooms)
{

} // end of CalcSquareFeet



// ==== CalcArea ===============================================================
//
// This function calculates the sum from one to the limit parameter
// (inclusive), then returns the value to the caller.
//
// Input:
//      length [IN]  -- a double representing the length of one side of a 
//                     room.
//
//      width [IN]  -- a double representing the other length of a room.
//
// Output:
//      The product of the two sides a room as area in square feet.
//
// =============================================================================

double CalcArea(double length, double width)
{
} // end of CalcArea
