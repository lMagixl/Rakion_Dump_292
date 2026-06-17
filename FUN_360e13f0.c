
void __thiscall FUN_360e13f0(void *this,void *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_8;
  
  iVar2 = FUN_360ded70((int)this + 0x10);
  if ((iVar2 != 0) && (puVar5 = (undefined4 *)0x0, *(int *)this != 0)) {
    bVar1 = false;
    local_8 = 0;
    iVar2 = FUN_360ded70((int)this + 0x10);
    if (0 < iVar2) {
      iVar2 = 0;
      do {
        puVar6 = (undefined4 *)(*(int *)((int)this + 0x14) + iVar2);
        if (bVar1) {
          puVar3 = puVar5 + 6;
        }
        else {
          puVar3 = (undefined4 *)FUN_3604c350(param_1,1);
          puVar3[0xc] = param_2;
          puVar5 = puVar3;
        }
        *puVar3 = *puVar6;
        puVar3[1] = puVar6[1];
        puVar3[2] = puVar6[2];
        puVar3[3] = puVar6[3];
        puVar3[4] = puVar6[4];
        puVar3[5] = puVar6[5];
        bVar1 = !bVar1;
        local_8 = local_8 + 1;
        iVar2 = iVar2 + 0x18;
        iVar4 = FUN_360ded70((int)this + 0x10);
      } while (local_8 < iVar4);
    }
  }
  return;
}

