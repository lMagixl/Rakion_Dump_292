
void __cdecl FUN_36202220(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint auStack_20 [4];
  undefined4 auStack_10 [4];
  
  iVar1 = *(int *)(&DAT_362afdd4 + (((int)param_3 >> 2 & 3U) + ((int)param_4 >> 2 & 3U) * 4) * 4);
  uVar4 = 0;
  do {
    if (uVar4 == 3) {
      *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 3);
    }
    else {
      bVar6 = *(byte *)(uVar4 + param_1) & 0xf0;
      bVar3 = *(byte *)(uVar4 + param_1) >> 1;
      uVar5 = bVar3 & 7;
      *(byte *)(uVar4 + param_2) = bVar6;
      auStack_20[uVar4] = uVar5;
      if (((bVar3 & 7) != 0) && (bVar6 != 0xf0)) {
        uVar2 = *(undefined4 *)
                 (&DAT_362afbd4 +
                 ((param_3 & 3) + ((param_4 & 3) + uVar5 * 4 + iVar1 * -0x1c) * 4) * 4);
        auStack_10[uVar4] = uVar2;
        *(byte *)(uVar4 + param_2) = (char)uVar2 * '\x10' + bVar6;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  return;
}

