/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: tjar2074
 */

#include "StringController.h"
#include <iostream>
#include <string>

using namespace std;

StringController :: StringController()
{
    this->words = "";

}

void StringController :: setString(string words)
{
	this->words = words;
}

string StringController :: getString()
{
	return this->words;
}

int StringController :: stringStuff()
{
	std::string tempWords;
	int length = 0;
	length = tempWords.length();
	std::cout << "size of string is " << length << " letters";
	return 0;
//	string tempWords = words.append("empty()");
//	cout << tempWords[0] << endl;
}

void StringController :: start()
{
	cout << getString() << " is the string right now " << endl;
	cout << "Type in a new Value for string please" << endl;
	string tempWords;
	setString(tempWords);
	stringStuff();



}


