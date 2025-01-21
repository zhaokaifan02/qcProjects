#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{  
  ifstream input("geom.dat");
  if(!input)
  {
    cout<<"open fail!!"<<endl;
    return 0;
  }
  string line; //create string ds

  //read file line by line
  while(getline(input,line))
  {
    //if line can be read, then in the loop
    
    cout<<line<<endl;
  }
  input.close();
//这个坐标的意思是可以每个原子所在的空间位置
  return 0;
}