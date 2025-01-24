#include "Molecula.hpp"

Molecule::Molecule(const char *filename, int q)
{
  charge = q;

  // open filename
  std::ifstream is(filename); // create the stream of read
  assert(is.good());

  // read the number of atoms from filename
  is >> natom; // 第一行放进nation立

  // allocate space
  zvals = new int[natom];     // 相对原子质量
  geom = new double *[natom]; // 下标
  for (int i = 0; i < natom; i++)
    geom[i] = new double[3]; // 创建下标

  for (unsigned int i = 0; i < natom; i++)
    is >> zvals[i] >> geom[i][0] >> geom[i][1] >> geom[i][2];

  is.close();
}
void Molecule::print_geom()
{
  for (int i = 0; i < natom; i++)
    printf("%d %8.5f %8.5f %8.5f\n", zvals[i], geom[i][0], geom[i][1], geom[i][2]);
}

void Molecule::translate(double x, double y, double z) // 每个位置都偏转
{
  for (int i = 0; i < natom; i++)
  {
    geom[i][0] += x;
    geom[i][1] += y;
    geom[i][2] += z;
  }
}
double Molecule::bond(int atom1, int atom2)
{

  return sqrt((geom[atom1][0] - geom[atom2][0]) * (geom[atom1][0] - geom[atom2][0]) + (geom[atom1][1] - geom[atom2][1]) * (geom[atom1][1] - geom[atom2][1]) + (geom[atom1][2] - geom[atom2][2]) * (geom[atom1][2] - geom[atom2][2]));
}
double Molecule::angle(int atom1, int atom2, int atom3)
{
  return acos(unit(0, atom2, atom1) * unit(0, atom2, atom3) + unit(1, atom2, atom1) * unit(1, atom2, atom3) + unit(2, atom2, atom1) * unit(2, atom2, atom3));
}
double Molecule::torsion(int a, int b, int c, int d)
{
  //abc的法向量
  double eabc_x = (unit(1, b, a) * unit(2, b, c) - unit(2, b, a) * unit(1, b, c));
  double eabc_y = (unit(2, b, a) * unit(0, b, c) - unit(0, b, a) * unit(2, b, c));
  double eabc_z = (unit(0, b, a) * unit(1, b, c) - unit(1, b, a) * unit(0, b, c));
  //bcd的法向量
  double ebcd_x = (unit(1, c, b) * unit(2, c, d) - unit(2, c, b) * unit(1, c, d));
  double ebcd_y = (unit(2, c, b) * unit(0, c, d) - unit(0, c, b) * unit(2, c, d));
  double ebcd_z = (unit(0, c, b) * unit(1, c, d) - unit(1, c, b) * unit(0, c, d));
  //两个法向量点乘
  double exx = eabc_x * ebcd_x;
  double eyy = eabc_y * ebcd_y;
  double ezz = eabc_z * ebcd_z;
  //计算二面角
  double tau = (exx + eyy + ezz) / (sin(angle(a, b, c)) * sin(angle(b, c, d)));

  if (tau < -1.0)
    tau = acos(-1.0);
  else if (tau > 1.0)
    tau = acos(1.0);
  else
    tau = acos(tau);

  // Compute the sign of the torsion 判断二面角的正负 就是算余弦的模板
  double cross_x = eabc_y * ebcd_z - eabc_z * ebcd_y;
  double cross_y = eabc_z * ebcd_x - eabc_x * ebcd_z;
  double cross_z = eabc_x * ebcd_y - eabc_y * ebcd_x;
  double norm = cross_x * cross_x + cross_y * cross_y + cross_z * cross_z;
  cross_x /= norm;
  cross_y /= norm;
  cross_z /= norm;
  double sign = 1.0;
  double dot = cross_x * unit(0, b, c) + cross_y * unit(1, b, c) + cross_z * unit(2, b, c); 
  if (dot < 0.0)
    sign = -1.0;

  return tau * sign;
}
double Molecule::oop(int atom1, int atom2, int atom3, int atom4)
{
  // 计算234这个平面的法向量
  //y1: (1,at3-at2) 
  double ebcd_x = (unit(1, atom3, atom2) * unit(2, atom3, atom4) - unit(2, atom3, atom2) * unit(1, atom3, atom4));
  double ebcd_y = (unit(2, atom3, atom2) * unit(0, atom3, atom4) - unit(0, atom3, atom2) * unit(2, atom3, atom4));
  double ebcd_z = (unit(0, atom3, atom2) * unit(1, atom3, atom4) - unit(1, atom3, atom2) * unit(0, atom3, atom4));
  // 计算法向量与直线的内积
  double exx = ebcd_x * unit(0, atom3, atom1);
  double eyy = ebcd_y * unit(1, atom3, atom1);
  double ezz = ebcd_z * unit(2, atom3, atom1);

  double theta = (exx + eyy + ezz) / sin(angle(atom2, atom3, atom4));

  if (theta < -1.0)
    theta = asin(-1.0);
  else if (theta > 1.0)
    theta = asin(1.0);  
  else
    theta = asin(theta);

  return theta;
}
double Molecule::unit(int cart, int atom1, int atom2)
{
  return -(geom[atom1][cart] - geom[atom2][cart]) / bond(atom1, atom2);
}
Molecule::Molecule() {}
Molecule::~Molecule() {}