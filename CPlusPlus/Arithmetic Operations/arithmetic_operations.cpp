/*Goal: practice arithmetic operations in C++
**Write a program that calculates the volumes of:
**a cube, sphere, cone.
**Cube Volume = side^3
**Sphere Volume = (4/3) * pi * radius^3
**Cone Volume = pi * radius^2 * (height/3)
**Write the values to the console.
*/

#include<iostream>
#include <cmath>
int main()
{
    //float constant M_PI = 3.14159265358979323846;
    
    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;
    
    float volCube, volSphere, volCone = 0;
    volCube = std::pow(cubeSide,3);
    volSphere = (4.0/3.0)*M_PI*std::pow(sphereRadius,3);
    volCone = M_PI * std::pow(coneRadius,2) * (coneHeight/3);
    
    std::cout << "The cube volume is " << volCube << std::endl;
    std::cout << "The sphere volume is " << volSphere << std::endl;
    std::cout << "The Cone volume is " << volCone << std::endl;
    
    return 0;
}