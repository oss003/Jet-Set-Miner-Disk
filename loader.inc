load_pos   equ $3a4e
wait_fly   equ $fb83
importdata equ $ffe0
MAXLEVEL   equ $32d   ; LSB address of var L

;Linkadres game, clear break and start basic program at $2900

basicstart:
         lda #0
         sta $2901
         lda #$29
         sta 18
         jmp $ce86

;Entry if 4 levels are completed
 
loadlev:
         lda LEVBLK       ; MAXLEVEL reached?
         cmp MAXLEVEL
         bne copytext

         lda #0           ; If MAXLEVEL reached:
         sta LEVBLK       ; Load levelblock 0
         dec TIMEL        ; TIME = TIME-100

copytext:                 ; Set Filenr after DAT.
         clc
         adc #$30
         sta filename+3

         lda #12
         jsr $fff4
         jsr $f7d1
         .db 'LOADING '
         nop
         ldx #$ff
prt_name:
         inx
         lda filename,x
         jsr $fff4
         cmp #$0d
         bne prt_name
                  
         inc LEVBLK

         jsr loadfile

         jsr $fb81 ; Wait 0,5 sec
         lda #MODE  ; Clear4
         sta $B000
         rts

;Load datafile DATx with tiles, sprites and leveldata

loadfile:
         lda #<filename
         sta tmp
         lda #>filename
         sta tmp+1          

         lda #<load_pos
         sta tmp+2
         lda #>load_pos
         sta tmp+3          

         lda #$b2
         sta tmp+4
         lda #$c2
         sta tmp+5

         ldx #tmp
         jmp importdata

filename:
        .db 'DATx',$0D