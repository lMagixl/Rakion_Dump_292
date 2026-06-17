
void __thiscall FUN_361a92f0(void *this,uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621bd0c;
  local_c = ExceptionList;
  if ((*(uint *)((int)this + 4) < param_1) && (param_1 < *(int *)this + 0x4000000U)) {
    ExceptionList = &local_c;
    FUN_361a3220((LPCRITICAL_SECTION)((int)this + 0x24));
    iVar1 = *(int *)(param_1 - 0xc);
    piVar3 = (int *)(param_1 - 0x10);
    *(undefined1 *)(param_1 - 8) = 0;
    if (*(char *)(iVar1 + 8) == '\0') {
      FUN_361a9000(this,iVar1);
      puVar2 = *(undefined4 **)(*(int *)(param_1 - 0xc) + 4);
      *(undefined4 **)(param_1 - 0xc) = puVar2;
      *puVar2 = piVar3;
    }
    iVar1 = *piVar3;
    if (iVar1 == 0) {
      puVar2 = *(undefined4 **)(param_1 - 0xc);
      *(undefined4 **)((int)this + 4) = puVar2;
      *puVar2 = 0;
      *(undefined1 *)((int)this + 0x20) = 1;
    }
    else if (*(char *)(iVar1 + 8) == '\0') {
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 - 0xc);
      **(int **)(param_1 - 0xc) = *piVar3;
      FUN_361a90c0((int)this);
    }
    else {
      FUN_361a8f80(this,(int)piVar3);
    }
    local_4 = 0xffffffff;
    FUN_361a3230((LPCRITICAL_SECTION)((int)this + 0x24));
  }
  ExceptionList = local_c;
  return;
}

