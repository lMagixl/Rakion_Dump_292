
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_36116b00(void *this,int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_36218599;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  if (0 < *param_1) {
    iVar4 = 0;
    ExceptionList = &local_c;
    do {
      *(uint *)(iVar4 + 0x3c + param_1[1]) = *(uint *)(iVar4 + 0x3c + param_1[1]) & 0xfffffffe;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x48;
    } while (iVar3 < *param_1);
  }
  piVar1 = param_1 + 6;
  iVar3 = 0;
  local_4 = 0;
  if (0 < *piVar1) {
    do {
      puVar2 = (undefined4 *)(iVar3 * 0x1d0 + param_1[7]);
      if (*(int *)(*(int *)*puVar2 + 0x74) != 0) {
        FUN_361164e0(this,puVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar1);
  }
  if (__wrpWorldRenderPrefs != 0) {
    iVar3 = 0;
    local_4 = 1;
    if (0 < *piVar1) {
      do {
        if (*(int *)(**(int **)(iVar3 * 0x1d0 + param_1[7]) + 0x74) == 0) {
          FUN_361164e0(this,(undefined4 *)(iVar3 * 0x1d0 + param_1[7]));
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *piVar1);
    }
  }
  ExceptionList = local_c;
  return;
}

