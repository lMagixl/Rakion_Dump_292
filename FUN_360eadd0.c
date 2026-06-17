
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_360eadd0(void *this,CTStream *param_1)

{
  char cVar1;
  CTString *this_00;
  CTStream *this_01;
  int iVar2;
  int *piVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  size_t _NumOfElements;
  CTString *this_02;
  int iVar7;
  void *_Base;
  int iVar8;
  undefined4 uVar9;
  char *pcStack_3c;
  undefined4 *puStack_38;
  CSerial *pCStack_34;
  undefined4 uStack_30;
  char *pcStack_2c;
  int iStack_28;
  int local_24;
  void *local_20;
  int local_1c;
  void *local_18;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_36215e50;
  pvStack_c = ExceptionList;
  iVar8 = 0;
  _Base = (void *)0x0;
  iVar7 = 0;
  local_1c = 0;
  local_18 = (void *)0x0;
  local_14 = 0;
  local_10 = 0x10;
  local_24 = 0;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  local_20 = this;
  iVar2 = FUN_3608a5c0((int)this);
  if (0 < iVar2) {
    do {
      piVar3 = (int *)FUN_3608a4b0(this,iVar8);
      iStack_28 = (**(code **)(*piVar3 + 0x18))();
      if (iStack_28 < 0) {
        CTStream::PutLine_t(param_1,s_Error__36232a6c);
        goto LAB_360eafe6;
      }
      pcStack_3c = StringDuplicate(&DAT_36222fa0);
      local_4._0_1_ = 2;
      piVar3 = (int *)FUN_3608a4b0(this,iVar8);
      puStack_38 = (undefined4 *)(**(code **)(*piVar3 + 4))(&pcStack_2c);
      local_4._0_1_ = 3;
      pCStack_34 = (CSerial *)FUN_3608a4b0(this,iVar8);
      iVar2 = FUN_3608a4b0(this,iVar8);
      uStack_30 = *(undefined4 *)(iVar2 + 0xc);
      uVar9 = *puStack_38;
      lVar4 = CSerial::GetUsedCount(pCStack_34);
      CTString::PrintF(this_02,(char *)&pcStack_3c,s__s__d___s_36232a74,uStack_30,lVar4,uVar9);
      local_4 = CONCAT31(local_4._1_3_,2);
      StringFree(pcStack_2c);
      iVar7 = iVar7 + 1;
      local_14 = iVar7;
      iVar2 = FUN_360e5c50(&local_1c);
      if (iVar2 < iVar7) {
        iVar7 = FUN_360e5c50(&local_1c);
        FUN_360e5f10(&local_1c,iVar7 + local_10);
        iVar7 = local_14;
        _Base = local_18;
      }
      pcVar5 = pcStack_3c;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar6 = (char *)thunk_FUN_361bf99c((size_t)(pcVar5 + (1 - (int)(pcStack_3c + 1))));
      *(char **)((int)_Base + iVar7 * 8 + -8) = pcVar6;
      *(int *)((int)_Base + iVar7 * 8 + -4) = iStack_28;
      pcVar5 = pcStack_3c;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        *pcVar6 = cVar1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_4 = CONCAT31(local_4._1_3_,1);
      StringFree(pcStack_3c);
      iVar8 = iVar8 + 1;
      local_24 = iVar8;
      iVar2 = FUN_3608a5c0((int)this);
    } while (iVar8 < iVar2);
  }
  local_4 = local_4 & 0xffffff00;
  _NumOfElements = FUN_360e5bb0((int)&local_1c);
  if (0 < (int)_NumOfElements) {
    qsort(_Base,_NumOfElements,8,FUN_360ea750);
  }
  this_01 = param_1;
  iVar7 = 0;
  if (0 < (int)_NumOfElements) {
    do {
      this_00 = *(CTString **)((int)_Base + iVar7 * 8);
      CTString::CTString(this_00,(long)&param_1,(char *)0x0,s__7_1fk__s_36232a80,
                         (double)((float)*(int *)((int)_Base + iVar7 * 8 + 4) * _DAT_362265a4),
                         this_00);
      local_4._0_1_ = 4;
      CTStream::PutLine_t(this_01,(char *)param_1);
      operator_delete__(*(void **)((int)_Base + iVar7 * 8));
      *(undefined4 *)((int)_Base + iVar7 * 8) = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      StringFree((char *)param_1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)_NumOfElements);
  }
LAB_360eafe6:
  if (local_1c != 0) {
    operator_delete__(_Base);
  }
  ExceptionList = pvStack_c;
  return;
}

