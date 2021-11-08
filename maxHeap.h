/*
 * maxHeap.h
 *
 *  Created on: Nov 7, 2021
 *      Author: bcandre1
 */

#ifndef MAXHEAP_H_
#define MAXHEAP_H_
#include <string>
#include <vector>
#include "event.h"

using namespace std;
class maxHeap {
public:
	vector<int> extractDMG (string damage_type, std::vector<event> eventArray);
	void heapify (int damageArray[], int size, int root );
	void buildMaxHeap (int damageArray[], int size);
};
#endif /* MAXHEAP_H_ */
