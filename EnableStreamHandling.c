
/* public: static void __cdecl CTStream::EnableStreamHandling(void) */

void __cdecl CTStream::EnableStreamHandling(void)

{
  CListHead *this;
  bool bVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x3ddc0  1558  ?EnableStreamHandling@CTStream@@SAXXZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362108d5;
  local_c = ExceptionList;
  bVar1 = DAT_362befa8 == (CListHead *)0x0;
  ExceptionList = &local_c;
  *(undefined4 *)(*(int *)((int)ThreadLocalStoragePointer + _tls_index * 4) + 0x28) = 1;
  if (bVar1) {
    this = (CListHead *)FUN_361bf99c(0xc);
    local_4 = 0;
    if (this == (CListHead *)0x0) {
      DAT_362befa8 = (CListHead *)0x0;
    }
    else {
      CListHead::Clear(this);
      DAT_362befa8 = this;
    }
  }
  ExceptionList = local_c;
  return;
}

