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
//#include <string.h>
//#include <stdio.h>
void csvRead::csvReadIn (string fileName) {
	//event tempEvent = new event;

	//then read in each part and add to array?
	int* temp = NULL; //pointer for array?
	int arraySize = 0;
	//char delimiter = ','; //for showing the split up values in the CSV
	char buffer[120];
	ifstream inFile(fileName, ios::in);
	string line;
	cout << fileName << endl;
	while(getline(inFile,line)) {
		char test[line.length()];
		int i;
		int count = 0;
		for(int i=0;i<sizeof(test);i++) {
			test[i] = line[i];
		}
		char * token = strtok(test, ",");
		do {
			if (i == 13) {
				i = 0;
			}
			//printf("token: %s \n", token);
			count++;
						if (i == 0) {
							//tempEvent.event_id = token;
							printf("event id: %s \n", token);
						}
						else if (i == 1) {
							//tempEvent.state = token;
							printf("state: %s \n", token);
						}
						else if (i == 2) {
							//tempEvent.year = token;
							printf("year: %s \n", token);
						}
						else if (i == 3) {
							//tempEvent.month_name = token;
							printf("month name: %s \n", token);
						}
						else if (i == 4) {
							//tempEvent.event_type = token;
							printf("event type: %s \n", token);
						}
						else if (i == 5 ) {
							//tempEvent.cz_type = token;
							printf("cz type: %s \n", token);
						}
						else if (i == 6) {
							//tempEvent.cz_name = token;
							printf("cz name: %s \n", token);
						}
						else if (i == 7) {
							//tempEvent.injuries_direct = token;
							printf("injuries direct: %s \n", token);
						}
						else if (i == 8) {
							//tempEvent.injuries_indirect = token;
							printf("injuries indirect: %s \n", token);
						}
						else if (i == 9) {
							//tempEvent.deaths_direct = token;
							printf("deaths direct: %s \n", token);
						}
						else if (i == 10) {
							//tempEvent.deaths_indirect = token;
							printf("deaths indirect: %s \n", token);
						}
						else if (i == 11) {
							//tempEvent.damage_property = token;
							printf("damage property: %s \n", token);
						}
						else {
							//tempEvent.damage_crops = token;
							printf("damage crops: %s \n", token);
						}
						i++;


		}	while(token = strtok (NULL, ","));

	}
}
