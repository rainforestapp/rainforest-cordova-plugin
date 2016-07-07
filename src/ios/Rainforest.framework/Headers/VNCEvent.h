//
//  VNCEvent.h
//  Rainforest
//
//  Created by Nejc Vivod on 27/11/15.
//  Copyright © 2015 Rainforest. All rights reserved.
//

#pragma once
#include <stddef.h>
#include <stdint.h>

typedef enum
{
    VNCE_NONE,
    VNCE_SHOW_PERMISSION, // client found some dialog that can't be drawn and has a collection of buttons
    VNCE_BTN_PRESS, // response to show permission / which button to tap
} VNCEventType;

typedef struct
{
    size_t nameLength;
    char *name;
} VNCPermissionButton;

typedef struct
{
    size_t titleLength;
    size_t bodyLength;
    size_t buttonsCount;
    VNCPermissionButton *buttons;
    char *permissionStrings;
} VNCShowPermissionEvent;

typedef struct
{
    VNCEventType type;
    union
    {
        VNCShowPermissionEvent showPermissionEvent;
        VNCPermissionButton buttonPressEvent;
    };
} VNCEvent;