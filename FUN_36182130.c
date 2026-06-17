
void __cdecl FUN_36182130(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  (*DAT_362c4674)(0);
  iVar4 = FUN_361743a0((undefined4 *)(param_1 + 0xf8));
  if (DAT_362c5438 < 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar4 + -1;
    if (DAT_362c5438 <= iVar4 + -1) {
      iVar5 = DAT_362c5438;
    }
  }
  iVar4 = *(int *)(iVar5 * 0x10 + 4 + *(int *)(param_1 + 0xfc));
  if (0 < iVar4) {
    iVar5 = *(int *)(iVar5 * 0x10 + *(int *)(param_1 + 0xfc)) * 0x2c;
    do {
      iVar1 = *(int *)(param_1 + 0xf4);
      FUN_3617db30(0xff00ff);
      FUN_3605cd80((void *)(iVar1 + iVar5),&fStack_c);
      fVar3 = DAT_36300d1c * fStack_8 + DAT_36300d18 * fStack_c + DAT_36300d20 * fStack_4 +
              DAT_36300d24;
      fVar2 = DAT_36300d2c * fStack_8 + DAT_36300d28 * fStack_c + DAT_36300d30 * fStack_4 +
              DAT_36300d34;
      fStack_4 = DAT_36300d38 * fStack_c + DAT_36300d3c * fStack_8 + DAT_36300d40 * fStack_4 +
                 DAT_36300d44;
      fStack_c = fVar3;
      fStack_8 = fVar2;
      CDrawPort::DrawPoint3D(DAT_36300c54,fVar3,fVar2,fStack_4,0xff00ffff,0x40400000);
      iVar5 = iVar5 + 0x2c;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

