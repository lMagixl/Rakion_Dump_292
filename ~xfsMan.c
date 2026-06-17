
/* public: __thiscall xfsMan::~xfsMan(void) */

void __thiscall xfsMan::~xfsMan(xfsMan *this)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* 0x41d80  549  ??1xfsMan@@QAE@XZ */
  iVar3 = 0;
  if (0 < *(int *)(this + 200)) {
    do {
      iVar1 = *(int *)(this + iVar3 * 4);
      if ((*(char *)(iVar1 + 0x59) == '\0') || (*(char *)(iVar1 + 0x5a) == '\x01')) {
        (**(code **)(**(int **)(iVar1 + 0x48) + 8))();
      }
      else if (*(char *)(iVar1 + 0x58) != '\x01') {
        Xenesis2::Foundation::File::xFileManager::resetXFS
                  ((xFileManager *)(iVar1 + 8),*(xDeviceFile **)(iVar1 + 0x48),
                   (XFSHeader *)(iVar1 + 8),
                   (map<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>,struct_Xenesis2::Foundation::File::XFSFileInfo,struct_std::less<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>_>,class_std::allocator<struct_std::pair<class_std::basic_string<char,struct_Xenesis2::Foundation::File::i_char_traits,class_std::allocator<char>_>_const_,struct_Xenesis2::Foundation::File::XFSFileInfo>_>_>
                    *)(iVar1 + 0x4c));
      }
      puVar2 = *(undefined4 **)(this + iVar3 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        FUN_36044600(puVar2);
        operator_delete(puVar2);
      }
      *(undefined4 *)(this + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 200));
  }
  return;
}

