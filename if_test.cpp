#include <iostream>

using namespace std;

int main(){
  const string passW = "hello";

  cout<<"enter Pass> "<< flush;

  string input;
  cin>>input;

  int knowpass = 0;

  if (input==passW){
    cout<< "password accept "<< endl;
  }
  else{
    cout<<"wrong "<<endl;
    cout<<"want to know pass > "<<flush;
    cin >> knowpass;
  }

  cout<<"passknow condition  "<<knowpass<< endl;

  string finalL = "finally got it";

  if (knowpass==1){
    do{
          cout<<"Reenter pass  "<<flush;
          cin>>input;

          if (input!=passW){
            cout<<"wrong pass > "<<endl;
          }

          cout<<"want to cont.. "<<flush;
          cin>> knowpass;

          if (knowpass!=1){
            finalL="No passward for you..";
            break;
          }

    }while(input!=passW);


    cout<<finalL<<endl;
    return 0;
  }

  return 0;
}
