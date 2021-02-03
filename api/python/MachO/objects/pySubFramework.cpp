/* Copyright 2017 - 2021 R. Thomas
 * Copyright 2017 - 2021 Quarkslab
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <algorithm>

#include <string>
#include <sstream>

#include "LIEF/MachO/hash.hpp"
#include "LIEF/MachO/SubFramework.hpp"

#include "pyMachO.hpp"

namespace LIEF {
namespace MachO {

template<class T>
using getter_t = T (SubFramework::*)(void) const;

template<class T>
using setter_t = void (SubFramework::*)(T);


template<>
void create<SubFramework>(py::module& m) {

  py::class_<SubFramework, LoadCommand>(m, "SubFramework")

    .def_property("umbrella",
        static_cast<getter_t<const std::string&>>(&SubFramework::umbrella),
        static_cast<setter_t<const std::string&>>(&SubFramework::umbrella),
        "")

    .def("__eq__", &SubFramework::operator==)
    .def("__ne__", &SubFramework::operator!=)
    .def("__hash__",
        [] (const SubFramework& func) {
          return Hash::hash(func);
        })


    .def("__str__",
        [] (const SubFramework& func)
        {
          std::ostringstream stream;
          stream << func;
          std::string str = stream.str();
          return str;
        });

}

}
}
