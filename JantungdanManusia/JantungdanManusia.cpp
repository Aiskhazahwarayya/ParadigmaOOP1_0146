#include <iostream>
#include <string>
using namespace std;

#include "JantungHeader.h"
#include "ManusiaHeader.h"

int main() {
	manusia* varManusia = new manusia("jona");
	delete varManusia;
	return 0;
}


