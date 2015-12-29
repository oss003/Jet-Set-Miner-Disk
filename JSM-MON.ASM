;Monochroom Jet Set Miner compile

MODE           equ $f0

codebase       equ $2800
               org codebase-22

;****************************************
; Header for Atom emulator Wouter Ras
		 .db "MJSM            "
		 .dw codebase
		 .dw codebase
		 .dw eind_asm-start_asm
;****************************************
start_asm    
               include loader.inc

               org $2900
               include basic.inc

               org $2ac0
               include macros.inc
               include jsm.inc
               include scrtab.inc
               include mfont.inc
               include mtiles.inc
               include msprites.inc
               include levels.inc
eind_asm
