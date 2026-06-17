
/* private: virtual __thiscall LoadModelMng::~LoadModelMng(void) */

void __thiscall LoadModelMng::~LoadModelMng(LoadModelMng *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x133b20  529  ??1LoadModelMng@@EAE@XZ */
  puStack_8 = &LAB_3621901a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = &_vftable_;
  local_4 = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  FUN_36134680((int)(this + 0x14));
  *(undefined ***)this = &ThreadBase<0,1>::_vftable_;
  if (*(int *)(this + 0x10) == 1) {
    *(undefined4 *)(this + 0x10) = 0;
    SetEvent(*(HANDLE *)(this + 0xc));
  }
  WaitForSingleObject(*(HANDLE *)(this + 8),0);
  CloseHandle(*(HANDLE *)(this + 0xc));
  ExceptionList = local_c;
  return;
}

