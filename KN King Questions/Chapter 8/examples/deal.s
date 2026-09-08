	.file	"deal.c"
	.intel_syntax noprefix
	.text
	.section	.rodata
	.align 8
.LC0:
	.string	"Enter number of cards in hand: "
.LC1:
	.string	"%d"
.LC2:
	.string	"Your hand: "
.LC3:
	.string	" %c%c"
	.text
	.globl	"main"
	.type	"main", @function
"main":
.LFB6:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 96
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -8[rbp], rax
	xor	eax, eax
	pxor	xmm0, xmm0
	movaps	XMMWORD PTR -80[rbp], xmm0
	movaps	XMMWORD PTR -64[rbp], xmm0
	movaps	XMMWORD PTR -48[rbp], xmm0
	movd	DWORD PTR -32[rbp], xmm0
	movabs	rax, 4123106164818064178
	mov	QWORD PTR -21[rbp], rax
	movabs	rax, 7019829146217429047
	mov	QWORD PTR -16[rbp], rax
	mov	DWORD PTR -25[rbp], 1936221283
	mov	edi, 0
	call	"time"@PLT
	mov	edi, eax
	call	"srand"@PLT
	lea	rax, .LC0[rip]
	mov	rdi, rax
	mov	eax, 0
	call	"printf"@PLT
	lea	rax, -92[rbp]
	lea	rdx, .LC1[rip]
	mov	rsi, rax
	mov	rdi, rdx
	mov	eax, 0
	call	__isoc23_scanf@PLT
	lea	rax, .LC2[rip]
	mov	rdi, rax
	mov	eax, 0
	call	"printf"@PLT
	jmp	.L2
.L3:
	call	"rand"@PLT
	mov	edx, eax
	mov	eax, edx
	sar	eax, 31
	shr	eax, 30
	add	edx, eax
	and	edx, 3
	sub	edx, eax
	mov	DWORD PTR -88[rbp], edx
	call	"rand"@PLT
	mov	edx, eax
	movsxd	rax, edx
	imul	rax, rax, 1321528399
	shr	rax, 32
	sar	eax, 2
	mov	ecx, edx
	sar	ecx, 31
	sub	eax, ecx
	mov	DWORD PTR -84[rbp], eax
	mov	ecx, DWORD PTR -84[rbp]
	mov	eax, ecx
	add	eax, eax
	add	eax, ecx
	sal	eax, 2
	add	eax, ecx
	sub	edx, eax
	mov	DWORD PTR -84[rbp], edx
	mov	eax, DWORD PTR -84[rbp]
	movsxd	rcx, eax
	mov	eax, DWORD PTR -88[rbp]
	movsxd	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 2
	add	rax, rdx
	add	rax, rbp
	add	rax, rcx
	sub	rax, 80
	movzx	eax, BYTE PTR [rax]
	xor	eax, 1
	test	al, al
	je	.L2
	mov	eax, DWORD PTR -84[rbp]
	movsxd	rcx, eax
	mov	eax, DWORD PTR -88[rbp]
	movsxd	rdx, eax
	mov	rax, rdx
	add	rax, rax
	add	rax, rdx
	sal	rax, 2
	add	rax, rdx
	add	rax, rbp
	add	rax, rcx
	sub	rax, 80
	mov	BYTE PTR [rax], 1
	mov	eax, DWORD PTR -92[rbp]
	sub	eax, 1
	mov	DWORD PTR -92[rbp], eax
	mov	eax, DWORD PTR -88[rbp]
	cdqe
	movzx	eax, BYTE PTR -25[rbp+rax]
	movsx	edx, al
	mov	eax, DWORD PTR -84[rbp]
	cdqe
	movzx	eax, BYTE PTR -21[rbp+rax]
	movsx	eax, al
	lea	rcx, .LC3[rip]
	mov	esi, eax
	mov	rdi, rcx
	mov	eax, 0
	call	"printf"@PLT
.L2:
	mov	eax, DWORD PTR -92[rbp]
	test	eax, eax
	jg	.L3
	mov	edi, 10
	call	"putchar"@PLT
	mov	eax, 0
	mov	rdx, QWORD PTR -8[rbp]
	sub	rdx, QWORD PTR fs:40
	je	.L5
	call	"__stack_chk_fail"@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	"main", .-"main"
	.ident	"GCC: (GNU) 16.2.1 20260810"
	.section	.note.GNU-stack,"",@progbits
