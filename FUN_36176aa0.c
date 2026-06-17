
void __cdecl FUN_36176aa0(CAnimData *param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  CAnimData *pCVar2;
  long lVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  pCVar2 = param_1;
  if ((*(uint *)(param_1 + 0x20) == param_2) && (*(uint *)(param_1 + 0x24) == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    (**(code **)(*(int *)param_1 + 8))();
    CAnimData::DefaultAnimation(param_1);
    *(uint *)(param_1 + 0x20) = param_2;
    *(uint *)(param_1 + 0x24) = param_3;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    param_1 = (CAnimData *)param_3;
    if ((int)param_2 <= (int)param_3) {
      param_1 = (CAnimData *)param_2;
    }
    iVar6 = 0x1f;
    if (param_1 != (CAnimData *)0x0) {
      for (; (uint)param_1 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    lVar3 = GetMipmapOffset(iVar6 + 1,param_2,param_3);
    pvVar4 = AllocMemory(lVar3 << 2);
    *(void **)(pCVar2 + 0x60) = pvVar4;
    *(long *)(pCVar2 + 0x30) = lVar3 << 2;
    *(undefined4 *)(pCVar2 + 0x34) = 1;
    *(undefined4 *)(pCVar2 + 0x28) = 0;
    param_1 = (CAnimData *)param_3;
    if ((int)param_2 <= (int)param_3) {
      param_1 = (CAnimData *)param_2;
    }
    iVar6 = 0x1f;
    if (param_1 != (CAnimData *)0x0) {
      for (; (uint)param_1 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    *(int *)(pCVar2 + 0x2c) = iVar6 + 1;
  }
  if ((param_4 & 0x10000) != 0) {
    puVar7 = *(undefined4 **)(pCVar2 + 0x60);
    for (uVar5 = param_2 * param_3 & 0x3fffffff; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar7 = 0xffffffff;
      puVar7 = puVar7 + 1;
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined1 *)puVar7 = 0xff;
      puVar7 = (undefined4 *)((int)puVar7 + 1);
    }
  }
  *(undefined4 *)(pCVar2 + 0x1c) = 0;
  if ((param_4 & 2) != 0) {
    *(undefined4 *)(pCVar2 + 0x1c) = 0x100;
    *(undefined4 *)(pCVar2 + 0x4c) = DAT_362c9b54;
    return;
  }
  *(undefined4 *)(pCVar2 + 0x4c) = DAT_362c9b54;
  return;
}

