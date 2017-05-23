#include <iostream>
#include <stdlib.h>
using namespace std;

void calculateFibonacci(unsigned int input) {
   
   unsigned long long previousValue = 0;
   unsigned long long currentValue = 1;
   unsigned long long nextValue = 0;
   
   for(int i = 2; i <= input; i++) {
   	  nextValue = previousValue + currentValue;
      previousValue = currentValue;
      currentValue = nextValue;
   }

   cout << nextValue << endl;
}

int main(int argc, char *argv[]){
	unsigned int i = atoi( argv[1] );
	calculateFibonacci(i);
	return 0;
}