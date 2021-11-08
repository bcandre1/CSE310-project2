
/*
 * Event.cpp
 *
 *  Created on: Oct 15, 2021
 *      Author: bcandre1
 */
//Event is an object that contains all details of a given "event" in the .csv file.
using namespace std;

#include "event.h"
#include <string>
#include <iostream>
		//g for global variable


	event::event()  { //event object constructor
		year = 0;
		state = "";
		event_id = 0;
		month_name =  "";
		event_type = "";
		cz_type = 0;
		cz_name = "";
		injuries_direct = 0;
		injuries_indirect = 0;
		deaths_direct = 0;
		deaths_indirect = 0;
		damage_property = 0;
		damage_crops = 0;

	}
	//event& operator=(const event& value){return *this;};

string getCZtype (char cz_type) { //function to return the cz type as it should be rather than a char
	string cztypecnv = "";
	if (cz_type == 'C' || 'c') {
		cztypecnv = "County/Parish";
	}
	else if (cz_type == 'Z' || 'z') {
		cztypecnv = "Zone";
	}
	else {
		cztypecnv = "Marine";
	}
return cztypecnv;
}

