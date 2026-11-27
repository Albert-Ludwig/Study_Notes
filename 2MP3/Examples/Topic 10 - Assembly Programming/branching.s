		mov		R0, #10
		mov		R1, #15
if
		cmp		R0, R1
		BEQ		true
		BNE		false
true
		mov		R2, #1
		B		endif
false
		mov		R2, #2
		B		endif
endif
		mov		R0, #0
