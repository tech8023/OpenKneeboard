/*
 * OpenKneeboard
 *
 * Copyright (C) 2022 Fred Emmott <fred@fredemmott.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301,
 * USA.
 */
#pragma once

#include <OpenKneeboard/UserAction.h>
#include <OpenKneeboard/json_fwd.h>

#include <memory>
#include <unordered_map>
#include <unordered_set>
#include <vector>

struct IDirectInput8W;

namespace OpenKneeboard {

struct DirectInputSettings {
  struct ButtonBinding {
    std::unordered_set<uint64_t> mButtons;
    UserAction mAction;
    constexpr auto operator<=>(const ButtonBinding&) const noexcept = default;
  };
  struct Device {
    std::string mID;
    std::string mName;
    std::string mKind;
    std::vector<ButtonBinding> mButtonBindings;
    constexpr auto operator<=>(const Device&) const noexcept = default;
  };

  std::unordered_map<std::string, Device> mDevices;
  constexpr auto operator<=>(
    const DirectInputSettings&) const noexcept = default;
};
OPENKNEEBOARD_DECLARE_SPARSE_JSON(DirectInputSettings);
}// namespace OpenKneeboard
