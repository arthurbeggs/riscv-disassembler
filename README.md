# RISC-V Disassembler

RISC-V Disassembler with support for RV32/RV64/RV128 IMAFDC

## Usage in GTKWave

Left click in the `inst` signal, select `Data Format -> Translate Filter Process
-> Enable and Select` and choose the executable `riscv-decode`.

## Build instructions

```
mkdir build > /dev/null 2>&1
cmake -B build
cmake --build build \
    && cp riscv-decode
```

