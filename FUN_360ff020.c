
undefined4 __thiscall FUN_360ff020(void *this,int *param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (param_2 == 0) {
    uVar2 = 0x80;
    uVar5 = 1;
    uVar4 = 0x100;
  }
  else {
    uVar2 = 4;
    uVar5 = 2;
    uVar4 = 8;
  }
  *param_1 = 0;
  if ((*(int *)((int)this + 0x14) != 0) &&
     (piVar1 = *(int **)((int)this + 8), (uVar2 & *(ushort *)(piVar1 + -0x104)) != 0)) {
    iVar3 = piVar1[-0x105];
    for (; ((*piVar1 != 0 && (piVar1[-0x105] == iVar3)) &&
           ((uVar5 & *(ushort *)(piVar1 + -0x104)) != 0)); piVar1 = (int *)*piVar1) {
      if ((uVar4 & *(ushort *)(piVar1 + -0x104)) != 0) {
        return 1;
      }
      *param_1 = *param_1 + piVar1[-0x103] + -0xc;
      iVar3 = iVar3 + 1;
    }
    return 0;
  }
  return 0;
}

