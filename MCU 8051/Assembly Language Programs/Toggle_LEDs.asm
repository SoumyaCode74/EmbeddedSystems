ORG 0000H
MOV A, #0AAH
CONT:MOV P1, A
MOV R1, #0FFH
MOV R2, #0AH
RL A
WAIT:NOP
DJNZ R1, WAIT
;MOV R1, #0FFH
;DJNZ R2, WAIT
SJMP CONT
    
