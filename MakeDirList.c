
/* void __cdecl MakeDirList(class CDynamicStackArray<class CTFileName> &,class CTFileName const
   &,class CTString const &,unsigned long) */

void __cdecl
MakeDirList(CDynamicStackArray<class_CTFileName> *param_1,CTFileName *param_2,CTString *param_3,
           ulong param_4)

{
  int iVar1;
  CTString *pCVar2;
  undefined4 *puVar3;
  char *pcVar4;
  size_t _NumOfElements;
  CTString *pCVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  size_t _SizeOfElements;
  _PtFuncCompare *_PtFuncCompare;
  char *local_3c;
  uint local_38;
  int iStack_34;
  char *pcStack_30;
  CListHead local_28 [12];
  void *pvStack_1c;
  int local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* 0x25610  2607
                       ?MakeDirList@@YAXAAV?$CDynamicStackArray@VCTFileName@@@@ABVCTFileName@@ABVCTString@@K@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620f1a2;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = CListHead::IsEmpty((CListHead *)param_1);
  if ((iVar1 == 0) && (*(int *)param_1 != *(int *)(param_1 + 8))) {
    iVar1 = FUN_360216b0((int)param_1);
    FUN_36021ad0((undefined4 *)param_1);
    FUN_36021930(param_1,iVar1);
  }
  local_38 = param_4 & 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_360259e0(local_28);
  local_14 = 0;
  local_10 = 0x10;
  local_4 = 0;
  FUN_36025140((CTString *)&_fnmApplicationPath,local_28,(undefined4 *)param_2,param_3,(byte)param_4
               ,(void *)0x0,(void *)0x0);
  if ((param_4 & 2) != 0) {
    FUN_36025140((CTString *)&_fnmCDPath,local_28,(undefined4 *)param_2,param_3,(byte)param_4,
                 (void *)0x0,(void *)0x0);
  }
  if (((~(param_4 >> 3) & 1) != 0) && ((param_4 & 4) == 0)) {
    local_3c = StringDuplicate(*(char **)param_2);
    local_4 = CONCAT31(local_4._1_3_,1);
    iStack_34 = FUN_36046590();
    param_4 = 0;
    if (0 < iStack_34) {
      do {
        pCVar2 = (CTString *)FUN_360469b0(param_4);
        if (local_38 == 0) {
          pCVar5 = (CTString *)CTFileName::FileDir((CTFileName *)pCVar2);
          local_4._0_1_ = 2;
          iVar1 = CTString::operator!=(pCVar5,(CTString *)param_2);
          local_4 = CONCAT31(local_4._1_3_,1);
          StringFree(pcStack_30);
          if (iVar1 == 0) goto LAB_36025784;
        }
        else {
          iVar1 = CTString::HasPrefix(pCVar2,(CTString *)&local_3c);
          if (iVar1 != 0) {
LAB_36025784:
            iVar1 = CTString::operator!=(param_3,&DAT_362240df);
            if ((iVar1 == 0) || (iVar1 = CTString::Matches(pCVar2,param_3), iVar1 != 0)) {
              iVar1 = FUN_360216b0((int)local_28);
              if (iVar1 - local_14 < 1) {
                FUN_36021930(local_28,local_10);
              }
              iVar1 = local_14;
              local_14 = local_14 + 1;
              puVar3 = (undefined4 *)FUN_360217c0(local_28,iVar1);
              pcVar4 = StringDuplicate(*(char **)pCVar2);
              StringFree((char *)*puVar3);
              *puVar3 = pcVar4;
              puVar3[1] = *(undefined4 *)(pCVar2 + 4);
            }
          }
        }
        param_4 = param_4 + 1;
      } while ((int)param_4 < iStack_34);
    }
    local_4 = local_4 & 0xffffff00;
    StringFree(local_3c);
  }
  iVar1 = FUN_360259d0((int)local_28);
  if (iVar1 != 0) {
    _PtFuncCompare = (_PtFuncCompare *)&LAB_360250f0;
    _SizeOfElements = 4;
    _NumOfElements = FUN_360259d0((int)local_28);
    qsort(pvStack_1c,_NumOfElements,_SizeOfElements,_PtFuncCompare);
    iVar1 = FUN_360259d0((int)local_28);
    iVar8 = 0;
    iStack_34 = iVar1;
    if (0 < iVar1) {
      do {
        if (iVar8 == 0) {
LAB_36025890:
          iVar1 = FUN_360216b0((int)param_1);
          if (iVar1 - *(int *)(param_1 + 0x14) < 1) {
            FUN_36021930(param_1,*(int *)(param_1 + 0x18));
          }
          iVar1 = *(int *)(param_1 + 0x14);
          *(int *)(param_1 + 0x14) = iVar1 + 1;
          puVar3 = (undefined4 *)FUN_360217c0(param_1,iVar1);
          puVar7 = (undefined4 *)FUN_360217c0(local_28,iVar8);
          pcVar4 = StringDuplicate((char *)*puVar7);
          StringFree((char *)*puVar3);
          *puVar3 = pcVar4;
          puVar3[1] = puVar7[1];
          iVar1 = iStack_34;
        }
        else {
          pCVar2 = (CTString *)FUN_360217c0(local_28,iVar8);
          pCVar5 = (CTString *)FUN_360217c0(local_28,iVar8 + -1);
          iVar6 = CTString::operator!=(pCVar2,pCVar5);
          if (iVar6 != 0) goto LAB_36025890;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
  }
  local_4 = 0xffffffff;
  thunk_FUN_36021ad0((undefined4 *)local_28);
  ExceptionList = pvStack_c;
  return;
}

