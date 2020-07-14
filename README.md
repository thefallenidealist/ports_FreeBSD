# ports_FreeBSD
Packaging 3rd party programs into FreeBSD ports

##### Table of Contents  
* [FPGA toolchain](#fpga-toolchain)  
* [Misc](#misc)  
* [RISC-V MCU](#riscv-32-mcu-support)  
* [FreeCAD](#freecad-019)  
* [Learned](#learned)  

## FPGA toolchain
As of 2018.06.06. this is mainstreamed into ports with commits:  
[rP471841 - icestorm](https://reviews.freebsd.org/rP471841)  
[rP471842 - arachne-pnr](https://reviews.freebsd.org/rP471842)  
[rP471844 - yosys](https://reviews.freebsd.org/rP471844)  
[rP471846 - examples hx1k](https://reviews.freebsd.org/rP471846)  
[rP471847 - examples hx8k](https://reviews.freebsd.org/rP471847)  
[rP471848 - lattice iCE40 tools](https://reviews.freebsd.org/rP471848)  

So, now on FreeBSD the open source FPGA toolchain can be installed as standard FreeBSD program from ports:  
``cd /usr/ports/devel/lattice-ice40-tools && make install clean``  
or you can use prebuilt version:  
``pkg install lattice-ice40-tools``  

## Misc
UrJTAG
- updated to 2017.10.

htop
- add vim-like keybindings (hjkl, Ctrl-B/F, g/G)

arm-none-eabi-gdb
- add python support

### RISCV-32 MCU support
  2019.12

riscv32-openocd
- packaged version of OpenOCD from riscv-mcu
- includes scripts for GD32VF103 board and Sipeed RV JTAG debugger
- Usage:  
`riscv32-openocd -f interface/ftdi/sipeed-rv-debugger.cfg -f board/gd32vf103.cfg -c "adapter_khz 1000; init; halt; flash protect 0 0 last off;"`

riscv32-none-eabi-gdb
- GDB 8.3 based  
- compiled with --target=riscv32  
- with python support/files/scripts  
- Usage:  
`set arch riscv:rv32`  
`target remote localhost:3333`  
`program build/main.elf`  
`load`  
`continue`  

### FreeCAD 0.19
- version 2020.07.07 ed1467ce7572da529bfe42200287347058eaed52
- compiling time: around 2:00 on i7-3520M 2.9 GHz (idle priority, 4 threads)
- assembly2 workbench is disabled, can't be built (tried 0.18 and 0.19 versions). Assembly4 is a python module for FreeCAD 0.19 which can be downloaded and used instead.
- while compiling there are many warnings (which cannot be fixed with adding -DCMAKE_CXX_STANDARD="17" -DCMAKE_C_FLAGS="-std=c++17" to CMAKE_ARGS):  
`warning: use of the 'nodiscard' attribute is a C++17 extension [-Wc++17-extensions]`  

## Learned
- `make install` will install only files (from stage/) which are specified in pkg-plist
### How to use GitHub project with submodules:
riscv32-openocd as example  
- `make extract` and find exact hash of submodules:  
`USE_GITHUB=	yes`  
`GH_TUPLE=	riscv-mcu:riscv-openocd:9e6a7a2e5320cdaeeafcc79debedfd216f443f19 \`  
			`msteveb:jimtcl:0.77:jimtcl \`  
			`syntacore:libjaylink:0.1.0-17-g4959f4e:libjaylink`  
- OpenOCD will use in-tree submodules if (empty or non empty) folders are found:  
``@${RMDIR} ${WRKSRC}/jimtcl``  
``@${RMDIR} ${WRKSRC}/src/jtag/drivers/libjaylink``  
### Creating/updating pkg-plist:
`make makeplist`
- check it manually
- remove line: 'you/have/to/check/what/makeplist/gives/you'   

problem: after editing pkg-plist make install won't apply changes, fix:  
`rm work/.PLIST.mktmp`
