//
// Copyright (c) 2022 ZettaScale Technology
//
// This program and the accompanying materials are made available under the
// terms of the Eclipse Public License 2.0 which is available at
// http://www.eclipse.org/legal/epl-2.0, or the Apache License, Version 2.0
// which is available at https://www.apache.org/licenses/LICENSE-2.0.
//
// SPDX-License-Identifier: EPL-2.0 OR Apache-2.0
//
// Contributors:
//   ZettaScale Zenoh Team, <zenoh@zettascale.tech>
//

#include "zenoh-pico/transport/link/task/join.h"

int _znp_send_join(_zn_transport_t *zt)
{
    // Join task only applies to multicast transports
    if (zt->type == _ZN_TRANSPORT_MULTICAST_TYPE)
        return _znp_multicast_send_join(&zt->transport.multicast);
    else
        return -1;
}
