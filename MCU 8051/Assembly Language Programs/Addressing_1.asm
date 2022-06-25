MOV PSW, #08H ;Selecting Bank 1
MOV R0, #22H ;Moving 22H to R0
MOV R1, #08H ;Saving address of Bank 1
			 ;R0 in R1
MOV A, @R1   ;Moving value of
			 ;address 08H to Acc
