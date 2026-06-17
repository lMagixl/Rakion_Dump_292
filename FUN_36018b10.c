
void __thiscall FUN_36018b10(void *this,undefined4 *param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint unaff_EDI;
  
  uVar2 = *(uint *)((int)this + 0x20);
  uVar1 = FUN_3600fd80((int)param_2);
  uVar1 = uVar1 & uVar2;
  if (*(uint *)((int)this + 0x24) <= uVar1) {
    uVar1 = uVar1 + (-1 - (uVar2 >> 1));
  }
  piVar3 = *(int **)(*(int *)((int)this + 0x14) + uVar1 * 4);
  if (piVar3 != *(int **)(*(int *)((int)this + 0x14) + uVar1 * 4 + 4)) {
    do {
      if (*(uint *)((int)param_2 + 0x18) < 0x10) {
        uVar2 = (int)param_2 + 4;
      }
      else {
        uVar2 = *(uint *)((int)param_2 + 4);
      }
      uVar2 = FUN_3600e4d0(piVar3 + 2,0,piVar3[7],uVar2,*(char **)((int)param_2 + 0x14),unaff_EDI);
      if (-1 < (int)uVar2) {
        if ((uint)piVar3[8] < 0x10) {
          piVar4 = piVar3 + 3;
        }
        else {
          piVar4 = (int *)piVar3[3];
        }
        uVar2 = FUN_3600e4d0(param_2,0,*(undefined4 *)((int)param_2 + 0x14),(uint)piVar4,
                             (char *)piVar3[7],unaff_EDI);
        if (-1 < (int)uVar2) {
          *param_1 = piVar3;
          return;
        }
        *param_1 = *(undefined4 *)((int)this + 8);
        return;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(*(int *)((int)this + 0x14) + 4 + uVar1 * 4));
  }
  *param_1 = *(undefined4 *)((int)this + 8);
  return;
}

