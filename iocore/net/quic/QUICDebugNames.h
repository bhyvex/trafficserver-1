/** @file
 *
 *  A brief file description
 *
 *  @section license License
 *
 *  Licensed to the Apache Software Foundation (ASF) under one
 *  or more contributor license agreements.  See the NOTICE file
 *  distributed with this work for additional information
 *  regarding copyright ownership.  The ASF licenses this file
 *  to you under the Apache License, Version 2.0 (the
 *  "License"); you may not use this file except in compliance
 *  with the License.  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include "QUICTypes.h"
#include "QUICEvents.h"
#include "QUICTransportParameters.h"
#include "QUICStreamState.h"

class QUICDebugNames
{
public:
  static const char *packet_type(QUICPacketType type);
  static const char *frame_type(QUICFrameType type);
  static const char *error_class(QUICErrorClass cls);
  static const char *error_code(QUICTransErrorCode code);
  static const char *transport_parameter_id(QUICTransportParameterId id);
  static const char *stream_state(const QUICStreamState &state);
  static const char *quic_event(int event);
  static const char *key_phase(QUICKeyPhase phase);
  static const char *encryption_level(QUICEncryptionLevel level);
};
