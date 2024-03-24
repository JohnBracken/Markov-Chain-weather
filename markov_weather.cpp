#include <iostream>
#include <Eigen/Dense>

using namespace std;
int main(){

//Markov p matrix for rainy sunny days in Toronto.	
Eigen::Matrix2d a;
a << 0.88, 0.75,
     0.12, 0.25;

//Start of sunny day in Toronto.
Eigen::Vector2d b(1,0);

cout << "Hello, world" << "\n";

for(int i = 0; i < 2; ++i){
    a = a*a;

}
cout << "Probability of sunny or rainy day in Toronto.  Sunny on top, rainy on bottom:\n" << a*b << "\n";
return 0;
}
