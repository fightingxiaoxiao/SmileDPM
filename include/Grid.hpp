#ifndef GRID_HPP
#define GRID_HPP

#include <armadillo>

#include "Particle.hpp"
#include "List.hpp"

namespace Smile
{
    template <int dim>
    class Grid
    {
    private:
        arma::field<List<Particle<dim> *>> storage;

    public:
        // Constructor without parameter
        Grid();

        // Constructor with
        Grid();

        // Destructor
        ~Grid();
    };

    template <int dim>
    Grid<dim>::Grid()
    {
    }

    template <int dim>
    Grid<dim>::~Grid()
    {
        // do nothing
    }

} // namespace Smile
#endif