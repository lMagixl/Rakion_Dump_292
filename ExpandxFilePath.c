
/* long __cdecl ExpandxFilePath(unsigned long,class CTFileName const &,class CTFileName &,class
   CTFileName &) */

long __cdecl
ExpandxFilePath(ulong param_1,CTFileName *param_2,CTFileName *param_3,CTFileName *param_4)

{
  CTFileName *pCVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  xFileManager *this;
  xFile *pxVar5;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  undefined4 local_20;
  char *local_1c;
  undefined4 local_18;
  char *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x42780  1589  ?ExpandxFilePath@@YAJKABVCTFileName@@AAV1@1@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211072;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_28 = StringDuplicate(&DAT_36222fa0);
  local_4 = 0;
  local_2c = StringDuplicate(&DAT_36222fa0);
  local_4._0_1_ = 1;
  local_30 = StringDuplicate(*(char **)param_2);
  local_4._0_1_ = 2;
  CTString::ToLower((CTString *)&local_30);
  do {
    local_24 = StringDuplicate(&DAT_362275d8);
    local_4._0_1_ = 3;
    param_2 = (CTFileName *)StringDuplicate(&DAT_362275dc);
    local_4._0_1_ = 4;
    iVar2 = CTString::ReplaceSubstr
                      ((CTString *)&local_30,(CTString *)&param_2,(CTString *)&local_24);
    local_4._0_1_ = 3;
    StringFree((char *)param_2);
    local_4._0_1_ = 2;
    StringFree(local_24);
  } while (iVar2 != 0);
  param_2 = (CTFileName *)StringDuplicate(&DAT_362275e0);
  local_4._0_1_ = 5;
  lVar3 = CTString::FindSubstr((CTString *)&local_30,(CTString *)&param_2);
  local_4._0_1_ = 2;
  StringFree((char *)param_2);
  if (lVar3 == -1) {
    local_4._0_1_ = 1;
    StringFree(local_30);
    local_4 = (uint)local_4._1_3_ << 8;
    StringFree(local_2c);
    local_4 = lVar3;
    StringFree(local_28);
    ExceptionList = local_c;
    return 0;
  }
  CTString::Split((CTString *)&local_30,lVar3,(CTString *)&local_28,(CTString *)&local_2c);
  param_2 = (CTFileName *)StringDuplicate(&DAT_362275e4);
  local_4._0_1_ = 6;
  CTString::operator+=((CTString *)&local_28,(CTString *)&param_2);
  local_4._0_1_ = 2;
  StringFree((char *)param_2);
  pcVar4 = StringDuplicate(local_30);
  StringFree(local_2c);
  local_2c = pcVar4;
  local_1c = StringDuplicate(&DAT_36222fa0);
  local_18 = 0;
  local_4._0_1_ = 7;
  local_14 = StringDuplicate(&DAT_36222fa0);
  local_10 = 0;
  local_4._0_1_ = 8;
  local_24 = StringDuplicate(local_28);
  local_20 = 0;
  local_4._0_1_ = 9;
  lVar3 = ExpandFilePath(param_1,(CTFileName *)&local_24,(CTFileName *)&local_1c);
  local_4 = CONCAT31(local_4._1_3_,8);
  StringFree(local_24);
  if (lVar3 == 1) {
    this = xfsMan::InitXfsFile((xfsMan *)&DAT_362befb0,(CTFileName *)&local_1c);
    if (this != (xFileManager *)0x0) {
      pxVar5 = Xenesis2::Foundation::File::xFileManager::open(this,local_2c,true,false);
      if (pxVar5 != (xFile *)0x0) {
        Xenesis2::Foundation::File::xFileManager::close(this,pxVar5);
        goto LAB_360429cb;
      }
    }
    lVar3 = 0;
  }
LAB_360429cb:
  pcVar4 = StringDuplicate(local_1c);
  pCVar1 = param_3;
  StringFree(*(char **)param_3);
  *(char **)pCVar1 = pcVar4;
  *(undefined4 *)(pCVar1 + 4) = local_18;
  pcVar4 = StringDuplicate(local_2c);
  pCVar1 = param_4;
  StringFree(*(char **)param_4);
  *(char **)pCVar1 = pcVar4;
  *(undefined4 *)(pCVar1 + 4) = 0;
  local_4._0_1_ = 7;
  StringFree(local_14);
  local_4._0_1_ = 2;
  StringFree(local_1c);
  local_4._0_1_ = 1;
  StringFree(local_30);
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(local_2c);
  local_4 = 0xffffffff;
  StringFree(local_28);
  ExceptionList = local_c;
  return lVar3;
}

