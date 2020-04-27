#include <iostream>
using namespace std;

int main() {

  int count = 10;

	for (int i = 0; i < count; i++) {

    if (i==3){
      continue;
    }
    cout << "counting till " <<count<<" mind a gap " <<i << endl;
	}

	return 0;
}
