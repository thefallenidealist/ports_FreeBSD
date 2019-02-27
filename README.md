# ports_FreeBSD
Packaging 3rd party programs into FreeBSD ports

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
