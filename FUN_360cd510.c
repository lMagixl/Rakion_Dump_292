
void __thiscall
FUN_360cd510(void *this,CMovableEntity *param_1,undefined4 *param_2,undefined4 *param_3,
            undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  CMovableEntity *pCVar2;
  undefined4 *puVar3;
  
  *param_2 = *(undefined4 *)(param_1 + 0x3c);
  param_2[1] = *(undefined4 *)(param_1 + 0x40);
  param_2[2] = *(undefined4 *)(param_1 + 0x44);
  pCVar2 = param_1 + 0x54;
  puVar3 = param_3;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pCVar2;
    pCVar2 = pCVar2 + 4;
    puVar3 = puVar3 + 1;
  }
  if ((*(uint *)(param_1 + 8) & 0x200) == 0) {
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_5 = *param_3;
      param_3 = param_3 + 1;
      param_5 = param_5 + 1;
    }
  }
  else {
    *param_4 = *(undefined4 *)(param_1 + 700);
    param_4[1] = *(undefined4 *)(param_1 + 0x2c0);
    param_4[2] = *(undefined4 *)(param_1 + 0x2c4);
    pCVar2 = param_1 + 0x2c8;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_5 = *(undefined4 *)pCVar2;
      pCVar2 = pCVar2 + 4;
      param_5 = param_5 + 1;
    }
    if (*(int *)(param_1 + 0x148) == *(int *)((int)this + 4)) {
      CMovableEntity::AddToMoversDuringMoving(param_1);
      return;
    }
  }
  return;
}

