;COLOR VERSION

tiles:
        .BYTE %00000000      ;Tiles - all 8x8 1 bit per pixel, so easy to change!
        .BYTE %00000000      ;This one is air
        .BYTE %00000000
        .BYTE %00000000
        .BYTE %00000000
        .BYTE %00000000
        .BYTE %00000000
        .BYTE %00000000

        .BYTE %11111111      ;Floor that can be walked and jumped through
        .BYTE %11101110
        .BYTE %10111011
        .BYTE %11101110
        .BYTE %10111011
        .BYTE %11101110
        .BYTE %10111011
        .BYTE %11101110

        .BYTE %11111101      ;Brick wall
        .BYTE %11111101
        .BYTE %11111101
        .BYTE %01010101
        .BYTE %01111111
        .BYTE %01111111
        .BYTE %01111111
        .BYTE %01010101

        .BYTE %00000000      ;Spike
        .BYTE %00010000
        .BYTE %00010000
        .BYTE %00010001
        .BYTE %00010101
        .BYTE %01010101
        .BYTE %01010101
        .BYTE %01010101

keyspr: .BYTE %00100100  ;Key sprite - 8x8, 1 bit per pixel
        .BYTE %10010001
        .BYTE %10010001
        .BYTE %00100100
        .BYTE %00100100
        .BYTE %10010100
        .BYTE %00100100
        .BYTE %10010100

doorspr:.BYTE %11011011   ;Door sprite - 16x16, 1 bit per pixel
        .BYTE %10110110   ;This is stored in screen format (ie 4 8x8 chunks)
        .BYTE %01101101
        .BYTE %11011011
        .BYTE %10110110
        .BYTE %01101101
        .BYTE %11011011
        .BYTE %10110110
        
        .BYTE %01101101
        .BYTE %11011011
        .BYTE %10110110
        .BYTE %01101101
        .BYTE %11011011
        .BYTE %10110110
        .BYTE %01101101
        .BYTE %11011011

        .BYTE %01101101
        .BYTE %11011011
        .BYTE %10110110
        .BYTE %01101101
        .BYTE %11011011
        .BYTE %10110110
        .BYTE %01101101
        .BYTE %11011011
        
        .BYTE %10110110
        .BYTE %01101101
        .BYTE %11011011
        .BYTE %10110110
        .BYTE %01101101
        .BYTE %11011011
        .BYTE %10110110
        .BYTE %01101101

