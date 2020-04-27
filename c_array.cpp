#include <iostream>
using namespace std;

int main(){
  cout<<"Array"<<endl;

  int values[3];

  values[0]= 56;
  values[1]= 125;
  values[2]= 20;

  cout<<values[0]<<endl;


  double numbers[4]={1.2, 2.69,3.0,5.56};

  for (int i=0; i<4; i++){
    cout<<"elements  "<<numbers[i]<<endl;
  }


  int numa[8]={};

  for (int i=0; i<8; i++){
    cout<< "inti  "<< i<<"  :  "<<numa[i]<<endl;
  }


  string numal[]={"apple","orange","banana"};

  for (int i=0; i<3; i++){
    cout<< "inti  "<< i<<"  :  "<<numal[i]<<endl;
  }

  string anim[][3]={{"cat", "dog", "bird"},{"lion", "tiger","bear"}};

  for (int i=0; i<2; i++){
    for (int j=0; j<3; j++){
      cout<<anim[i][j]<<" : "<<flush;
    }
    cout<<endl;
  }

  int values1[] = {4, 7, 3, 4};

	cout << sizeof(values1) << endl;
	cout << sizeof(int) << endl;

	for(unsigned int i=0; i < sizeof(values1)/sizeof(int); i++) {
		cout << values1[i] << " " << flush;
	}

	cout << endl;


  for(unsigned int i=0; i< sizeof(anim)/sizeof(anim[0]); i++) {

    for(unsigned int j=0; j< sizeof(anim[0])/sizeof(string); j++) {
      cout << anim[i][j] << " " << flush;
    }

    cout << endl;
  }

  return 0;
}
