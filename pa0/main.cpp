#include<cmath>
#include<eigen3/Eigen/Core>
#include<eigen3/Eigen/Dense>
#include<iostream>


using namespace std;
//using namespace Eigen;
int main(){
    //HW0
    //P(2,1) => homogeneous  coord {2,1,1}
    //1. 45 rotation
    //2. then translation to (1,2)
    std::cout <<"P(2,1)"<<std::endl;
    Eigen::Vector3f P(2.0f,1.0f,1.0f);
    std::cout<<P<<std::endl;
    double theta= 45.0*(EIGEN_PI/180.0);
    Eigen::Matrix3f rotate_matrix;
    rotate_matrix<< cos(theta), -1.0*sin(theta) ,1.0,
                    sin(theta), cos(theta)      , 2.0,
                    0         , 0               ,1.0;
    cout<<"Matrix"<<endl;
    cout<<rotate_matrix<<endl;
    
    Eigen::Vector3f P_new;
    P_new = rotate_matrix * P;
    cout<<"Transferred"<<endl;
    cout<<P_new<<endl;
    return 0;
}