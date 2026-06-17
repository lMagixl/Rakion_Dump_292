
/* void * __cdecl MEM_CAlloc(unsigned int,unsigned int) */

void * __cdecl MEM_CAlloc(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
                    /* 0x2b760  2576  ?MEM_CAlloc@@YAPAXII@Z */
  uVar3 = param_1 * param_2;
  puVar1 = MEM_MAlloc(uVar3);
  if (puVar1 != (undefined4 *)0x0) {
    puVar4 = puVar1;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
  }
  return puVar1;
}

