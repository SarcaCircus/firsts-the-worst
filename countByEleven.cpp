#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

void main() {
	uint16_t count = 0;

	while (count <1000){
		count += 11;
		if(count<1000){
			if (count + 11 > 1000) {
				cout << count << endl;
			}
			else
			cout << count << ", ";
			}
	} 
	cout << count << endl;
}