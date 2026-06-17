
void __cdecl FUN_36062d20(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  for (uVar5 = param_3 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = ((uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> 8 |
               uVar1 & 0xff000000;
    param_2[1] = ((uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18) >> 8 |
                 uVar2 & 0xff000000;
    param_2[2] = ((uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18) >> 8 |
                 uVar3 & 0xff000000;
    param_2[3] = ((uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18) >> 8 |
                 uVar4 & 0xff000000;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  if ((param_3 & 2) != 0) {
    uVar5 = *param_1;
    uVar1 = param_1[1];
    *param_2 = ((uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) >> 8 |
               uVar5 & 0xff000000;
    param_2[1] = ((uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> 8 |
                 uVar1 & 0xff000000;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
  }
  if ((param_3 & 1) != 0) {
    uVar5 = *param_1;
    *param_2 = ((uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18) >> 8 |
               uVar5 & 0xff000000;
  }
  return;
}

