
/* public: class Xenesis2::Foundation::File::xFileManager * __thiscall xfsMan::InitXfsFile(class
   CTFileName &) */

xFileManager * __thiscall xfsMan::InitXfsFile(xfsMan *this,CTFileName *param_1)

{
  bool bVar1;
  xFileManager *this_00;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x41e00  2326
                       ?InitXfsFile@xfsMan@@QAEPAVxFileManager@File@Foundation@Xenesis2@@AAVCTFileName@@@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36210e9c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = FindXfsFile(this,param_1);
  puVar4 = (undefined4 *)0x0;
  if (this_00 == (xFileManager *)0x0) {
    puVar2 = (undefined4 *)FUN_361bf99c(0x60);
    local_4 = 0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar4 = FUN_36044570(puVar2);
    }
    local_4 = 0xffffffff;
    pcVar3 = StringDuplicate(*(char **)param_1);
    StringFree((char *)*puVar4);
    *puVar4 = pcVar3;
    this_00 = (xFileManager *)(puVar4 + 2);
    puVar4[1] = *(undefined4 *)(param_1 + 4);
    pcVar3 = *(char **)param_1;
    *(undefined1 *)((int)puVar4 + 0x5a) = 1;
    bVar1 = Xenesis2::Foundation::File::xFileManager::setXFS
                      (this_00,pcVar3,(xDeviceFile *)puVar4[0x12],(XFSHeader *)this_00,
                       (map<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>,struct_Xenesis2::Foundation::File::XFSFileInfo,struct_std::less<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>_>,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>_const_,struct_Xenesis2::Foundation::File::XFSFileInfo>_>_>
                        *)(puVar4 + 0x13));
    if (!bVar1) {
      FUN_36044600(puVar4);
      operator_delete(puVar4);
      ExceptionList = local_c;
      return (xFileManager *)0x0;
    }
    pcVar3 = StringDuplicate(*(char **)param_1);
    StringFree((char *)*puVar4);
    *puVar4 = pcVar3;
    puVar4[1] = *(undefined4 *)(param_1 + 4);
    *(undefined4 **)(this + *(int *)(this + 200) * 4) = puVar4;
    *(int *)(this + 200) = *(int *)(this + 200) + 1;
  }
  ExceptionList = local_c;
  return this_00;
}

