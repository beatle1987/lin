/*
 *  Craig Duffy
 * linker file to make downloadable root fs
 * puts fake c module on front to fool downloader
 * 
 */
OUTPUT_ARCH(arm)
ENTRY(_phony)
SECTIONS
{
  . = 0xc07FFFF0;
  _load_addr = .;

  . = 0xc07FFFF0;
  .text : {
    _phony = .;
    *(.text)
    input_data = .;
    piggy.o
    input_data_end = .;
    . = ALIGN(4);
  }

}
