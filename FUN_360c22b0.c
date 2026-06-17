
void __cdecl FUN_360c22b0(int param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_3621441a;
  local_c = ExceptionList;
  iVar6 = 0;
  if (param_2 == 0) {
    uVar7 = 0x3f;
  }
  else {
    if (((byte)DAT_362cba54 & 1) == 0) {
      return;
    }
    uVar7 = 0x3e;
  }
  ExceptionList = &local_c;
  (*DAT_362c4654)(uVar7);
  iVar2 = *(int *)(param_1 + 4);
  piVar1 = (int *)(iVar2 + 0x20);
  iStack_18 = -1;
  iStack_14 = 0;
  uStack_4 = 0;
  if (0 < *piVar1) {
    do {
      iVar5 = *(int *)(iVar2 + 0x24);
      uVar3 = *(uint *)(iStack_14 * 0x70 + 0x48 + iVar5);
      iVar5 = iStack_14 * 0x70 + iVar5;
      if (((uVar3 & 8) != 0) || (*(int *)(iVar5 + 0x68) == 0)) break;
      if ((((param_3 & uVar3) == 0) ||
          (((param_2 != 0 && ((uVar3 & 1) == 0)) || ((*(uint *)(iVar5 + 0x40) & DAT_362cba64) == 0))
          )) || ((*(uint *)(iVar5 + 0x44) & DAT_362cba64) != 0)) {
        if (0 < iVar6) {
          FUN_360c0790();
        }
        iVar6 = 0;
      }
      else {
        if (((param_3 & 0x20) != 0) && (iVar4 = *(int *)(iVar5 + 0x50), iStack_18 != iVar4)) {
          if (0 < iVar6) {
            FUN_360c0790();
          }
          FUN_360c0830();
          iVar6 = 0;
          iStack_18 = iVar4;
        }
        iVar6 = iVar6 + *(int *)(iVar5 + 0x6c);
      }
      iStack_14 = iStack_14 + 1;
    } while (iStack_14 < *piVar1);
  }
  uStack_4 = 0xffffffff;
  if (0 < iVar6) {
    FUN_360c0790();
  }
  ExceptionList = local_c;
  return;
}

