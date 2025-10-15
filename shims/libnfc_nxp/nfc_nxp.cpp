/*
 * Copyright (C) The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <string>

namespace android {
namespace base {

std::string Trim(const std::string& s) {
    std::string out = s;
    const char* whitespace = " \t\n\r\f\v";
    out.erase(0, out.find_first_not_of(whitespace));
    out.erase(out.find_last_not_of(whitespace) + 1);
    return out;
}

} // namespace base
} // namespace android
