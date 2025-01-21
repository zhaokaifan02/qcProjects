#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
//sstream 表示string的 stream一个管理字符串流的库
using namespace std;

int main()
{  
  ifstream input("geom.dat");
  if(!input)
  {
    cout<<"open fail!!"<<endl;
    return 0;
  }
  string firstLine; //第一行
  if(getline(input,firstLine))
  {
    cout<<"atom Number: "<< firstLine<< endl;
  } else {
    cout<<"empty"<<endl;
  }
  //这里执行完前一行后，这个流就自动往下走了
  string line; //create string ds

  //read file line by line
  while(getline(input,line))
  {
    //if line can be read, then in the loop
    //create a string to read the line
    istringstream iss(line); //

    cout<<line<<endl;
  }
  input.close();

  return 0;
}