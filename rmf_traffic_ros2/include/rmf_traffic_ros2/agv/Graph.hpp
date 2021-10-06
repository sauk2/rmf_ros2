/*
 * Copyright (C) 2021 Open Source Robotics Foundation
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
 *
*/

#include <rmf_traffic/agv/Graph.hpp>

#include <rmf_site_map_msgs/msg/site_map.hpp>

namespace rmf_traffic_ros2 {

//==============================================================================
/*
rmf_traffic::agv::Graph convert(const rmf_building_map_msgs::msg::Graph& from,
  int waypoint_offset = 0);
*/

//==============================================================================
rmf_traffic::agv::Graph convert(const rmf_site_map_msgs::msg::SiteMap& from,
  int graph_idx = 0);

} // namespace rmf_traffic_ros2
