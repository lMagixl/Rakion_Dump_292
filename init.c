
/* public: bool __thiscall Xenesis::xFileManager::init(char const *,bool) */

bool __thiscall Xenesis::xFileManager::init(xFileManager *this,char *param_1,bool param_2)

{
  bool bVar1;
  xUnorderedMap<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_Xenesis::xFileManager::xFolder*,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>,class_stdext::hash_compare<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>_>_>
  *pxVar2;
  
                    /* 0x1a6560  4219  ?init@xFileManager@Xenesis@@QAE_NPBD_N@Z */
  this[0x10ef] = (xFileManager)param_2;
  if (param_2) {
    pxVar2 = (xUnorderedMap<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_Xenesis::xFileManager::xFolder*,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>,class_stdext::hash_compare<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>_>_>
              *)(this + 0x7c);
  }
  else {
    pxVar2 = (xUnorderedMap<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_Xenesis::xFileManager::xFolder*,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>,class_stdext::hash_compare<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>,struct_std::less<class_std::basic_string<char,struct_Xenesis::Private::xaichar_traits,class_Xenesis::xAllocator<char>_>_>_>_>
              *)0x0;
  }
  bVar1 = setXFS(this,param_1,(xBasicDeviceFile<class_Xenesis::xWindowFileTrait> *)(this + 0x40),
                 (XFSHeader *)this,(xFolder *)(this + 0x48),pxVar2);
  if (bVar1) {
    *(xFolder **)(this + 0x78) = (xFolder *)(this + 0x48);
    return true;
  }
  FUN_361a2ee0((undefined4 *)(this + 0x40));
  return false;
}

