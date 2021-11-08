/*
 * csvRead.cpp
 *
 *  Created on: Oct 20, 2021
 *      Author: bcandre1
 */

using namespace std;
#include "csvRead.h"
#include <iostream>
#include "event.h"
#include <fstream>
std::vector<event> csvRead::csvReadIn (string fileName) {
	event tempEvent;
	char buffer[120];
	ifstream inFile(fileName, ios::in);
	string line;
	std::vector<event> eventArray;
	auto itr = eventArray.begin();
	cout << fileName << endl;
	getline(inFile,line); // skips header
	while(getline(inFile,line)) {
		char test[line.length()];
		int j = 0;
		int count = 0;
		for(int i=0;i<sizeof(test);i++) {
			test[i] = line[i];
		}
		//cout << test << endl;
		char * token = strtok(test, ",");
		do {
			if (j == 13) {
				j = 0;
			}
			//printf("token: %s \n", token);
			count++;
			//cout << "token:" << token << endl;
						if (j == 0) {
							tempEvent.event_id = atoi(token);
							//printf("event id: %s \n", token);
						}
						else if (j == 1) {
							tempEvent.state = token;
							//printf("state: %s \n", token);
						}
						else if (j == 2) {
							tempEvent.year = atoi(token);
							//printf("year: %s \n", token);
						}
						else if (j == 3) {
							tempEvent.month_name = token;
							//printf("month name: %s \n", token);
						}
						else if (j == 4) {
							tempEvent.event_type = token;
							//printf("event type: %s \n", token);
						}
						else if (j == 5 ) {
							tempEvent.cz_type = token[0];
							//printf("cz type: %s \n", token);
						}
						else if (j == 6) {
							tempEvent.cz_name = token;
							//printf("cz name: %s \n", token);
						}
						else if (j == 7) {
							tempEvent.injuries_direct = atoi(token);
							//printf("injuries direct: %s \n", token);
						}
						else if (j == 8) {
							tempEvent.injuries_indirect = atoi(token);
							//printf("injuries indirect: %s \n", token);
						}
						else if (j == 9) {
							tempEvent.deaths_direct = atoi(token);
							//printf("deaths direct: %s \n", token);
						}
						else if (j == 10) {
							tempEvent.deaths_indirect = atoi(token);
							//printf("deaths indirect: %s \n", token);
						}
						else if (j == 11) {
							int size = strlen(token);
							if(token[size-1] == 'M'){
								string damage = (string) token;
								damage = damage.substr(0,size-1);
								float damagecnv = atof(damage.data());
								damagecnv = damagecnv * 1000000;
								int damagecnv2 = (int) damagecnv;
								tempEvent.damage_property = damagecnv2;
								//cout << "damagecnv2: " << damagecnv2 << endl;
							}
							else  {
								string damage = (string) token;
								damage = damage.substr(0,size-1);
								float damagecnv = atof(damage.data());
								damagecnv = damagecnv * 1000;
								int damagecnv2 = (int) damagecnv;
								//cout << "damagecnv2: " << damagecnv2 << endl;
								tempEvent.damage_property = damagecnv2;
							}
							//tempEvent.damage_property = damagecnv2;
							//printf("damage property: %s \n", token);
						}
						else {
							tempEvent.damage_crops = atoi(token);
							printf("damage crops: %s \n", token);
						}
						j++;
 		}	while(token = strtok (NULL, ","));
		itr = eventArray.insert(itr,tempEvent);
		itr++;
	}
	return eventArray;
}
