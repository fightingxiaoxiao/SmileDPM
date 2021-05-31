#ifndef CLOUD_HPP
#define CLOUD_HPP


#include "Particle.hpp"
#include "List.hpp"

namespace Smile
{
    template <int dim, typename templateParticle>
    class Cloud
    {
    private:
        List<templateParticle> storage;

    public:
        // Constructor without parameter
        Cloud();

        // Destructor
        ~Cloud();

        // Member function: 
        void solve();

    };

    template <int dim, typename templateParticle>
    Cloud<dim, templateParticle>::Cloud()
    {
    }

    template <int dim, typename templateParticle>
    Cloud<dim, templateParticle>::~Cloud()
    {
    }

} // namespace Smile

#endif