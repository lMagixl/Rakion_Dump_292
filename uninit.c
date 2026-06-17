
/* public: bool __thiscall Xenesis::xFileManager::uninit(void) */

bool __thiscall Xenesis::xFileManager::uninit(xFileManager *this)

{
  bool bVar1;
  
                    /* 0x1a5cc0  4434  ?uninit@xFileManager@Xenesis@@QAE_NXZ */
  if ((this[0x10ee] != (xFileManager)0x0) && (this[0x10ef] != (xFileManager)0x1)) {
    bVar1 = resetXFS(this,(xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *)(this + 0x40),
                     (XFSHeader *)this,(xFolder *)(this + 0x48),
                     (xUnorderedMap<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_Xenesis::xFileManager::xFolder*,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>,class_stdext::hash_compare<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>_>_>
                      *)(this + 0x7c));
    return bVar1;
  }
  FUN_361a2ee0((undefined4 *)(this + 0x40));
  this[0x10ec] = (xFileManager)0x0;
  return true;
}

