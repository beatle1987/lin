@ Generated by gcc 2.95.3 20010315 (release) for ARM/elf
	.file	"initfini.c"
gcc2_compiled.:
	
	
	.section .init
	.align	2
	.global	_init
	.type	 _init,function
	.align 2
	
	
	
	ldmea	fp, {fp, sp, pc}
.Lfe3:
	.size	 _init,.Lfe3-_init
	
	.section .fini
	.align	2
	.global	_fini
	.type	 _fini,function
	ldmea	fp, {fp, sp, pc}
.Lfe4:
	.size	 _fini,.Lfe4-_fini
	
	.ident	"GCC: (GNU) 2.95.3 20010315 (release)"
