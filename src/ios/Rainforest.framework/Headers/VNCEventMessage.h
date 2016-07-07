//
//  VNCEventMessage.h
//  Rainforest
//
//  Created by Nejc Vivod on 07/12/15.
//  Copyright © 2015 Rainforest. All rights reserved.
//

#pragma once

#include <stddef.h>
#include <stdint.h>
#include "VNCEvent.h"

extern const uint32_t VNCMessageMagicNumber;

typedef enum
{
    MSG_NONE,
    REQ_PEEK_EVENT,
    REQ_PUSH_EVENT,
    RES_EMPTY,
    RES_EVENT
} VNCMessageType;

typedef struct
{
    uint32_t magicNumber;
    VNCMessageType type;
    size_t bodySize;
    uint8_t *body;
} VNCMessage;

VNCMessage createPeekMessage(void);
VNCMessage createPushMessage(VNCEvent *event);
VNCMessage createEmptyResponse(void);
VNCMessage createEventResponse(VNCEvent *event);
VNCEvent parseEventFromMessage(VNCMessage message);
void destroyMessage(VNCMessage *message);

VNCEvent createPermissionEvent(const char *title, const char *body, const char **buttons, const size_t buttonCount);
VNCEvent createButtonPressEvent(const char *button);
void destroyEvent(VNCEvent *event);

/*!
 *  Must free() after calling this function!
 */
uint8_t *messageToBytes(VNCMessage message, size_t *length);
VNCMessage messageFromBytes(const uint8_t *bytes, const size_t totalLength);