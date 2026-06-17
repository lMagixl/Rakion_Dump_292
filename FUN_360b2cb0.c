
int __fastcall FUN_360b2cb0(int param_1)

{
  void *this;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  void *this_00;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  this = (void *)(param_1 + 0x28);
  iVar5 = 0;
  iVar1 = FUN_360b0fc0((int)this);
  if (0 < iVar1) {
    do {
      iVar1 = FUN_360b3ab0(this,iVar5);
      *(undefined4 *)(iVar1 + 0x18) = 0xffffffff;
      iVar5 = iVar5 + 1;
      iVar1 = FUN_360b0fc0((int)this);
    } while (iVar5 < iVar1);
  }
  this_00 = (void *)(param_1 + 0x14);
  iVar5 = 0;
  iVar1 = FUN_360b3d10((int)this_00);
  if (0 < iVar1) {
    do {
      puVar2 = (undefined4 *)FUN_360b3aa0(this_00,iVar5);
      piVar6 = (int *)*puVar2;
      do {
        iVar1 = *(int *)(piVar6[2] + 0x18);
        if (iVar1 == -1) {
          iVar1 = FUN_360b3aa0(this_00,iVar5);
          *(undefined4 *)(piVar6[2] + 0x18) = *(undefined4 *)(iVar1 + 4);
        }
        else if ((iVar1 != -2) &&
                (iVar7 = FUN_360b3aa0(this_00,iVar5), iVar1 != *(int *)(iVar7 + 4))) {
          *(undefined4 *)(piVar6[2] + 0x18) = 0xfffffffe;
        }
        piVar6 = (int *)*piVar6;
        piVar3 = (int *)FUN_360b3aa0(this_00,iVar5);
      } while (piVar6 != (int *)*piVar3);
      iVar5 = iVar5 + 1;
      iVar1 = FUN_360b3d10((int)this_00);
    } while (iVar5 < iVar1);
  }
  iVar5 = 0;
  iVar7 = 0;
  iVar1 = FUN_360b0fc0((int)this);
  if (0 < iVar1) {
    do {
      iVar4 = FUN_360b3ab0(this,iVar7);
      if (-1 < *(int *)(iVar4 + 0x18)) {
        iVar5 = iVar5 + 1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  return iVar5;
}

