	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 13, 1
	.globl	_main                           ## -- Begin function main
	.p2align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## %bb.0:
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	leaq	L_.str(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-8(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
	leaq	L_.str.2(%rip), %rdi
	movb	$0, %al
	callq	_printf
	leaq	L_.str.1(%rip), %rdi
	leaq	-12(%rbp), %rsi
	movb	$0, %al
	callq	_scanf
	movl	-8(%rbp), %esi
	movl	-12(%rbp), %edx
	movl	-8(%rbp), %ecx
	addl	-12(%rbp), %ecx
	leaq	L_.str.3(%rip), %rdi
	movb	$0, %al
	callq	_printf
	xorl	%eax, %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc
                                        ## -- End function
	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"Usuario, ingrese un numero: "

L_.str.1:                               ## @.str.1
	.asciz	"%i"

L_.str.2:                               ## @.str.2
	.asciz	"Ahora, ingrese un segundo numero: "

L_.str.3:                               ## @.str.3
	.asciz	"El resultado de sumar %d y %i es %i\n"

.subsections_via_symbols
