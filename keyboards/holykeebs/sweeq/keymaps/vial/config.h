// Copyright 2023 Idan Kamara (@idank)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

// Good defaults for home row modifiers
#define TAPPING_TERM 230

// Vial identity and unlock combo. VIAL_INSECURE lives in the shared userspace
// config (users/holykeebs/config.h), so it is intentionally not repeated here.
// The unlock combo is unused while VIAL_INSECURE is set, but kept so re-securing
// later doesn't require re-picking keys: the two outermost top keys, matrix
// [0,0] (top-left of the left half) and [4,0] (top-right of the right half).
#define VIAL_KEYBOARD_UID {0x58, 0x28, 0x0C, 0xA7, 0x9E, 0xCF, 0x7C, 0x3D}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }
