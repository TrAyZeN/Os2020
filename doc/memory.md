# Memory

This explains where all sections are in memory

## Chunks

A chunk is a part of the os, there is 3 chunks :

- Boot : The first 512 bytes of the os, loads the loader in memory (16 bits)
- Loader : Loads the kernel and memory and go to protected mode (16 -> 32 bits)
- Kernel : Contains everything except the bootloader : core, libc, apps... (32 bits) 

## Memory Map


| Section   | Start       |
| -------   | -----       |
| Boot      | 0x7C00      |
| Loader    | 0x7E00      |
| Kernel    | 0x1000000   |

## Specs

Each chunk contains a magic number at the end to be dynamically loaded.

