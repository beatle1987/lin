/*
 * Automatically generated C config: don't edit
 */
#define AUTOCONF_INCLUDED
#define CONFIG_ARM 1
#undef  CONFIG_EISA
#undef  CONFIG_SBUS
#undef  CONFIG_MCA
#define CONFIG_UID16 1
#define CONFIG_RWSEM_GENERIC_SPINLOCK 1
#undef  CONFIG_RWSEM_XCHGADD_ALGORITHM
#undef  CONFIG_GENERIC_BUST_SPINLOCK
#undef  CONFIG_GENERIC_ISA_DMA
/*
 * Code maturity level options
 */
#undef  CONFIG_EXPERIMENTAL
#undef  CONFIG_OBSOLETE
/*
 * Loadable module support
 */
#undef  CONFIG_MODULES
/*
 * System Type
 */
#undef  CONFIG_ARCH_ANAKIN
#undef  CONFIG_ARCH_ARCA5K
#undef  CONFIG_ARCH_CLPS7500
#undef  CONFIG_ARCH_CLPS711X
#undef  CONFIG_ARCH_CO285
#undef  CONFIG_ARCH_EBSA110
#undef  CONFIG_ARCH_CAMELOT
#undef  CONFIG_ARCH_FOOTBRIDGE
#undef  CONFIG_ARCH_INTEGRATOR
#undef  CONFIG_ARCH_L7200
#undef  CONFIG_ARCH_MX1ADS
#undef  CONFIG_ARCH_RPC
#define CONFIG_ARCH_SA1100 1
#undef  CONFIG_ARCH_SHARK
/*
 * Archimedes/A5000 Implementations
 */
/*
 * Archimedes/A5000 Implementations (select only ONE)
 */
/*
 * Footbridge Implementations
 */
/*
 * SA11x0 Implementations
 */
#undef  CONFIG_SA1100_ASSABET
#undef  CONFIG_SA1100_ADSBITSY
#undef  CONFIG_SA1100_BRUTUS
#undef  CONFIG_SA1100_CEP
#undef  CONFIG_SA1100_CERF
#undef  CONFIG_SA1100_H3100
#undef  CONFIG_SA1100_H3600
#undef  CONFIG_SA1100_H3800
#undef  CONFIG_SA1100_H3XXX
#undef  CONFIG_SA1100_EXTENEX1
#undef  CONFIG_SA1100_FLEXANET
#undef  CONFIG_SA1100_FREEBIRD
#undef  CONFIG_SA1100_FRODO
#undef  CONFIG_SA1100_GRAPHICSCLIENT
#undef  CONFIG_SA1100_GRAPHICSMASTER
#undef  CONFIG_SA1100_BADGE4
#undef  CONFIG_SA1100_JORNADA720
#undef  CONFIG_SA1100_HUW_WEBPANEL
#undef  CONFIG_SA1100_ITSY
#undef  CONFIG_SA1100_LART
#undef  CONFIG_SA1100_NANOENGINE
#undef  CONFIG_SA1100_OMNIMETER
#define CONFIG_SA1100_PANGOLIN 1
#undef  CONFIG_SA1100_PLEB
#undef  CONFIG_SA1100_PT_SYSTEM3
#undef  CONFIG_SA1100_SHANNON
#undef  CONFIG_SA1100_SHERMAN
#undef  CONFIG_SA1100_SIMPAD
#undef  CONFIG_SA1100_PFS168
#undef  CONFIG_SA1100_VICTOR
#undef  CONFIG_SA1100_XP860
#undef  CONFIG_SA1100_YOPY
#undef  CONFIG_SA1100_USB
/*
 * CLPS711X/EP721X Implementations
 */
#undef  CONFIG_ARCH_EP7211
#undef  CONFIG_ARCH_EP7212
#undef  CONFIG_ARCH_ACORN
#undef  CONFIG_FOOTBRIDGE
#undef  CONFIG_FOOTBRIDGE_HOST
#undef  CONFIG_FOOTBRIDGE_ADDIN
#define CONFIG_CPU_32 1
#undef  CONFIG_CPU_26
/*
 * Processor Type
 */
#undef  CONFIG_CPU_32v3
#define CONFIG_CPU_32v4 1
#undef  CONFIG_CPU_ARM610
#undef  CONFIG_CPU_ARM710
#undef  CONFIG_CPU_ARM720T
#undef  CONFIG_CPU_ARM920T
#undef  CONFIG_CPU_ARM922T
#undef  CONFIG_PLD
#undef  CONFIG_CPU_ARM926T
#undef  CONFIG_CPU_ARM1020
#undef  CONFIG_CPU_SA110
#define CONFIG_CPU_SA1100 1
#define CONFIG_DISCONTIGMEM 1
/*
 * General setup
 */
#undef  CONFIG_PCI
#define CONFIG_ISA 1
#undef  CONFIG_ISA_DMA
#undef  CONFIG_ZBOOT_ROM
#define CONFIG_ZBOOT_ROM_TEXT 0x0
#define CONFIG_ZBOOT_ROM_BSS 0x0
#define CONFIG_HOTPLUG 1
/*
 * PCMCIA/CardBus support
 */
#undef  CONFIG_PCMCIA
#define CONFIG_NET 1
#define CONFIG_SYSVIPC 1
#undef  CONFIG_BSD_PROCESS_ACCT
#define CONFIG_SYSCTL 1
/*
 * At least one math emulation must be selected
 */
#define CONFIG_FPE_NWFPE 1
#define CONFIG_KCORE_ELF 1
#undef  CONFIG_KCORE_AOUT
#undef  CONFIG_BINFMT_AOUT
#define CONFIG_BINFMT_ELF 1
#undef  CONFIG_BINFMT_MISC
#undef  CONFIG_ARTHUR
#define CONFIG_CMDLINE "root=/dev/ram init=/linuxrc console=ttySA0,115200n8 ether=0,0xf3800300"
#undef  CONFIG_LEDS
#define CONFIG_ALIGNMENT_TRAP 1
/*
 * Parallel port support
 */
#undef  CONFIG_PARPORT
#undef  CONFIG_MTD
/*
 * Plug and Play configuration
 */
#undef  CONFIG_PNP
/*
 * Block devices
 */
#undef  CONFIG_BLK_DEV_FD
#undef  CONFIG_BLK_DEV_XD
#define CONFIG_BLK_DEV_LOOP 1
#undef  CONFIG_BLK_DEV_NBD
#define CONFIG_BLK_DEV_RAM 1
#define CONFIG_BLK_DEV_RAM_SIZE (4096)
#define CONFIG_BLK_DEV_INITRD 1
/*
 * Multi-device support (RAID and LVM)
 */
#undef  CONFIG_MD
/*
 * Networking options
 */
#define CONFIG_PACKET 1
#undef  CONFIG_PACKET_MMAP
#undef  CONFIG_NETLINK_DEV
#undef  CONFIG_NETFILTER
#undef  CONFIG_FILTER
#define CONFIG_UNIX 1
#define CONFIG_INET 1
#undef  CONFIG_IP_MULTICAST
#undef  CONFIG_IP_ADVANCED_ROUTER
#undef  CONFIG_IP_PNP
#undef  CONFIG_NET_IPIP
#undef  CONFIG_NET_IPGRE
#undef  CONFIG_INET_ECN
#undef  CONFIG_SYN_COOKIES
/*
 *  
 */
#undef  CONFIG_IPX
#undef  CONFIG_ATALK
#undef  CONFIG_DECNET
#undef  CONFIG_BRIDGE
/*
 * QoS and/or fair queueing
 */
#undef  CONFIG_NET_SCHED
/*
 * Network device support
 */
#define CONFIG_NETDEVICES 1
/*
 * ARCnet devices
 */
#undef  CONFIG_ARCNET
#undef  CONFIG_DUMMY
#undef  CONFIG_BONDING
#undef  CONFIG_EQUALIZER
#undef  CONFIG_TUN
/*
 * Ethernet (10 or 100Mbit)
 */
#define CONFIG_NET_ETHERNET 1
#undef  CONFIG_NET_VENDOR_3COM
#undef  CONFIG_LANCE
#define CONFIG_NET_VENDOR_SMC 1
#undef  CONFIG_WD80x3
#undef  CONFIG_ULTRA
#define CONFIG_SMC9194 1
#undef  CONFIG_NET_VENDOR_RACAL
#undef  CONFIG_DEPCA
#undef  CONFIG_HP100
#undef  CONFIG_NET_ISA
#undef  CONFIG_NET_PCI
#undef  CONFIG_NET_POCKET
/*
 * Ethernet (1000 Mbit)
 */
#undef  CONFIG_ACENIC_OMIT_TIGON_I
#undef  CONFIG_FDDI
#undef  CONFIG_PPP
#undef  CONFIG_SLIP
/*
 * Wireless LAN (non-hamradio)
 */
#undef  CONFIG_NET_RADIO
/*
 * Token Ring devices
 */
#undef  CONFIG_TR
#undef  CONFIG_NET_FC
/*
 * Wan interfaces
 */
#undef  CONFIG_WAN
/*
 * Amateur Radio support
 */
#undef  CONFIG_HAMRADIO
/*
 * IrDA (infrared) support
 */
#undef  CONFIG_IRDA
/*
 * ATA/IDE/MFM/RLL support
 */
#undef  CONFIG_IDE
#undef  CONFIG_BLK_DEV_IDE_MODES
#undef  CONFIG_BLK_DEV_HD
/*
 * SCSI support
 */
#undef  CONFIG_SCSI
/*
 * I2O device support
 */
#undef  CONFIG_I2O
/*
 * ISDN subsystem
 */
#undef  CONFIG_ISDN
/*
 * Input core support
 */
#undef  CONFIG_INPUT
#define CONFIG_INPUT_MOUSEDEV_SCREEN_X (1024)
#define CONFIG_INPUT_MOUSEDEV_SCREEN_Y (768)
/*
 * Character devices
 */
#define CONFIG_VT 1
#define CONFIG_VT_CONSOLE 1
#undef  CONFIG_SERIAL
#undef  CONFIG_SERIAL_NONSTANDARD
/*
 * Serial drivers
 */
#define CONFIG_SERIAL_SA1100 1
#define CONFIG_SERIAL_SA1100_CONSOLE 1
#define CONFIG_SA1100_DEFAULT_BAUDRATE (115200)
#define CONFIG_SERIAL_CORE 1
#define CONFIG_SERIAL_CORE_CONSOLE 1
#define CONFIG_UNIX98_PTYS 1
#define CONFIG_UNIX98_PTY_COUNT (32)
/*
 * I2C support
 */
#undef  CONFIG_I2C
/*
 * L3 serial bus support
 */
#undef  CONFIG_L3
/*
 * Other L3 adapters
 */
#undef  CONFIG_BIT_SA1100_GPIO
/*
 * Mice
 */
#undef  CONFIG_BUSMOUSE
#undef  CONFIG_MOUSE
/*
 * Joysticks
 */
#undef  CONFIG_INPUT_GAMEPORT
/*
 * Input core support is needed for gameports
 */
/*
 * Input core support is needed for joysticks
 */
#undef  CONFIG_QIC02_TAPE
/*
 * Watchdog Cards
 */
#undef  CONFIG_WATCHDOG
#undef  CONFIG_NVRAM
#undef  CONFIG_RTC
#define CONFIG_SA1100_RTC 1
#undef  CONFIG_DTLK
#undef  CONFIG_R3964
#undef  CONFIG_APPLICOM
/*
 * Ftape, the floppy tape device driver
 */
#undef  CONFIG_FTAPE
#undef  CONFIG_AGP
#undef  CONFIG_DRM
/*
 * Multimedia devices
 */
#undef  CONFIG_VIDEO_DEV
/*
 * File systems
 */
#undef  CONFIG_QUOTA
#undef  CONFIG_AUTOFS_FS
#undef  CONFIG_AUTOFS4_FS
#undef  CONFIG_REISERFS_FS
#undef  CONFIG_EXT3_FS
#undef  CONFIG_JBD
#define CONFIG_FAT_FS 1
#define CONFIG_MSDOS_FS 1
#undef  CONFIG_UMSDOS_FS
#define CONFIG_VFAT_FS 1
#define CONFIG_CRAMFS 1
#undef  CONFIG_TMPFS
#define CONFIG_RAMFS 1
#undef  CONFIG_ISO9660_FS
#undef  CONFIG_MINIX_FS
#undef  CONFIG_VXFS_FS
#undef  CONFIG_NTFS_FS
#undef  CONFIG_HPFS_FS
#define CONFIG_PROC_FS 1
#define CONFIG_DEVPTS_FS 1
#undef  CONFIG_ROMFS_FS
#define CONFIG_EXT2_FS 1
#undef  CONFIG_SYSV_FS
#undef  CONFIG_UDF_FS
#undef  CONFIG_UFS_FS
/*
 * Network File Systems
 */
#undef  CONFIG_CODA_FS
#undef  CONFIG_NFS_FS
#undef  CONFIG_NFSD
#undef  CONFIG_SUNRPC
#undef  CONFIG_LOCKD
#undef  CONFIG_SMB_FS
#undef  CONFIG_NCP_FS
#undef  CONFIG_ZISOFS_FS
#define CONFIG_ZLIB_FS_INFLATE 1
/*
 * Partition Types
 */
#undef  CONFIG_PARTITION_ADVANCED
#define CONFIG_MSDOS_PARTITION 1
#undef  CONFIG_SMB_NLS
#define CONFIG_NLS 1
/*
 * Native Language Support
 */
#define CONFIG_NLS_DEFAULT "iso8859-1"
#undef  CONFIG_NLS_CODEPAGE_437
#undef  CONFIG_NLS_CODEPAGE_737
#undef  CONFIG_NLS_CODEPAGE_775
#undef  CONFIG_NLS_CODEPAGE_850
#undef  CONFIG_NLS_CODEPAGE_852
#undef  CONFIG_NLS_CODEPAGE_855
#undef  CONFIG_NLS_CODEPAGE_857
#undef  CONFIG_NLS_CODEPAGE_860
#undef  CONFIG_NLS_CODEPAGE_861
#undef  CONFIG_NLS_CODEPAGE_862
#undef  CONFIG_NLS_CODEPAGE_863
#undef  CONFIG_NLS_CODEPAGE_864
#undef  CONFIG_NLS_CODEPAGE_865
#undef  CONFIG_NLS_CODEPAGE_866
#undef  CONFIG_NLS_CODEPAGE_869
#undef  CONFIG_NLS_CODEPAGE_936
#define CONFIG_NLS_CODEPAGE_950 1
#undef  CONFIG_NLS_CODEPAGE_932
#undef  CONFIG_NLS_CODEPAGE_949
#undef  CONFIG_NLS_CODEPAGE_874
#undef  CONFIG_NLS_ISO8859_8
#undef  CONFIG_NLS_CODEPAGE_1250
#undef  CONFIG_NLS_CODEPAGE_1251
#undef  CONFIG_NLS_ISO8859_1
#undef  CONFIG_NLS_ISO8859_2
#undef  CONFIG_NLS_ISO8859_3
#undef  CONFIG_NLS_ISO8859_4
#undef  CONFIG_NLS_ISO8859_5
#undef  CONFIG_NLS_ISO8859_6
#undef  CONFIG_NLS_ISO8859_7
#undef  CONFIG_NLS_ISO8859_9
#undef  CONFIG_NLS_ISO8859_13
#undef  CONFIG_NLS_ISO8859_14
#undef  CONFIG_NLS_ISO8859_15
#undef  CONFIG_NLS_KOI8_R
#undef  CONFIG_NLS_KOI8_U
#undef  CONFIG_NLS_UTF8
/*
 * Console drivers
 */
#define CONFIG_PC_KEYMAP 1
#undef  CONFIG_VGA_CONSOLE
/*
 * Frame-buffer support
 */
#define CONFIG_FB 1
#define CONFIG_DUMMY_CONSOLE 1
#undef  CONFIG_FB_SA1100
#define CONFIG_FBCON_ADVANCED 1
#undef  CONFIG_FBCON_MFB
#define CONFIG_FBCON_CFB2 1
#define CONFIG_FBCON_CFB4 1
#define CONFIG_FBCON_CFB8 1
#define CONFIG_FBCON_CFB16 1
#undef  CONFIG_FBCON_CFB24
#undef  CONFIG_FBCON_CFB32
#undef  CONFIG_FBCON_AFB
#undef  CONFIG_FBCON_ILBM
#undef  CONFIG_FBCON_IPLAN2P2
#undef  CONFIG_FBCON_IPLAN2P4
#undef  CONFIG_FBCON_IPLAN2P8
#undef  CONFIG_FBCON_MAC
#undef  CONFIG_FBCON_VGA_PLANES
#undef  CONFIG_FBCON_VGA
#undef  CONFIG_FBCON_HGA
#define CONFIG_FBCON_FONTWIDTH8_ONLY 1
#define CONFIG_FBCON_FONTS 1
#define CONFIG_FONT_8x8 1
#undef  CONFIG_FONT_8x16
#undef  CONFIG_FONT_SUN8x16
#undef  CONFIG_FONT_PEARL_8x8
#undef  CONFIG_FONT_ACORN_8x8
/*
 * Sound
 */
#undef  CONFIG_SOUND
/*
 * Multimedia Capabilities Port drivers
 */
#undef  CONFIG_MCP
/*
 * USB support
 */
#undef  CONFIG_USB
/*
 * USB Controllers
 */
/*
 * USB Device Class drivers
 */
/*
 *   SCSI support is needed for USB Storage
 */
/*
 * USB Human Interface Devices (HID)
 */
/*
 *   Input core support is needed for USB HID
 */
/*
 * USB Imaging devices
 */
/*
 * USB Multimedia devices
 */
/*
 *   Video4Linux support is needed for USB Multimedia device support
 */
/*
 * USB Network adaptors
 */
/*
 * USB port drivers
 */
/*
 * USB Serial Converter support
 */
/*
 * USB Miscellaneous drivers
 */
/*
 * Kernel hacking
 */
#define CONFIG_FRAME_POINTER 1
#define CONFIG_DEBUG_USER 1
#define CONFIG_DEBUG_INFO 1
#define CONFIG_DEBUG_KERNEL 1
#undef  CONFIG_DEBUG_SLAB
#undef  CONFIG_MAGIC_SYSRQ
#undef  CONFIG_DEBUG_SPINLOCK
#undef  CONFIG_DEBUG_WAITQ
#undef  CONFIG_DEBUG_BUGVERBOSE
#define CONFIG_DEBUG_ERRORS 1
#define CONFIG_DEBUG_LL 1
