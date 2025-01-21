#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
//sstream 表示string的 stream一个管理字符串流的库
//拿单独的原子
using namespace std;
typedef struct MyAtom {
    int atomicNumber;
    double x;
    double y;
    double z;
} MyAtom;
int main()
{  
  ifstream input("geom.dat");
  if(!input)
  {
    cout<<"open fail!!"<<endl;
    return 0;
  }
  /** 获取分子中原子的个数*/
  string firstLine; //第一行
  int atomNums = 0;
  if(getline(input,firstLine))
  {
    istringstream iss(firstLine);
    iss>>atomNums;
    cout<<"atom Number: "<< atomNums<< endl;
  } else {
    cout<<"empty"<<endl;
  }
  //这里执行完前一行后，这个流就自动往下走了
  string line; //create string ds
  vector<MyAtom> molecular;
  //read file line by line
  while(getline(input,line))
  {
    //if line can be read, then in the loop
    //create a string to read the line
    MyAtom atom;
    istringstream iss(line);
    iss>>atom.atomicNumber>>atom.x>>atom.y>>atom.z; //initialize atom
    molecular.push_back(atom); //放入数组里
    // cout<<line<<endl;
  }
  input.close();

  return 0;
}