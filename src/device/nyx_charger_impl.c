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
 *******************************************************************************
 * @file nyx_charger_impl.c
 *
 * @brief nyx charger implementation
 *
 *******************************************************************************
 */

#include <nyx/nyx_client.h>
#include <nyx/nyx_module.h>
#include "nyx_device_impl.h"

nyx_error_t nyx_charger_query_charger_status(nyx_device_handle_t handle, nyx_charger_status_t *status)
{
	nyx_execute_return_function(charger_query_charger_status, CHARGER, QUERY_CHARGER_STATUS, handle, status);
}

nyx_error_t nyx_charger_register_charger_status_callback(nyx_device_handle_t handle, nyx_device_callback_function_t callback_func, void *context)
{
	nyx_execute_return_function(charger_register_charger_status_callback, CHARGER, REGISTER_CHARGER_STATUS_CALLBACK, handle, callback_func, context);
}

nyx_error_t nyx_charger_enable_charging(nyx_device_handle_t handle, nyx_charger_status_t *status)
{
	nyx_execute_return_function(charger_enable_charging, CHARGER, ENABLE_CHARGING, handle, status);
}

nyx_error_t nyx_charger_disable_charging(nyx_device_handle_t handle, nyx_charger_status_t *status)
{
	nyx_execute_return_function(charger_disable_charging, CHARGER, DISABLE_CHARGING, handle, status);
}

nyx_error_t nyx_charger_register_state_change_callback(nyx_device_handle_t handle, nyx_device_callback_function_t callback_func, void *context)
{
	nyx_execute_return_function(charger_register_state_change_callback, CHARGER, REGISTER_STATE_CHANGE_CALLBACK, handle, callback_func, context);
}

nyx_error_t nyx_charger_query_charger_event(nyx_device_handle_t handle, nyx_charger_event_t *event)
{
	nyx_execute_return_function(charger_query_charger_event, CHARGER, QUERY_CHARGER_EVENT, handle, event);
}
