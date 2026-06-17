
void __cdecl FUN_36201f90(int param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  uint auStack_20 [4];
  undefined4 auStack_10 [4];
  
  iVar2 = *(int *)(&DAT_362afdd4 + (((int)param_3 >> 2 & 3U) + ((int)param_4 >> 2 & 3U) * 4) * 4);
  uVar4 = 0;
  do {
    if (uVar4 == 1) {
      bVar1 = *(byte *)(param_1 + 1);
      bVar5 = bVar1 & 0xfc;
      *(byte *)(param_2 + 1) = bVar5;
      if (((bVar1 & 3) != 0) && (bVar5 != 0xfc)) {
        *(byte *)(param_2 + 1) =
             (char)*(undefined4 *)
                    (&DAT_362afbd4 +
                    ((param_3 & 3) + ((param_4 & 3) + (bVar1 & 3) * 8 + iVar2 * -0x1c) * 4) * 4) *
             '\x04' + bVar5;
      }
    }
    else {
      bVar1 = *(byte *)(uVar4 + param_1);
      bVar5 = bVar1 & 0xf8;
      *(byte *)(uVar4 + param_2) = bVar5;
      auStack_20[uVar4] = bVar1 & 7;
      if (((bVar1 & 7) != 0) && (bVar5 != 0xf8)) {
        uVar3 = *(undefined4 *)
                 (&DAT_362afa54 +
                 (((param_3 & 3) - 0x10) + ((param_4 & 3) + (iVar2 * 7 + (bVar1 & 7)) * 4) * 4) * 4)
        ;
        auStack_10[uVar4] = uVar3;
        *(byte *)(uVar4 + param_2) = (char)uVar3 * '\b' + bVar5;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}

