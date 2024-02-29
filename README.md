## Information
This is the official repo for my Era1n project, a jailbreak for arm64 devices on iOS 15.0+


Website & credits can be found at: RUN THE GODDAMN PROGRAM.

## Warnings
I am **NOT** responsible for any data loss, or the result of a device being bricked. The nerdy user of this program accepts responsibility should something happen to their device. While nothing should happen, jailbreaking has risks in itself. Don't worry about them tho.
- If your device is stuck in recovery, please run futurerestore `--exit-recovery`, or use `irecovery -n`.

- If you're unable to get out of recovery via these methods please restore with iTunes or Finder. You most likely have a skill issue.

- Era1n will never work in VirtualBox, VMware or any virtual machine that doesn't support PCI passthrough. WHY WOULD YOU EVEN TRY?

## Requirements
- A checkm8 vulnerable iOS device on iOS 15+ (`A8` - `A11`) ((no duh))
	- On `A11`, **you must disable your passcode while in the jailbroken state** (on iOS 16, you need to **reset your device** before proceeding with Era1n).

- **USB-A** cables are recommended to use, USB-C may have issues with Era1n and getting into DFU mode.<details><summary>Technical explanation</summary>The BootROM will only enter DFU if it detects USB voltage, which boils down to checking whether a certain pin is asserted from the Tristar chip. The Tristar does this based on the cable's accessory ID, and apparently USB-A and USB-C cables have different accessory IDs, and the one of the USB-C cables makes the Tristar not assert the USB voltage pin.</details>

- A Linux or macOS computer
	- AMD CPUs (not AMD Mobile) have an issue [with (likely) their USB controllers] that causes them to have a very low success rate with checkm8. It is not recommended that you use them with Era1n. Also imagine AMD.
		- If your device does not successfully jailbreak, try a computer with an Intel or other CPU LIKE A NORMAL PERSON
    
## Need help?

Too bad.
