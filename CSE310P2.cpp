//============================================================================
// Name        : CSE310P2.cpp
// Author      : me
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
//#include <bst.h>
#include <string>
#include "csvRead.h"
#include "event.h"
#include <vector>
#include "maxHeap.h"
using namespace std;





int main() { //write for parameter usage?
	string fileName ("details-1950.csv");
	csvRead read;
	int year;
	maxHeap heap;
	std::vector<event> eventArray1950;
	std::vector<event> eventArray1951;
	std::vector<event> eventArray1952;
	std::vector<event> eventArray1953;
	std::vector<event> eventArray1966;
	std::vector<event> eventArray1996;

	year = 1950;
	if(year == 1950) {
		string fileName ("details-1950.csv");
		eventArray1950 = read.csvReadIn(fileName);
	}
	else if (year == 1951) {
		string fileName ("details-1951.csv");
		eventArray1951 = read.csvReadIn(fileName);
	}
	else if (year == 1952) {
		string fileName ("details-1952.csv");
		eventArray1952 = read.csvReadIn(fileName);
	}

	else if (year == 1966) {
		string fileName ("details-1966.csv");
		eventArray1966 = read.csvReadIn(fileName);
	}
	else if (year == 1996){
		string fileName ("details-1996.csv");
		eventArray1996 = read.csvReadIn(fileName);
	}
	vector<int> p;
	string temp = "damage_property";
	//p = heap.extractDMG(temp, eventArray1950);
	return 0;

}








//Junk code here ignore















//void query(string dataType, int year) {
	//if ()
//}

//Event findEvent (int event_id) {
	//bst? (follow the index into the array of storm events?)
//}

//int maxDamage (int year, string damage_type, int n) { //Find how to incorparate these methods into parameters correctly
	//n is an integer < 50?
	//Find how to build a max heap for this
//}

//int maxFatality (int year, int n) {
	//n is the same as before
	//heap
//}
/*int range (int year, string field_name, string low, string high) { //THIS IS THE ONLY ONE YOU NEED FOR THE MILESTONE!! THIS PLUS THE PRINT OUT THE BST AS IT WORKS.
			if (field_name == "state") {

			}
			else { //field_name = month_name

			}
	//bst for this one

}*/
