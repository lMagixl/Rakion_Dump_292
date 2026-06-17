
/* public: void __thiscall CSkeleton::AddSkletonLod(struct SkeletonLOD &) */

void __thiscall CSkeleton::AddSkletonLod(CSkeleton *this,SkeletonLOD *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  
                    /* 0x1711f0  1017  ?AddSkletonLod@CSkeleton@@QAEXAAUSkeletonLOD@@@Z */
  iVar2 = FUN_3600c5c0((undefined4 *)(this + 0x14));
  FUN_361713b0(this + 0x14,iVar2 + 1);
  puVar1 = (undefined4 *)(*(int *)(this + 0x18) + iVar2 * 0x18);
  *puVar1 = *(undefined4 *)param_1;
  FUN_360165e0(puVar1 + 1,(undefined4 *)(param_1 + 4));
  FUN_36014140(puVar1 + 3,(undefined4 *)(param_1 + 0xc));
  pcVar3 = StringDuplicate(*(char **)(param_1 + 0x14));
  StringFree((char *)puVar1[5]);
  puVar1[5] = pcVar3;
  return;
}

