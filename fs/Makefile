#
# Based on linux/arch/arm/boot/compressed/Makefile and Craig’s mods.
#
# Create a compressed root file system image.
#

# SYSTEM is the name of the rootfs to compress.
# The output of this script will have an extension .comp added!
#
SYSTEM	= rootfs

CROSS_COMPILE = arm-linux-

LD		= $(CROSS_COMPILE)ld
CC		= $(CROSS_COMPILE)gcc

FAKE		= fake.o
GZFLAGS	= -9

CFLAGS = -O2  -mapcs-32 -march=armv4 -mtune=strongarm1100 -mshort-load-bytes -msoft-float -fpic -c -o

RF_LDFLAGS	= -p -X -T rootfs.lds

LIBGCC	:= $(shell $(CC) --print-libgcc-file-name)

# finally, link bits to make the downloadable compressed form
all:	$(FAKE) piggy.o rootfs.lds
	$(LD) $(RF_LDFLAGS) $(FAKE) piggy.o $(LIBGCC) -o $(SYSTEM).comp

# second, zip up the file system to become piggy.gz, and
# make a relocatable form of this binary as piggy.o
piggy.o:
		gzip $(GZFLAGS) < $(SYSTEM) > piggy.gz
		$(LD) -r -o $@ -b binary piggy.gz
		rm -f piggy.gz

# first, compile fake.c
$FAKE:	fake.c
		$(CC) $(CFLAGS) $@ fake.c

clean:
		rm -f core piggy* *.o $(SYSTEM).comp

.PHONY:	clean
