
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >
   __thiscall Xenesis2::Foundation::File::xFileManager::getMD5Code(void) */

basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> * __thiscall
Xenesis2::Foundation::File::xFileManager::getMD5Code(xFileManager *this)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  XFSFileInfo *pXVar5;
  uchar *puVar6;
  xFile *pxVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  xFile *pxVar11;
  xFile *pxVar12;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *in_stack_00000004;
  int local_94;
  xFile *local_90;
  undefined4 local_8c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_88 [4];
  char ***local_84 [4];
  uint local_74;
  uint local_70;
  char local_6c [36];
  CMD5 local_48 [56];
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0x1d8e0  4199
                       ?getMD5Code@xFileManager@File@Foundation@Xenesis2@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e9d8;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  local_8c = 0;
  ExceptionList = &local_c;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_88);
  local_94 = **(int **)(this + 0x48);
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((int *)local_94 != *(int **)(this + 0x48)) {
    do {
      pXVar5 = getFileInfo(this,(char *)(local_94 + 0x28));
      if (pXVar5 == (XFSFileInfo *)0x0) {
        pxVar11 = (xFile *)0x0;
      }
      else {
        pxVar11 = (xFile *)FUN_361bf99c(0x20);
        local_4._0_1_ = 2;
        local_90 = pxVar11;
        if (pxVar11 == (xFile *)0x0) {
          pxVar11 = (xFile *)0x0;
        }
        else {
          uVar3 = *(undefined4 *)(this + 0x40);
          puVar6 = (uchar *)thunk_FUN_361bf99c(0x10000);
          *(uchar **)pxVar11 = puVar6;
          *(undefined4 *)(pxVar11 + 0xc) = 0;
          *(undefined4 *)(pxVar11 + 4) = uVar3;
          *(XFSFileInfo **)(pxVar11 + 8) = pXVar5;
          uVar3 = *(undefined4 *)(pXVar5 + 0x70);
          *(undefined4 *)(pxVar11 + 0x14) = 0;
          *(undefined4 *)(pxVar11 + 0x18) = 0;
          pxVar11[0x1d] = (xFile)0x0;
          local_4._0_1_ = 3;
          *(undefined4 *)(pxVar11 + 0x10) = uVar3;
          pxVar11[0x1c] = (xFile)0x1;
          xFile::loadBlock(pxVar11,puVar6);
        }
        local_4._0_1_ = 1;
        *(int *)(this + 0x54) = *(int *)(this + 0x54) + 1;
      }
      uVar1 = *(int *)(*(int *)(pxVar11 + 8) + 0x78) + 1;
      pxVar7 = (xFile *)thunk_FUN_361bf99c(uVar1);
      pxVar12 = pxVar7;
      for (uVar9 = uVar1 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined4 *)pxVar12 = 0;
        pxVar12 = pxVar12 + 4;
      }
      for (uVar9 = uVar1 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *pxVar12 = (xFile)0x0;
        pxVar12 = pxVar12 + 1;
      }
      local_4 = CONCAT31(local_4._1_3_,5);
      local_90 = pxVar7;
      xFile::load(pxVar11,pxVar7,uVar1);
      std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::operator+=
                (local_88,(char *)pxVar7);
      if (pxVar11[0x1c] == (xFile)0x0) {
        if (*(int *)(pxVar11 + 0xc) != 0) {
          xFile::saveBlock(pxVar11,*(uchar **)pxVar11);
        }
        iVar4 = *(int *)(pxVar11 + 8);
        if (*(int *)(iVar4 + 0x74) == 0) {
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + *(int *)(iVar4 + 0x78);
          this[0x50] = (xFileManager)0x0;
        }
        else {
          *(int *)(this + 0x10) = *(int *)(this + 0x10) + *(int *)(iVar4 + 0x7c);
          this[0x50] = (xFileManager)0x0;
        }
      }
      else {
        *(int *)(this + 0x54) = *(int *)(this + 0x54) + -1;
      }
      operator_delete__(*(void **)pxVar11);
      operator_delete(pxVar11);
      local_4._0_1_ = 1;
      operator_delete__(pxVar7);
      FUN_3600eb00(&local_94);
    } while (local_94 != *(int *)(this + 0x48));
  }
  CMD5::CMD5(local_48);
  local_4 = CONCAT31(local_4._1_3_,6);
  if (local_70 < 0x10) {
    local_84[0] = (char ***)local_84;
  }
  pcVar8 = CMD5::GetString(local_48,(char *)local_84[0],local_74);
  pcVar10 = local_6c;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    *pcVar10 = cVar2;
    pcVar10 = pcVar10 + 1;
  } while (cVar2 != '\0');
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
            (in_stack_00000004,local_6c);
  local_8c = 1;
  local_4._0_1_ = 1;
  CMD5::~CMD5(local_48);
  local_4 = (uint)local_4._1_3_ << 8;
  std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>::
  ~basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>(local_88);
  ExceptionList = local_c;
  return in_stack_00000004;
}

