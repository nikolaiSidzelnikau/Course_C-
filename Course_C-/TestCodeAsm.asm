.data
   p qword ?
   a dword 0
   b dword 0
   c dword 0
   swapped byte 0

   i dword 0
   j dword 0
   x dword 0

.code

; // time 23.1 lenght array 100 000
bubbleSortAsm proc
;void bubbleArrayAsm(int array[], int sizeArray) RCX - *array ,RDX - sizeArray

	lea rbx,[rcx]
do_While:
	mov ecx,0
	mov al,0
	mov swapped,al
	dec edx
	cmp edx,0
je end_While	;jamp a == b
for1:
	cmp ecx,edx
je do_While		;jamp a == b
;if
	mov eax,[rbx+rcx*4]
	inc ecx
	cmp eax,[rbx + rcx * 4]
	dec ecx
jb end_for		;jamp else a < b
	mov eax,[rbx+rcx*4]
	inc ecx
	xor eax,[rbx+rcx*4]
	xor [rbx+rcx*4],eax
	dec ecx
	xor [rbx+rcx*4],eax
	mov al,0
	mov al,1
	mov swapped,al
;end_if

end_for:
	inc ecx
jmp for1
;if
	cmp swapped,0
je end_While	;jamp a == b
;end_if	
jmp do_While

end_While:
ret
bubbleSortAsm endp

; // time 22.8 lenght array 100 000
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