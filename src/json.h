#ifndef LMP_JSON_H
#define LMP_JSON_H

#ifndef NLOHMANN_JSON_NAMESPACE
#define NLOHMANN_JSON_NAMESPACE lammps_nlohmann
#endif

#include "nlohmann/json.hpp"

namespace LAMMPS_NS {
using json = nlohmann::json;
}

#endif

