
void __fastcall FUN_361428a0(int param_1)

{
  void *this;
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = 0;
  this = (void *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar2 = FUN_361438e0((int)this);
  if (0 < iVar2) {
    piVar1 = *(int **)(param_1 + 0x44);
    do {
      piVar3 = (int *)FUN_361438a0(this,iVar5);
      if (piVar1 != piVar3) {
        iVar2 = FUN_361438a0(this,iVar5);
        if ((*(int *)(iVar2 + 4) == *piVar1) &&
           (piVar3 = (int *)FUN_361438a0(this,iVar5), *piVar3 == *(int *)(param_1 + 0x48))) {
          uVar4 = FUN_361438a0(this,iVar5);
          *(undefined4 *)(param_1 + 0x3c) = uVar4;
        }
        else {
          piVar3 = (int *)FUN_361438a0(this,iVar5);
          if ((*piVar3 == piVar1[1]) &&
             (iVar2 = FUN_361438a0(this,iVar5), *(int *)(iVar2 + 4) == *(int *)(param_1 + 0x48))) {
            uVar4 = FUN_361438a0(this,iVar5);
            *(undefined4 *)(param_1 + 0x40) = uVar4;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar2 = FUN_361438e0((int)this);
    } while (iVar5 < iVar2);
  }
  return;
}

