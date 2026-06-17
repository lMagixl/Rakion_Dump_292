
void __cdecl FUN_360c2420(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_18;
  int iStack_14;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621442c;
  local_c = ExceptionList;
  if ((*(byte *)(param_1 + 8) & 4) == 0) {
    iVar5 = 0;
    DAT_362cba60 = 0;
    ExceptionList = &local_c;
    (*DAT_362c4654)(0x3f);
    (*DAT_362c462c)();
    (*DAT_362c4628)();
    (*DAT_362c4634)();
    (*DAT_362c45f0)();
    uVar1 = FUN_36061f20(0x362cbb2c);
    (*DAT_362c4690)(DAT_362cbb30,uVar1);
    (*DAT_362c46a0)(DAT_362cbb60);
    piVar6 = (int *)(*(int *)(param_1 + 4) + 0x20);
    iStack_14 = 0;
    uStack_4 = 0;
    piStack_10 = piVar6;
    if (0 < *piVar6) {
      do {
        iVar4 = iStack_14 * 0x70 + piVar6[1];
        if (((((*(byte *)(iStack_14 * 0x70 + 0x48 + piVar6[1]) & 8) == 0) &&
             (*(int *)(iVar4 + 0x68) != 0)) && ((DAT_362cba64 & *(uint *)(iVar4 + 0x40)) != 0)) &&
           ((DAT_362cba64 & *(uint *)(iVar4 + 0x44)) == 0)) {
          if ((*(uint *)(param_1 + 8) & 0x20) == 0) {
            if ((*(uint *)(param_1 + 8) & 0x40) == 0) {
              puVar3 = *(ulong **)(iVar4 + 4);
            }
            else {
              iVar2 = FUN_360b4650(*(uint *)(iVar4 + 0x44));
              puVar3 = (&PaletteColorValues)[iVar2];
            }
          }
          else {
            iVar2 = FUN_360b4650(*(uint *)(iVar4 + 0x40));
            puVar3 = (&PaletteColorValues)[iVar2];
          }
          FUN_360605c0(&uStack_18,(uint)puVar3 | 0xff);
          DAT_362cba50 = DAT_362cbb60 + *(int *)(iVar4 + 100) * 4;
          iVar2 = 0;
          if (0 < *(int *)(iVar4 + 0x68)) {
            do {
              *(undefined4 *)(DAT_362cba50 + iVar2 * 4) = uStack_18;
              iVar2 = iVar2 + 1;
            } while (iVar2 < *(int *)(iVar4 + 0x68));
          }
          iVar5 = iVar5 + *(int *)(iVar4 + 0x6c);
        }
        else {
          if (0 < iVar5) {
            FUN_360c0790();
            piVar6 = piStack_10;
          }
          iVar5 = 0;
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < *piVar6);
    }
    uStack_4 = 0xffffffff;
    if (0 < iVar5) {
      FUN_360c0790();
    }
  }
  ExceptionList = local_c;
  return;
}

