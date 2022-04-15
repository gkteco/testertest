//
//  main.cpp
//  testertest
//
//  Created by Gianni Crivello on 4/13/22.
//

#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES

const double PI = M_PI;

double Sqaure(double val) {
    return val*val;
}
double Cube(double val) {
    return val*val*val;
}
double fetchVolumeOfGumball(double radius_gumball){
    double result;
    
    result = (4.0/3) * PI * Cube(radius_gumball);
    return result;
    
}

double fetchVolumeOfContainer(double radius_gumballContainer, double height_gumballContainer){
    double result;
    
    result = PI * (Sqaure(radius_gumballContainer)) * height_gumballContainer;
    return result;
    
}

int main() {
    std::cout << "Enter your gumball radius: " << std::endl;
    double radius_gumball;
    std::cin >> radius_gumball;
    std::cout << "Enter radius and height of container (be sure this is the dimensions of a cylinder)" <<std::endl;
    double radius_gumballContainer;
    double height_gumballContainer;
    std::cin >> radius_gumballContainer;
    std::cin >> height_gumballContainer;
    const double LOAD_FACTOR = 0.69;
    //gumball volume
    const double gumball_vol = fetchVolumeOfGumball(radius_gumball);
    //container volume
    const double container_vol = fetchVolumeOfContainer(radius_gumballContainer, height_gumballContainer);
    
    //loaded gumball machine
    double loaded_gumball_machine = LOAD_FACTOR * container_vol;
    
    int result = loaded_gumball_machine / gumball_vol;
    
    std::cout << "Estimated gumballs in your container are: " << result << std::endl;
    

    
    return 0;
}
