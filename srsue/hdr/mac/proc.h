/**
 *
 * \section COPYRIGHT
 *
 * Copyright 2013-2015 Software Radio Systems Limited
 *
 * \section LICENSE
 *
 * This file is part of the srsUE library.
 *
 * srsUE is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * srsUE is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * A copy of the GNU Affero General Public License can be found in
 * the LICENSE file in the top-level directory of this distribution
 * and at http://www.gnu.org/licenses/.
 *
 */

#ifndef PROC_H
#define PROC_H

#include <stdint.h>

/* Interface for a MAC procedure */


namespace srsue {
  
class proc
{
public:
  proc() {
    running = false; 
  }
  void run() {
    running = true; 
  }
  void stop() {
    running = false; 
  }
  bool is_running() {
    return running; 
  }
  virtual void step(uint32_t tti) = 0; 
private:
  bool running; 
};

} // namespace srsue

#endif // PROC_H