# include <iostream>

using namespace std;

void manipulate(double *pvalue){
  cout <<"value of double in manipulate"<<*pvalue<<endl;
  *pvalue = 10.0;
  cout <<"df value of double in manipulate"<<*pvalue<<endl;

}


int main(){
  int nvalue = 8;
  int *pnvalue = &nvalue;

  cout<<"int value "<< nvalue<< endl;
  cout<<"pointer value"<< pnvalue<<endl;

  cout<<"int value via pointer"<<*pnvalue<<endl;

  double dvalue = 123.4;

  cout<<"1.value "<<dvalue<<endl;
  manipulate(&dvalue);
  cout<<"after df dvalue"<<dvalue<<endl;

  return 0;
}
