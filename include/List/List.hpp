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
 * [Description] Rename dynamic array *std::vector* to distinguish the 
 * vector in linear algebra.
 */

#ifndef LIST_HPP
#define LIST_HPP
#include <vector>
namespace Smile
{
    template <typename T>
    using List = std::List<T>;

    template <typename T>
    using ArrayList = std::Vector<T>;

} // namespace Smile

#endif