/*
 * maxHeap.cpp
 *
 *  Created on: Nov 7, 2021
 *      Author: bcandre1
 */

#include "maxHeap.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<int> extractDMG (string damage_type, std::vector<event> eventArray) {  //extracts the damage numbers and puts into an int array

	vector<int> damageArray;
	if (damage_type == "damage_property") {
			for (int i=0; i < eventArray.size();i++) {
				damageArray[i] = eventArray.at(i).damage_property;
			}
	}
	else {
		for (int i=0; i < eventArray.size();i++) {
			damageArray[i] = eventArray.at(i).damage_crops;
		}
	}
	return damageArray;
}

void heapify (int damageArray[], int size, int root ) { //heapify
	int largest = root;
	int left = 2 * root + 1;
	int right = 2 * root + 2;

	if (left < size && damageArray[left] > damageArray[largest]) {
		largest = left;
	}
	if (right < size && damageArray[right] > damageArray[largest] ){
		largest = right;
	}
	if (largest != root) {
		swap(damageArray[root], damageArray[largest]);
		heapify(damageArray, size, largest);
	}

}

void buildMaxHeap (int damageArray[], int size) { //build max heap
	int index = (size - 2) - 1;

	for(int i = index; i >= 0; i--) {
		heapify(damageArray, size, i);
	}
}


