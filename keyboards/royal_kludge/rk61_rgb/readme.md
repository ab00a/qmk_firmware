# RK61 RGB (ISO)

![RK61 RGB]https://img.ebyrcdn.net/1026667-990401-800.jpg)

Neutron Labs GT-KB61 (rebranded Royal Kludge RK61) non-hotswap rgb edition (62-key ISO Layout)

- MCU: HFD2201KBA (rebranded SN32F248BF)
- PCB: 130-60801-04; 2019/11/04
- Wired only, no bluetooth support

VENDOR_ID:       0x05AC
PRODUCT_ID:      0x0256
DEVICE_VER:      0x0175

For the ANSI version, check out euwbah (who has done the heavy lifting for this!) (https://github.com/euwbah)
For the white-backlit non-rgb version of the RK61, check out [Diff-fusion's repo](https://github.com/Diff-fusion/qmk_firmware)

For other Soxix keyboards, see [the SonixQMK repo](https://github.com/SonixQMK/qmk_firmware)

ISO Keymap:

_BASE
 +-------------------------------------------------------------------------+
 | ESC|  1 |  2 |  3 |  4 |  5 |  6 |  7 |  8 |  9 |  0 |  - |  = | BACKSP |
 +-------------------------------------------------------------------------+
 | TAB  |  Q |  W |  E |  R |  T |  Y |  U |  I |  O |  P |  [ |  ] |ENTER |
 +-------------------------------------------------------------------      +
 | CAPS   |  A |  S |  D |  F |  G |  H |  J |  K |  L |  ; |  ' |  #  |   |
 +-------------------------------------------------------------------------+
 | LSHF | \ |  Z |  X |  C |  V |  B |  N |  M |  , |  . |  / |    SHIFT   |
 +-------------------------------------------------------------------------+
 | LCTRL| WIN | ALT |              SPACE           |ALTGR| MENU|RCTRL| FN  |
 +-------------------------------------------------------------------------+

_FN
 +-------------------------------------------------------------------------+
 | ` |  F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 |F10 |F11 |F12 | DELETE |
 +-------------------------------------------------------------------------+
 |REBOOT| Br-| Br+|  7 |  8 |  9 |PTSC|SCLK|PAUS| H+ | H- | B+ | B- | RGB  |
 +-------------------------------------------------------------------      +
 |BOOTLDR|    |    |  4 |  5 |  6 | INS|HOME|PGUP| S+ | E+ | E- |MOD+|     |
 +-------------------------------------------------------------------------+
 |     |MUTE|VOL-|VOL+|  1 |  2 |  3 | DEL| END|PGDN| S- | UP |            |
 +-------------------------------------------------------------------------+
 |     |SWAP |     |                  0            |LEFT |DOWN |RIGHT|     |
 +-------------------------------------------------------------------------+

Note: keymap differs slightly from stock firmware for FN combinations
configuring RGB settings. Also adds ability to control volume and display
brightness + additional FN keys.
See [keymap.c](keymaps/iso/keymap.c), and refer to the [list
of QMK keycodes]https://docs.qmk.fm/#/keycodes).

-----------------

Make example for this keyboard (after setting up your build environment):

    make royal_kludge/rk61_rgb:iso

See the [build environment setup](https://sonixqmk.github.io//SonixDocs/install/) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader:

- Physical reset: short the two contacts to the left of the space bar switch with a wire/paperclip. Accessible from the front.
- Layout (after loading QMK): FN + CapsLock
