/*
 * csvRead.h
 *
 *  Created on: Oct 20, 2021
 *      Author: bcandre1
 */


#ifndef CSVREAD_H_
#define CSVREAD_H_
#include <string>
#include "event.h"
#include <vector>
using namespace std;
class csvRead {
public:
	 std::vector<event> csvReadIn(string);
};


#endif /* CSVREAD_H_ */
