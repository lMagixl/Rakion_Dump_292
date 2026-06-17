
/* private: __thiscall LoadModelMng::LoadModelMng(void) */

LoadModelMng * __thiscall LoadModelMng::LoadModelMng(LoadModelMng *this)

{
  HANDLE pvVar1;
  
                    /* 0x133ad0  341  ??0LoadModelMng@@AAE@XZ */
  *(undefined ***)this = &ThreadBase<0,1>::_vftable_;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  pvVar1 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
  *(HANDLE *)(this + 0xc) = pvVar1;
  *(undefined ***)this = &_vftable_;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(this + 0x28));
  return this;
}

