.data
   p qword ?
   a dword 0
   b dword 0
   c dword 0

   i dword 0
   j dword 0
   x dword 0
.code

sortArrayAsm proc 
; void sortArrayAsm(int array[], int sizeArray) RCX - *array ,RDX - sizeArray

	lea rbx,[rcx]

for_I:
	cmp i,edx
	mov esi,i
jae for_I_End
	mov eax,[rbx+(rsi*4)]
	mov a,eax

	mov eax,x
	mov j,eax
for_J:
	cmp j,edx
jae for_J_End
	mov ecx,j
	inc j
	mov eax,[rbx+(rcx*4)]
	cmp eax,[rbx+(rsi*4)]
jbe if_J1
jae end_If
if_J1:
	mov eax,a
	cmp eax,[rbx+(rcx*4)]
jae if_J2
jbe end_If
if_J2:
	mov eax,[rbx+(rcx*4)]
	mov a,eax
	dec j
	mov eax,j
	inc j
	mov b,eax
end_If:
jmp for_J

for_J_End:
	mov ecx,i
	mov eax,[rbx+(rcx*4)]
	mov esi,b
	mov [rbx+(rsi*4)],eax
	mov eax,a
	mov [rbx+(rcx*4)],eax
	inc x
	inc i
jmp for_I

for_I_End:
ret

sortArrayAsm endp

end