# RK61 RGB (ISO)

![Neutron Labs GT-KB61](https://user-images.githubusercontent.com/46329948/183100926-3abc6d2a-304a-4a25-b6df-f5d3d0b1d309.jpg)

Neutron Labs GT-KB61 (rebranded Royal Kludge RK61) non-hotswap rgb edition (62-key ISO Layout)

- MCU: HFD2201KBA (rebranded SN32F248BF)
- PCB: 130-60801-04; 2019/11/04
- Wired only, no bluetooth support
- VENDOR_ID:       0x05AC
- PRODUCT_ID:      0x0256
- DEVICE_VER:      0x0175

For the ANSI version, check out euwbah (who has done the heavy lifting for this!) (https://github.com/euwbah)

For the white-backlit non-rgb version of the RK61, check out [Diff-fusion's repo](https://github.com/Diff-fusion/qmk_firmware)

For other Sonix keyboards, see [the SonixQMK repo](https://github.com/SonixQMK/qmk_firmware)

## ISO Keymap:

### BASE

![image](https://user-images.githubusercontent.com/46329948/183100404-34f9eab0-4ef9-4658-99c7-eecca05a1e3f.png)
 
### FN
 
 ![image](https://user-images.githubusercontent.com/46329948/183100499-dcfc2134-5e2d-41e3-9c7d-e480a6ff5efc.png)


Note: keymap differs from stock firmware for FN combinations
configuring RGB settings. Also adds ability to control volume and display
brightness.
See [keymap.c](keymaps/iso/keymap.c), and refer to the [list
of QMK keycodes](https://docs.qmk.fm/#/keycodes).

-----------------

Make example for this keyboard (after setting up your build environment):

    make royal_kludge/rk61_rgb:iso

See the [build environment setup](https://sonixqmk.github.io//SonixDocs/install/) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader:

- Physical reset: short the two contacts to the left of the space bar switch with a wire/paperclip. Accessible from the front.
- Layout (after loading QMK): FN + CapsLock
