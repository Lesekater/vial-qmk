/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x7C, 0xC1, 0x48, 0x5D, 0x4D, 0x48, 0xB3, 0x35}

// Unlock combo: hold the two outermost top keys (top-left of left half +
// top-right of right half = matrix [0,0] and [5,0]). Unused when
// VIAL_INSECURE is defined, but kept so that flipping the security mode
// later doesn't require re-picking keys.
#define VIAL_UNLOCK_COMBO_ROWS { 0, 5 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 0 }

// Skip the unlock combo entirely: matrix tester and other privileged Vial
// commands are always available. Same trade-off as VIA_INSECURE.
#define VIAL_INSECURE
