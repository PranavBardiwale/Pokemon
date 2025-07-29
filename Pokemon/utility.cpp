#include "utility.h"
#include<iostream>
#include<limits>
using namespace std;

void utility::clearConsole() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}

void utility::waitForEnter() {
	cin.get();
}

void utility::clearInputBuffer(){
}