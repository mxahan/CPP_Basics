#include <iostream>
#include <math.h>
using namespace std;

int search_arr(float val[], int i, int j);


int main(){
  float val1[] = {-1,1, 1, 2, 5, 13, 14,15};
  int i = 1;
  int j = sizeof(val1)/sizeof(val1[0]);
  int res_search;
  res_search =  search_arr (val1, i, j);
  cout<<res_search<<endl;
  return 0;
}


int search_arr(float val2[], int i, int j)
{
  int m =  floor((i+j)/2);
  if (val2[m-1]==m)
    return m;
  if (val2[m-1]<m)
    i = m+1;
  if (val2[m-1]>m)
    j = m-1;
  if (i>j)
    return 0;
  else
    return search_arr (val2, i, j);
}
