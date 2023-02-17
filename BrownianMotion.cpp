#include <iostream>
#include <random>
#include <cmath>

using namespace std;

int main() {
    const double pi = 3.1415926;
    double x, y, s, fi = 0;
    unsigned int i, n = 0;
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<>dist(0, 2*pi); // Random angle in radians
    cout << "How many moves should a particle make?: ";
    cin >> n;
    for ( i = 0; i < n; i++) {
        fi = (double) dist(gen);
        x = x + cos(fi); // X coordinate
        y = y + sin(fi); // Y coordinate
        cout << x << "\t" << y << "\n";
    }
    s = sqrt(x*x + y * y);
    cout << "Particle has traveled a distance of "<< s;
    return 0;
}

/* ABSTRACT

Robert Brown observed in 1828 that for instance dust molecules are constantly moving whilst in a fluid, moves occur at random and independently of external conditions 
As such, let us take a closer look at a lone particle stranded in a fluid and calculate the distance it's travelled after n moves, beginning at (0,0) and ending at the tip of the vector |s|, note that isn't the total distance travelled rather than final distance from the origin to the tip of said vector

TODO:
Calculate total distance travelled 
Graphing the trajectory of a particle on a Cartesian plane
Include multiple particles
Look into GBM 


*/