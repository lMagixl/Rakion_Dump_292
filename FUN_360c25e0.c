
void __cdecl FUN_360c25e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iStack_28;
  undefined4 uStack_18;
  int iStack_14;
  int *piStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_36214446;
  local_c = ExceptionList;
  if ((*(byte *)(param_1 + 8) & 3) != 0) {
    iVar7 = 0;
    DAT_362cba60 = 0;
    ExceptionList = &local_c;
    (*DAT_362c4678)(0x5c);
    (*DAT_362c462c)();
    (*DAT_362c4628)();
    (*DAT_362c4634)();
    (*DAT_362c4624)();
    uVar3 = FUN_36061f20(0x362cbb2c);
    (*DAT_362c4690)(DAT_362cbb30,uVar3);
    (*DAT_362c46a0)(DAT_362cbb60);
    uVar4 = CModelRenderPrefs::GetInkColor(&_mrpModelRenderPrefs);
    iVar2 = *(int *)(param_1 + 4);
    if ((*(byte *)(param_1 + 8) & 2) != 0) {
      (*DAT_362c4654)(0x3e);
      piVar1 = (int *)(iVar2 + 0x20);
      iStack_14 = 0;
      uStack_4 = 0;
      piStack_10 = piVar1;
      if (0 < *piVar1) {
        do {
          iVar6 = iStack_14 * 0x70 + *(int *)(iVar2 + 0x24);
          if (((*(byte *)(iStack_14 * 0x70 + 0x48 + *(int *)(iVar2 + 0x24)) & 8) == 0) &&
             (*(int *)(iVar6 + 0x68) != 0)) {
            FUN_360605c0(&uStack_18,(uVar4 | 0xff) ^ 0x80808080);
            DAT_362cba50 = DAT_362cbb60 + *(int *)(iVar6 + 100) * 4;
            iVar5 = 0;
            if (0 < *(int *)(iVar6 + 0x68)) {
              do {
                *(undefined4 *)(DAT_362cba50 + iVar5 * 4) = uStack_18;
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)(iVar6 + 0x68));
            }
            iVar7 = iVar7 + *(int *)(iVar6 + 0x6c);
          }
          else {
            if (0 < iVar7) {
              FUN_360c0790();
            }
            iVar7 = 0;
          }
          iStack_14 = iStack_14 + 1;
        } while (iStack_14 < *piVar1);
      }
      uStack_4 = 0xffffffff;
      if (0 < iVar7) {
        FUN_360c0790();
      }
      (*DAT_362c4654)(0x3f);
    }
    if ((*(byte *)(param_1 + 8) & 1) != 0) {
      (*DAT_362c4654)(0x3f);
      iVar7 = 0;
      iStack_28 = 0;
      uStack_4 = 1;
      if (0 < *(int *)(iVar2 + 0x20)) {
        do {
          iVar6 = iStack_28 * 0x70 + *(int *)(iVar2 + 0x24);
          if (((*(byte *)(iStack_28 * 0x70 + 0x48 + *(int *)(iVar2 + 0x24)) & 8) == 0) &&
             (*(int *)(iVar6 + 0x68) != 0)) {
            FUN_360605c0(&uStack_18,uVar4 | 0xff);
            DAT_362cba50 = DAT_362cbb60 + *(int *)(iVar6 + 100) * 4;
            iVar5 = 0;
            if (0 < *(int *)(iVar6 + 0x68)) {
              do {
                *(undefined4 *)(DAT_362cba50 + iVar5 * 4) = uStack_18;
                iVar5 = iVar5 + 1;
              } while (iVar5 < *(int *)(iVar6 + 0x68));
            }
            iVar7 = iVar7 + *(int *)(iVar6 + 0x6c);
          }
          else {
            if (0 < iVar7) {
              FUN_360c0790();
            }
            iVar7 = 0;
          }
          iStack_28 = iStack_28 + 1;
        } while (iStack_28 < *(int *)(iVar2 + 0x20));
      }
      uStack_4 = 0xffffffff;
      if (0 < iVar7) {
        FUN_360c0790();
      }
    }
    (*DAT_362c4678)(0x5b);
  }
  ExceptionList = local_c;
  return;
}

