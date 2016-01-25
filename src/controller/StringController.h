/*
 * StringController.h
 *
 *  Created on: Jan 25, 2016
 *      Author: tjar2074
 */

#ifndef CONTROLLER_STRINGCONTROLLER_H_
#define CONTROLLER_STRINGCONTROLLER_H_
#include <string>
using namespace std;

class StringController
{
private:
    string words;
public:
	StringController();
	void setString(string words);
	string getString();
	int stringStuff();
	void start();

};



#endif /* CONTROLLER_STRINGCONTROLLER_H_ */
