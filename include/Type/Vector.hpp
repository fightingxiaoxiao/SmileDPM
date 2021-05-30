#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <eigen3/Eigen/Core>
#define EIGEN_USE_BLAS

#include "Scalar.hpp"

namespace Smile
{
    template <int dim>
    using Vector= Eigen::Matrix<Scalar, dim, 1>; 

    template <int dim>
    using Tensor = Eigen::Matrix<Scalar, dim, dim>; // Here *Tensor* means second-order tensor.
} // namespace Smile

#endif