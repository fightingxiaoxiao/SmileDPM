/**
 * Copyright(c) 2021 Chen Xiaoxiao
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 * 
 * [Description] Define basic particle class .
 */

#ifndef PARTICLE_HPP
#define PARTICLE_HPP

#include "Vector.hpp"

namespace Smile
{
    template <int dim>
    class Particle
    {
    private:
        Vector<dim> velocity;
        Vector<dim> velocity_; // velocity at the end of the previous time step

        Vector<dim> position;
        Vector<dim> position_; // position at the end of the previous time step

        Scalar d;   // diameter
        Scalar rho; // density

    public:
        // Constructor without parameter
        Particle();

        // Constructor with basic properties
        Particle(Scalar _d,
                 Scalar _rho,
                 Vector<dim> _position,
                 Vector<dim> _velocity);

        ~Particle();
    };

    template <int dim>
    Particle<dim>::Particle()
    {
    }

    template <int dim>
    Particle<dim>::Particle(Scalar _d,
                            Scalar _rho,
                            Vector<dim> _position,
                            Vector<dim> _velocity)
        : d(_d),
          rho(_rho),
          position(_position),
          position_(_position),
          velocity(_velocity),
          velocity_(_velocity)
    {
    }

    template <int dim>
    Particle<dim>::~Particle()
    {
    }

} // namespace Smile

#endif