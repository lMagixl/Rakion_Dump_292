
/* private: struct Xenesis2::Foundation::File::XFSFileInfo * __thiscall
   Xenesis2::Foundation::File::xFileManager::getFileInfo(char const *) */

XFSFileInfo * __thiscall
Xenesis2::Foundation::File::xFileManager::getFileInfo(xFileManager *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  _String_val<char,class_std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x19e10  4185
                       ?getFileInfo@xFileManager@File@Foundation@Xenesis2@@AAEPAUXFSFileInfo@234@PBD@Z
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3620e3f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  std::_String_val<char,class_std::allocator<char>_>::_String_val<char,class_std::allocator<char>_>
            (local_28,this);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_36017150(local_28,(_String_base *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  local_4 = 0;
  FUN_360185e0(this + 0x44,&param_1,local_28);
  if (0xf < local_10) {
    operator_delete(local_24);
  }
  if (param_1 == *(char **)(this + 0x48)) {
    ExceptionList = local_c;
    return (XFSFileInfo *)0x0;
  }
  ExceptionList = local_c;
  return (XFSFileInfo *)(param_1 + 0x28);
}

