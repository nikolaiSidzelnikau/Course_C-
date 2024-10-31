.code

additions proc
; int additions(int a, int b)
; RCX - a
; RDX - b
; Возврат: RAX

	mov eax, ecx
	add eax, edx

	ret

additions endp


end