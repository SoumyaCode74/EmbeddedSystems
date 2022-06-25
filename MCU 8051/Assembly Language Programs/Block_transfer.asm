;To copy values of reg bank 1 to
;reg bank 2
MOV R7, #0AH ;Counter variable
MOV R0, #08H ;Assigning address of reg
			;bank 1 R0
	  MOV A, #00H
next: ADD A, #05H
      MOV @R0, A
      INC R0
      DJNZ R7, next
	  
MOV R7, #0AH
MOV R0, #08H
MOV R1, #20H

here: MOV A, @R0
	  MOV @R1, A
      INC R0
	  INC R1
	  DJNZ R7, here
fixed: sjmp fixed



