A SLEIGH processor spec for [Ghidra](https://github.com/NationalSecurityAgency/ghidra) for the Motorola 68HC11 (HC11) microcontroller family.

## Installation

This repository should be placed within the Ghidra install as the folder `Ghidra/Processors/HC11`, such that `Ghidra/Processors/HC11/data` is the path to the `data` folder.  Ghidra should automatically add it to the available processor list on its next start, and compile the files when it is first used.

## Manuals
Created based on the M68HC11 Reference Manual (`M68HC11RM/D Rev. 6.1`) which can be found [here](https://www.nxp.com/docs/en/reference-manual/M68HC11RM.pdf).

## Credits
- The already existing HCS08 and HCS12 processor specifications in ghidra, which this is based on.
- [@Pokechu22](https://github.com/Pokechu22) for the installation instructions I copied from [ghidra-gcdsp-lang](https://github.com/Pokechu22/ghidra-gcdsp-lang).
