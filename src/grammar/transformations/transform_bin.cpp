// Copyright (c) 2020, QuantStack and XVega Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include "xvega/grammar/transformations/transform_bin.hpp"
#include "../../utils/serialize.hpp"

namespace xv
{
    void to_json(nl::json& j, const transform_bin& data)
    {
        serialize(j, data.bin(), "bin");
        serialize(j, data.field(), "field");
        serialize(j, data.as(), "as");
    }
}