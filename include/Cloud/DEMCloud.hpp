/**
 * Copyright 2021 Chen Xiaoxiao
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
 */

#ifndef DEMCLOUD_HPP
#define DEMCLOUD_HPP

#include "Cloud.hpp"

namespace Smile
{   
    template <int dim>
    class DEMCloud
    {
    private:
        /* data */
    public:
        DEMCloud(/* args */);
        ~DEMCloud();
    };
    
    template <int dim>
    DEMCloud<dim>::DEMCloud(/* args */)
    {
    }
    
    template <int dim>
    DEMCloud<dim>::~DEMCloud()
    {
    }
    
} // namespace Smile

#endif