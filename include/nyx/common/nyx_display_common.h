/* @@@LICENSE
*
*      Copyright (c) 2010-2012 Hewlett-Packard Development Company, L.P.
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
*
* LICENSE@@@ */

/**
 * @file nyx_display_common.h
 *
 */

#ifndef _NYX_DISPLAY_COMMON_H_
#define _NYX_DISPLAY_COMMON_H_

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	int32_t horizontal_pixels;
	int32_t vertical_pixels;
	int32_t horizontal_dpi;
	int32_t vertical_dpi;
} nyx_display_metrics_t;


/** @} */

#ifdef __cplusplus
}
#endif

#endif /* _NYX_DISPLAY_COMMON_H_ */
