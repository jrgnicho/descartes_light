/*
 * Software License Agreement (Apache License)
 *
 * Copyright (c) 2021, Southwest Research Institute
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#pragma once

#include <descartes_light/descartes_macros.h>
DESCARTES_IGNORE_WARNINGS_PUSH
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
DESCARTES_IGNORE_WARNINGS_POP

#include <descartes_light/types.h>

namespace descartes_light
{
template <typename FloatType>
using EdgeProperty = boost::property<boost::edge_weight_t, FloatType>;

template <typename FloatType>
using BGLGraph =
    boost::adjacency_list<boost::vecS, boost::vecS, boost::directedS, StateSample<FloatType>, EdgeProperty<FloatType>>;

template <typename FloatType>
using VertexDesc = typename BGLGraph<FloatType>::vertex_descriptor;

}  // namespace descartes_light
