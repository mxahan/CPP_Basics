#include <iostream>
using namespace std;

int main() {

	char text[] = "Hello there! and not";

	int nchars = sizeof(text)-1;


  int  i = 0;

  char *pStart = text;
	char *pEnd = text + nchars - 1;
	while(pStart < pEnd) {

		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}


  cout << text <<endl;
  nchars--;

  while(i < nchars) {


    char temp = text[i];
		text[i]=text[nchars];
		text[nchars] = temp;

    i++;
    nchars--;

  }

  cout << text <<endl;


	return 0;
}
