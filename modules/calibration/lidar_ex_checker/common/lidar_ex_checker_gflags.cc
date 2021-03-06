/******************************************************************************
 * Copyright 2017 The Apollo Authors. All Rights Reserved.
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
 *****************************************************************************/

#include "modules/calibration/lidar_ex_checker/common/lidar_ex_checker_gflags.h"

DEFINE_string(node_name, "lidar_ex_checker",
              "The lidar extrinsics checker module name in proto");

DEFINE_int32(capture_cloud_count, 3, "the number of cloud count to capture");

DEFINE_double(capture_distance, 15.0, "the distance between two clouds");

DEFINE_string(adapter_config_filename,
              "/apollo/modules/calibration/lidar_ex_checker/conf/adapter.conf",
              "The adapter config file");
