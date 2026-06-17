
/* public: __thiscall CGfxLibrary::CGfxLibrary(void) */

CGfxLibrary * __thiscall CGfxLibrary::CGfxLibrary(CGfxLibrary *this)

{
  char *pcVar1;
  CTextureData *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x869f0  111  ??0CGfxLibrary@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_362120ef;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  _eh_vector_constructor_iterator_
            (this,0x518,2,(_func_void_void_ptr *)&LAB_3608a5f0,(_func_void_void_ptr *)&LAB_3600d020)
  ;
  local_4 = 0;
  CDisplayMode::CDisplayMode((CDisplayMode *)(this + 0xa3c));
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xac8) = pcVar1;
  local_4._0_1_ = 1;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xacc) = pcVar1;
  local_4._0_1_ = 2;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xad0) = pcVar1;
  local_4._0_1_ = 3;
  CListHead::Clear((CListHead *)(this + 0xb0c));
  CListHead::Clear((CListHead *)(this + 0xb18));
  CListHead::Clear((CListHead *)(this + 0xb24));
  *(undefined4 *)(this + 0xafc) = 1;
  *(undefined4 *)(this + 0xb08) = 0;
  *(undefined4 *)(this + 0xb30) = 0;
  *(undefined4 *)(this + 0xad8) = 0x4d2;
  *(undefined4 *)(this + 0xad4) = 0x2000;
  *(undefined4 *)(this + 0xadc) = 0;
  *(undefined4 *)(this + 0xae0) = 0;
  *(undefined4 *)(this + 0xae4) = 0;
  *(undefined4 *)(this + 0xae8) = 0;
  *(undefined4 *)(this + 0xaec) = 0;
  *(undefined4 *)(this + 0xaf0) = 0;
  *(undefined4 *)(this + 0xaf4) = 0;
  *(undefined4 *)(this + 0xa54) = 0;
  DAT_362a1590 = 0xffffffff;
  *(undefined4 *)(this + 0xa38) = 0xffffffff;
  *(undefined4 *)(this + 0xa34) = 0;
  *(undefined4 *)(this + 0xac4) = 0;
  *(undefined4 *)(this + 0xa50) = 0;
  *(undefined4 *)(this + 0xa58) = 0;
  *(undefined4 *)(this + 0xa5c) = 0;
  *(undefined4 *)(this + 0xa60) = 0;
  *(undefined4 *)(this + 0xa64) = 0;
  *(undefined4 *)(this + 0xa30) = 0;
  *(undefined4 *)(this + 0xab8) = 0;
  *(undefined4 *)(this + 0xabc) = 0;
  *(undefined4 *)(this + 0xac0) = 0;
  *(undefined4 *)(this + 0xaa4) = 0;
  *(undefined4 *)(this + 0xa68) = 0;
  *(undefined4 *)(this + 0xa6c) = 0;
  *(undefined4 *)(this + 0xa70) = 0;
  *(undefined4 *)(this + 0xa8c) = 0;
  *(undefined4 *)(this + 0xa74) = 0;
  *(undefined4 *)(this + 0xa90) = 0;
  *(undefined4 *)(this + 0xa78) = 0;
  *(undefined4 *)(this + 0xa94) = 0;
  *(undefined4 *)(this + 0xa7c) = 0;
  *(undefined4 *)(this + 0xa98) = 0;
  *(undefined4 *)(this + 0xa80) = 0;
  *(undefined4 *)(this + 0xa9c) = 0;
  *(undefined4 *)(this + 0xa84) = 0;
  *(undefined4 *)(this + 0xaa0) = 0;
  *(undefined4 *)(this + 0xa88) = 0;
  *(undefined4 *)(this + 0xaa8) = 0;
  *(undefined4 *)(this + 0xaac) = 0;
  *(undefined4 *)(this + 0xb34) = 0;
  *(undefined4 *)(this + 0xb38) = 0;
  *(undefined4 *)(this + 0xb3c) = 0;
  *(undefined4 *)(this + 0xb40) = 0;
  this_00 = (CTextureData *)FUN_361bf99c(0x80);
  local_4._0_1_ = 4;
  if (this_00 == (CTextureData *)0x0) {
    _ptdFlat = (CTextureData *)0x0;
  }
  else {
    _ptdFlat = (CTextureData *)CTextureData::CTextureData(this_00);
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined4 *)(_ptdFlat + 0x1c) = 0x103;
  FUN_36083550(0x400);
  FUN_360837d0(-1);
  ExceptionList = local_c;
  return this;
}

