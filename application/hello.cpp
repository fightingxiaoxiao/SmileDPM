#include "Particle.hpp"
#include "Vector.hpp"
#include "Cloud.hpp"

using namespace Smile;

int main()
{
    Vector<2> pos = Vector<2>(0., 0.);
    Vector<2> vel = Vector<2>(0., 0.);
    Particle<2> p(0.01, 917, pos, vel);

    return 0;
}