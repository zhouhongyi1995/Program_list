	.file	"7.7-arrfun3.cpp"
	.text
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"Enter value #"
.LC1:
	.string	": "
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC2:
	.string	"Bad input; input process termianted.\n"
	.text
	.globl	_Z10fill_arrayPdi
	.type	_Z10fill_arrayPdi, @function
_Z10fill_arrayPdi:
.LFB1496:
	.cfi_startproc
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$40, %rsp
	.cfi_def_cfa_offset 96
	movl	%esi, 12(%rsp)
	movq	%fs:40, %rcx
	movq	%rcx, 24(%rsp)
	xorl	%ecx, %ecx
	testl	%esi, %esi
	jle	.L7
	movq	%rdi, %rbp
	movl	$0, %r12d
	leaq	_ZSt4cout(%rip), %r14
	leaq	16(%rsp), %r15
	leaq	_ZSt3cin(%rip), %r13
.L5:
	movl	$13, %edx
	leaq	.LC0(%rip), %rsi
	movq	%r14, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	leal	1(%r12), %ebx
	movl	%ebx, %esi
	movq	%r14, %rdi
	call	_ZNSolsEi@PLT
	movl	$2, %edx
	leaq	.LC1(%rip), %rsi
	movq	%rax, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movq	%r15, %rsi
	movq	%r13, %rdi
	call	_ZNSi10_M_extractIdEERSiRT_@PLT
	testb	$5, 48(%r13)
	jne	.L11
	movsd	16(%rsp), %xmm0
	pxor	%xmm1, %xmm1
	ucomisd	%xmm0, %xmm1
	ja	.L1
	movsd	%xmm0, 0(%rbp)
	addq	$8, %rbp
	movl	%ebx, %r12d
	cmpl	12(%rsp), %ebx
	jne	.L5
	jmp	.L1
.L11:
	movl	$0, %esi
	leaq	16+_ZSt3cin(%rip), %rdi
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate@PLT
	leaq	_ZSt3cin(%rip), %rbx
.L4:
	movq	%rbx, %rdi
	call	_ZNSi3getEv@PLT
	cmpl	$10, %eax
	jne	.L4
	movl	$37, %edx
	leaq	.LC2(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
.L1:
	movl	%r12d, %eax
	movq	24(%rsp), %rcx
	xorq	%fs:40, %rcx
	jne	.L12
	addq	$40, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
.L7:
	.cfi_restore_state
	movl	$0, %r12d
	jmp	.L1
.L12:
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE1496:
	.size	_Z10fill_arrayPdi, .-_Z10fill_arrayPdi
	.section	.rodata.str1.1
.LC4:
	.string	"Property #"
.LC5:
	.string	": $"
	.text
	.globl	_Z9show_arryPKdi
	.type	_Z9show_arryPKdi, @function
_Z9show_arryPKdi:
.LFB1497:
	.cfi_startproc
	pushq	%r15
	.cfi_def_cfa_offset 16
	.cfi_offset 15, -16
	pushq	%r14
	.cfi_def_cfa_offset 24
	.cfi_offset 14, -24
	pushq	%r13
	.cfi_def_cfa_offset 32
	.cfi_offset 13, -32
	pushq	%r12
	.cfi_def_cfa_offset 40
	.cfi_offset 12, -40
	pushq	%rbp
	.cfi_def_cfa_offset 48
	.cfi_offset 6, -48
	pushq	%rbx
	.cfi_def_cfa_offset 56
	.cfi_offset 3, -56
	subq	$8, %rsp
	.cfi_def_cfa_offset 64
	movslq	%esi, %r14
	testq	%r14, %r14
	je	.L13
	movq	%rdi, %r15
	movl	$0, %ebx
	leaq	_ZSt4cout(%rip), %r13
	jmp	.L18
.L21:
	call	_ZSt16__throw_bad_castv@PLT
.L16:
	movq	%rbp, %rdi
	call	_ZNKSt5ctypeIcE13_M_widen_initEv@PLT
	movq	0(%rbp), %rax
	movl	$10, %esi
	movq	%rbp, %rdi
	call	*48(%rax)
.L17:
	movsbl	%al, %esi
	movq	%r12, %rdi
	call	_ZNSo3putEc@PLT
	movq	%rax, %rdi
	call	_ZNSo5flushEv@PLT
	cmpq	%r14, %rbx
	je	.L13
.L18:
	movl	$10, %edx
	leaq	.LC4(%rip), %rsi
	movq	%r13, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	addq	$1, %rbx
	movq	%rbx, %rsi
	movq	%r13, %rdi
	call	_ZNSo9_M_insertImEERSoT_@PLT
	movl	$3, %edx
	leaq	.LC5(%rip), %rsi
	movq	%rax, %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	movsd	-8(%r15,%rbx,8), %xmm0
	movq	%r13, %rdi
	call	_ZNSo9_M_insertIdEERSoT_@PLT
	movq	%rax, %r12
	movq	(%rax), %rax
	movq	-24(%rax), %rax
	movq	240(%r12,%rax), %rbp
	testq	%rbp, %rbp
	je	.L21
	cmpb	$0, 56(%rbp)
	je	.L16
	movzbl	67(%rbp), %eax
	jmp	.L17
.L13:
	addq	$8, %rsp
	.cfi_def_cfa_offset 56
	popq	%rbx
	.cfi_def_cfa_offset 48
	popq	%rbp
	.cfi_def_cfa_offset 40
	popq	%r12
	.cfi_def_cfa_offset 32
	popq	%r13
	.cfi_def_cfa_offset 24
	popq	%r14
	.cfi_def_cfa_offset 16
	popq	%r15
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE1497:
	.size	_Z9show_arryPKdi, .-_Z9show_arryPKdi
	.globl	_Z7revaluedPdi
	.type	_Z7revaluedPdi, @function
_Z7revaluedPdi:
.LFB1498:
	.cfi_startproc
	movslq	%esi, %rsi
	testq	%rsi, %rsi
	je	.L22
	movq	%rdi, %rax
	leaq	(%rdi,%rsi,8), %rdx
.L24:
	movapd	%xmm0, %xmm1
	mulsd	(%rax), %xmm1
	movsd	%xmm1, (%rax)
	addq	$8, %rax
	cmpq	%rdx, %rax
	jne	.L24
.L22:
	rep ret
	.cfi_endproc
.LFE1498:
	.size	_Z7revaluedPdi, .-_Z7revaluedPdi
	.section	.rodata.str1.1
.LC6:
	.string	"Enter revaluation factor: "
	.section	.rodata.str1.8
	.align 8
.LC7:
	.string	"Bad input; Please enter a number: "
	.section	.rodata.str1.1
.LC8:
	.string	"Done.\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1495:
	.cfi_startproc
	pushq	%r12
	.cfi_def_cfa_offset 16
	.cfi_offset 12, -16
	pushq	%rbp
	.cfi_def_cfa_offset 24
	.cfi_offset 6, -24
	pushq	%rbx
	.cfi_def_cfa_offset 32
	.cfi_offset 3, -32
	subq	$64, %rsp
	.cfi_def_cfa_offset 96
	movq	%fs:40, %rax
	movq	%rax, 56(%rsp)
	xorl	%eax, %eax
	leaq	16(%rsp), %rbx
	movl	$5, %esi
	movq	%rbx, %rdi
	call	_Z9fill_arryPdi@PLT
	movl	%eax, %ebp
	movl	%eax, %esi
	movq	%rbx, %rdi
	call	_Z10show_arrayPKdi@PLT
	testl	%ebp, %ebp
	jle	.L27
	leaq	.LC6(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	8(%rsp), %r12
.L30:
	movq	%r12, %rsi
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSi10_M_extractIdEERSiRT_@PLT
	movq	(%rax), %rdx
	movq	-24(%rdx), %rdx
	testb	$5, 32(%rax,%rdx)
	je	.L28
	movl	$0, %esi
	leaq	16+_ZSt3cin(%rip), %rdi
	call	_ZNSt9basic_iosIcSt11char_traitsIcEE5clearESt12_Ios_Iostate@PLT
	leaq	_ZSt3cin(%rip), %rbx
.L29:
	movq	%rbx, %rdi
	call	_ZNSi3getEv@PLT
	cmpl	$10, %eax
	jne	.L29
	movl	$34, %edx
	leaq	.LC7(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZSt16__ostream_insertIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_PKS3_l@PLT
	jmp	.L30
.L28:
	leaq	16(%rsp), %rbx
	movl	%ebp, %esi
	movq	%rbx, %rdi
	movsd	8(%rsp), %xmm0
	call	_Z7revaluedPdi
	movl	%ebp, %esi
	movq	%rbx, %rdi
	call	_Z10show_arrayPKdi@PLT
.L27:
	leaq	.LC8(%rip), %rsi
	leaq	_ZSt4cout(%rip), %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSi3getEv@PLT
	leaq	_ZSt3cin(%rip), %rdi
	call	_ZNSi3getEv@PLT
	movl	$0, %eax
	movq	56(%rsp), %rcx
	xorq	%fs:40, %rcx
	jne	.L34
	addq	$64, %rsp
	.cfi_remember_state
	.cfi_def_cfa_offset 32
	popq	%rbx
	.cfi_def_cfa_offset 24
	popq	%rbp
	.cfi_def_cfa_offset 16
	popq	%r12
	.cfi_def_cfa_offset 8
	ret
.L34:
	.cfi_restore_state
	call	__stack_chk_fail@PLT
	.cfi_endproc
.LFE1495:
	.size	main, .-main
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1992:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	leaq	_ZStL8__ioinit(%rip), %rdi
	call	_ZNSt8ios_base4InitC1Ev@PLT
	leaq	__dso_handle(%rip), %rdx
	leaq	_ZStL8__ioinit(%rip), %rsi
	movq	_ZNSt8ios_base4InitD1Ev@GOTPCREL(%rip), %rdi
	call	__cxa_atexit@PLT
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE1992:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 7.5.0-6ubuntu2) 7.5.0"
	.section	.note.GNU-stack,"",@progbits
