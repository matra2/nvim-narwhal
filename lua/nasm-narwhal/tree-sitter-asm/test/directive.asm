[bits 64]
use32
[default abs]
[segment .te~~@xt align=8*2]
absolute 0xaa
global _strt:function, hash:data
static _strt2:function, hash2:data
[float up]

[warning push]
[warning *all]
[warning error=float]

;common  intarray 100:4   ; works in ELF: 4 byte aligned
;common  commvar  4+1:near  ; works in OBJ
;common  intvar  4

