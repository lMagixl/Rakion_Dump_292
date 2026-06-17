
void __thiscall FUN_360e1630(void *this,void *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_8;
  
  iVar2 = FUN_360deef0((int)this + 8);
  if ((iVar2 != 0) && (puVar4 = (undefined4 *)0x0, *(int *)this != 0)) {
    bVar1 = false;
    local_8 = 0;
    iVar2 = FUN_360deef0((int)this + 8);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar5 = (undefined4 *)(*(int *)((int)this + 0xc) + iVar2);
        if (bVar1) {
          puVar4[3] = *puVar5;
          puVar4[4] = puVar5[1];
          puVar4[5] = puVar5[2];
        }
        else {
          puVar4 = (undefined4 *)FUN_360e1150(param_1,1);
          puVar4[6] = param_2;
          *puVar4 = *puVar5;
          puVar4[1] = puVar5[1];
          puVar4[2] = puVar5[2];
        }
        bVar1 = !bVar1;
        local_8 = local_8 + 1;
        iVar2 = iVar2 + 0xc;
        iVar3 = FUN_360deef0((int)this + 8);
      } while (local_8 < iVar3);
    }
  }
  return;
}

