
/* public: void __thiscall CEditModel::ExportSurfaceNumbersAndNames(class CTFileName) */

void __thiscall CEditModel::ExportSurfaceNumbersAndNames(CEditModel *this,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *local_1c;
  char *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* 0xa8f60  1592  ?ExportSurfaceNumbersAndNames@CEditModel@@QAEXVCTFileName@@@Z
                        */
  puStack_c = &LAB_3621353a;
  local_10 = ExceptionList;
  local_14 = &stack0xffffffd4;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_1c = StringDuplicate(&DAT_36222fa0);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar3 = 0;
  iVar1 = FUN_3600c0e0((undefined4 *)(this + 0x110));
  if (0 < iVar1) {
    do {
      iVar1 = *(int *)(this + 0x114);
      local_18 = StringDuplicate(&DAT_36222fa0);
      local_8._0_1_ = 2;
      CTString::PrintF((CTString *)&local_18,(char *)&local_18,s__d___s_362317a8,iVar3,
                       *(undefined4 *)(iVar1 + iVar2));
      CTString::operator+=((CTString *)&local_1c,(CTString *)&local_18);
      local_8 = CONCAT31(local_8._1_3_,1);
      StringFree(local_18);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x70;
      iVar1 = FUN_3600c0e0((undefined4 *)(this + 0x110));
    } while (iVar3 < iVar1);
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  CTString::Save_t((CTString *)&local_1c,(CTFileName *)&param_2);
  local_8 = 0;
  StringFree(local_1c);
  local_8 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_10;
  return;
}

