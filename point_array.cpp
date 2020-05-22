# include <iostream>

using namespace std;


int main(){
  string txt[]={"one", "two", "three"};
  string *ptxt = txt;

  cout << sizeof(txt) <<endl;
  ptxt = ptxt;
  cout << *ptxt <<endl;

  for (int i = 0; i<sizeof(txt)/sizeof(string);i++){
    cout<<txt[i]<< " "<<flush;
  }

  for (int i = 0; i<sizeof(txt)/sizeof(string);i++, ptxt++){
    cout<<*ptxt<< " "<<flush;
  }


  return 0;
}
