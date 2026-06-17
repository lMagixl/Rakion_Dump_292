
/* void __cdecl Particle_Sort(int) */

void __cdecl Particle_Sort(int param_1)

{
  undefined4 *puVar1;
  size_t sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  void *_Base;
  void *pvVar8;
  undefined4 *puVar9;
  size_t _NumOfElements;
  int iVar10;
  _PtFuncCompare *_PtFuncCompare;
  int local_78;
  int local_74;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x6bd30  2758  ?Particle_Sort@@YAXH@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211e30;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar7 = FUN_36061f20(0x362c54d8);
  _NumOfElements = (int)(iVar7 + (iVar7 >> 0x1f & 3U)) >> 2;
  if (0 < (int)_NumOfElements) {
    sVar2 = _NumOfElements * 4 + 4;
    local_4 = 0;
    _Base = (void *)thunk_FUN_361bf99c(sVar2);
    iVar7 = 0;
    if (0 < (int)_NumOfElements) {
      do {
        *(int *)((int)_Base + iVar7 * 4) = iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)_NumOfElements);
    }
    if (param_1 == 0) {
      _PtFuncCompare = (_PtFuncCompare *)&LAB_3606bca0;
    }
    else {
      _PtFuncCompare = (_PtFuncCompare *)&LAB_3606bcd0;
    }
    qsort(_Base,_NumOfElements,4,_PtFuncCompare);
    local_4 = CONCAT31(local_4._1_3_,1);
    pvVar8 = (void *)thunk_FUN_361bf99c(sVar2);
    iVar7 = 0;
    if (0 < (int)_NumOfElements) {
      do {
        *(int *)((int)pvVar8 + *(int *)((int)_Base + iVar7 * 4) * 4) = iVar7;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)_NumOfElements);
    }
    iVar7 = 0;
    if (0 < (int)_NumOfElements) {
      local_74 = 0;
      local_78 = 0;
      iVar10 = 0;
      do {
        iVar3 = *(int *)((int)pvVar8 + iVar7 * 4);
        if (iVar3 == iVar7) {
          local_78 = local_78 + 0x20;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 0x30;
          local_74 = local_74 + 0x10;
        }
        else {
          puVar1 = (undefined4 *)(iVar10 + DAT_362c54dc);
          puVar9 = (undefined4 *)(iVar3 * 0x30 + DAT_362c54dc);
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          uVar6 = puVar9[2];
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          puVar9[2] = puVar1[2];
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1 = (undefined4 *)(iVar10 + 0xc + DAT_362c54dc);
          puVar9 = (undefined4 *)(*(int *)((int)pvVar8 + iVar7 * 4) * 0x30 + 0xc + DAT_362c54dc);
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          uVar6 = puVar9[2];
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          puVar9[2] = puVar1[2];
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1 = (undefined4 *)(iVar10 + 0x18 + DAT_362c54dc);
          puVar9 = (undefined4 *)(*(int *)((int)pvVar8 + iVar7 * 4) * 0x30 + 0x18 + DAT_362c54dc);
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          uVar6 = puVar9[2];
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          puVar9[2] = puVar1[2];
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1 = (undefined4 *)(iVar10 + 0x24 + DAT_362c54dc);
          puVar9 = (undefined4 *)(*(int *)((int)pvVar8 + iVar7 * 4) * 0x30 + 0x24 + DAT_362c54dc);
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          uVar6 = puVar9[2];
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          puVar9[2] = puVar1[2];
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1[2] = uVar6;
          puVar1 = (undefined4 *)(local_78 + DAT_362c550c);
          puVar9 = (undefined4 *)(*(int *)((int)pvVar8 + iVar7 * 4) * 0x20 + DAT_362c550c);
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined4 *)(local_78 + 8 + DAT_362c550c);
          puVar9 = (undefined4 *)(DAT_362c550c + 8 + *(int *)((int)pvVar8 + iVar7 * 4) * 0x20);
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined4 *)(local_78 + 0x10 + DAT_362c550c);
          puVar9 = (undefined4 *)(DAT_362c550c + 0x10 + *(int *)((int)pvVar8 + iVar7 * 4) * 0x20);
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined4 *)(local_78 + 0x18 + DAT_362c550c);
          puVar9 = (undefined4 *)(DAT_362c550c + 0x18 + *(int *)((int)pvVar8 + iVar7 * 4) * 0x20);
          uVar4 = *puVar9;
          uVar5 = puVar9[1];
          *puVar9 = *puVar1;
          puVar9[1] = puVar1[1];
          *puVar1 = uVar4;
          puVar1[1] = uVar5;
          puVar1 = (undefined4 *)(local_74 + DAT_362c54fc);
          puVar9 = (undefined4 *)(*(int *)((int)pvVar8 + iVar7 * 4) * 0x10 + DAT_362c54fc);
          uVar4 = *puVar9;
          *puVar9 = *puVar1;
          *puVar1 = uVar4;
          puVar1 = (undefined4 *)(local_74 + 4 + DAT_362c54fc);
          puVar9 = (undefined4 *)(DAT_362c54fc + 4 + *(int *)((int)pvVar8 + iVar7 * 4) * 0x10);
          uVar4 = *puVar9;
          *puVar9 = *puVar1;
          *puVar1 = uVar4;
          puVar1 = (undefined4 *)(local_74 + 8 + DAT_362c54fc);
          puVar9 = (undefined4 *)(DAT_362c54fc + 8 + *(int *)((int)pvVar8 + iVar7 * 4) * 0x10);
          uVar4 = *puVar9;
          *puVar9 = *puVar1;
          *puVar1 = uVar4;
          puVar1 = (undefined4 *)(local_74 + 0xc + DAT_362c54fc);
          puVar9 = (undefined4 *)(DAT_362c54fc + 0xc + *(int *)((int)pvVar8 + iVar7 * 4) * 0x10);
          uVar4 = *puVar9;
          *puVar9 = *puVar1;
          *puVar1 = uVar4;
          iVar3 = *(int *)((int)pvVar8 + iVar7 * 4);
          uVar4 = *(undefined4 *)((int)pvVar8 + iVar3 * 4);
          *(undefined4 *)((int)pvVar8 + iVar3 * 4) = *(undefined4 *)((int)pvVar8 + iVar7 * 4);
          *(undefined4 *)((int)pvVar8 + iVar7 * 4) = uVar4;
        }
      } while (iVar7 < (int)_NumOfElements);
    }
    operator_delete__(pvVar8);
    operator_delete__(_Base);
  }
  ExceptionList = local_c;
  return;
}

