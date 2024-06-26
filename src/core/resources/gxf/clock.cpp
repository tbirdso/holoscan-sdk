/*
 * SPDX-FileCopyrightText: Copyright (c) 2023-2024 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
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

#include "holoscan/core/resources/gxf/clock.hpp"

#include <string>

namespace holoscan {

Clock::Clock(const std::string& name, nvidia::gxf::Clock* component)
    : GXFResource(name, component) {}

nvidia::gxf::Clock* Clock::get() const {
  return static_cast<nvidia::gxf::Clock*>(gxf_cptr_);
}

}  // namespace holoscan
