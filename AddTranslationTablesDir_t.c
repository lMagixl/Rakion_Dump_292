
/* void __cdecl AddTranslationTablesDir_t(class CTFileName const &,class CTFileName const &) */

void __cdecl AddTranslationTablesDir_t(CTFileName *param_1,CTFileName *param_2)

{
  int iVar1;
  CTFileName *pCVar2;
  int iVar3;
  CListHead local_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x459d0  1035  ?AddTranslationTablesDir_t@@YAXABVCTFileName@@0@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211392;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_36025a30(local_28);
  iVar3 = 0;
  local_4 = 0;
  MakeDirList((CDynamicStackArray<class_CTFileName> *)local_28,param_1,(CTString *)param_2,0);
  iVar1 = FUN_360259d0((int)local_28);
  if (0 < iVar1) {
    do {
      pCVar2 = (CTFileName *)thunk_FUN_360217c0(local_28,iVar3);
      ReadTranslationTable_t((CDynamicArray<class_CTranslationPair> *)&DAT_362bf308,pCVar2);
      iVar3 = iVar3 + 1;
      iVar1 = FUN_360259d0((int)local_28);
    } while (iVar3 < iVar1);
  }
  local_4 = 0xffffffff;
  thunk_FUN_36021ad0((undefined4 *)local_28);
  ExceptionList = local_c;
  return;
}

