all:
	m6811-elf-gcc -g -O2 -mshort -Wl,-m,m68hc11elf -o main.elf main.c -fomit-frame-pointer

hcs12:
	m6811-elf-gcc -g -O0 -mshort -m68hc12 -Wl,-m,m68hc12elf -o main.elf main.c -fomit-frame-pointer
