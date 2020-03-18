#include <iostream>
#include "rasterizer.hpp"
#include "global.hpp"
#include "Triangle.hpp"
int main()
{
/*std::vector<Eigen::Vector3f> pos
       {
              {2, 0, -2},
              {0, 2, -2},
              {-2, 0, -2},
              {3.5, -1, -5},
              {2.5, 1.5, -5},
              {-1, 0.5, -5}
       };
*/
Eigen::Vector3f v1=Eigen::Vector3f::Identity();
Eigen::Vector3f v2=Eigen::Vector3f::Identity();
Eigen::Vector3f v3=Eigen::Vector3f::Identity();
//Eigen::Vector3f x={v1-v2,v2-v3,v3-v1};
int x=1;
int y=2;int z=1;
Eigen::Vector3f s(x,y,z);
std::cout << "aaa" ;
//std::cout<<x;
/*std::cout<< v1.row(0),0,
       v2.row(0),0,
       v3.row(0),0,
       0,0,1,0;
*/
std::cout<<s<<std::endl;
return 0;
}