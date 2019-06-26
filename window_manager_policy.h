/*
 * Copyright © 2019 Canonical Ltd.
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 or 3 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Authored by: William Wold <william.wold@canonical.com>
 */

#ifndef MIRAL_WINDOW_MANAGER_POLICY_H
#define MIRAL_WINDOW_MANAGER_POLICY_H

#include <miral/minimal_window_manager.h>

using namespace mir::geometry;

namespace mirco
{

class WindowManagerPolicy : public miral::MinimalWindowManager
{
public:
    WindowManagerPolicy(
        miral::WindowManagerTools const& tools);
    ~WindowManagerPolicy();
};

}

#endif // MIRAL_WINDOW_MANAGER_POLICY_H
