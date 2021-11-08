/*
 * Event.h
 *
 *  Created on: Oct 15, 2021
 *      Author: bcandre1
 */

#ifndef EVENT_H_
#define EVENT_H_
#include <string>
using namespace std;
class event {
public:
		int year;
		string state;
		int event_id;
		string month_name;
		string event_type;
		char cz_type;
		string cz_name;
		int injuries_direct;
		int injuries_indirect;
		int deaths_direct;
		int deaths_indirect;
		int damage_property;
		int damage_crops;
		event();
};

#endif /* EVENT_H_ */
