.MODEL SMALL
.CODE
.386
.STARTUP

MOV AX, 12H
MOV BX, 2H
MOV CX, 10H
MOV DX, 20H

ADD AX, BX
ADC AX, CX
ADC AX, DX

.EXIT
END
