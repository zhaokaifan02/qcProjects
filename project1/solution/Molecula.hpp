#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>
#include <cassert>
#include <cmath>
using namespace std;
 
class Molecule
{
  public:
    int natom; 
    int charge;
    int *zvals;
    double **geom;
    string point_group;
 
    void print_geom(); //输出
    void rotate(double phi); //旋转
    void translate(double x, double y, double z); //平移
    double bond(int atom1, int atom2);
    double angle(int atom1, int atom2, int atom3);
    double torsion(int atom1, int atom2, int atom3, int atom4);
    double unit(int cart, int atom1, int atom2);
    
    Molecule(); //无参构造
    Molecule(const char *filename, int q);
    ~Molecule();
};