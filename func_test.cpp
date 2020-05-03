#include <iostream>
using namespace std;

void showmenu(){
  cout << "1. do one"<<endl;
  cout << "2. go next"<<endl;
  cout << "3. Final step"<<endl;
}

int getinput(){
  int input;
  cin>>input;

  return input;

}

void processing(int option){
  switch(option){
    case 1:
      cout << "option 1"<<endl;
      break;
    case 2:
      cout << "option 2"<<endl;
      break;
    case 3:
      cout << "option 3"<<endl;
      break;
    default:
      cout<< "out of option"<<endl;
    }
}

int main(){
  showmenu();
  int input = getinput();
  processing(input);


  return 0;
}
