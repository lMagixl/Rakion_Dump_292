
void __cdecl FUN_36178920(int param_1,int param_2,uint param_3)

{
  undefined4 *this;
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_2 * 0x160 + 0xc + *(int *)(param_1 + 0x104));
  uVar4 = param_3;
  if ((*(int *)(param_2 * 0x160 + *(int *)(param_1 + 0x104) + 8) != iVar1) &&
     (uVar4 = param_3 | 1, 0 < iVar1)) {
    uVar4 = param_3 | 5;
  }
  this = (undefined4 *)(param_1 + 0x110);
  iVar1 = FUN_36179270((int)this);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = *(int **)(param_1 + 0x114);
    do {
      if (*piVar3 == param_2) {
        if (iVar2 != -1) {
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 3;
    } while (iVar2 < iVar1);
  }
  iVar2 = *(int *)(param_1 + 0x118) + 1;
  *(int *)(param_1 + 0x118) = iVar2;
  iVar1 = FUN_361794e0(this);
  if (iVar1 < iVar2) {
    iVar1 = FUN_361794e0(this);
    FUN_361797d0(this,iVar1 + *(int *)(param_1 + 0x11c));
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x114) + -0xc + *(int *)(param_1 + 0x118) * 0xc);
  piVar3[2] = 0;
  *piVar3 = param_2;
  piVar3[1] = uVar4;
  return;
}

