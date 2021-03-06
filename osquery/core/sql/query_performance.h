/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under both the Apache 2.0 license (found in the
 *  LICENSE file in the root directory of this source tree) and the GPLv2 (found
 *  in the COPYING file in the root directory of this source tree).
 *  You may select, at your option, one of the above-listed licenses.
 */

#pragma once

#include <cstddef>

namespace osquery {

/**
 * @brief performance statistics about a query
 */
struct QueryPerformance {
  /// Number of executions.
  size_t executions{0};

  /// Last UNIX time in seconds the query was executed successfully.
  size_t last_executed{0};

  /// Total wall time taken
  unsigned long long int wall_time{0};

  /// Total user time (cycles)
  unsigned long long int user_time{0};

  /// Total system time (cycles)
  unsigned long long int system_time{0};

  /// Average memory differentials. This should be near 0.
  unsigned long long int average_memory{0};
};

} // namespace osquery
