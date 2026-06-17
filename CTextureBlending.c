
/* public: __thiscall CTextureBlending::CTextureBlending(void) */

CTextureBlending * __thiscall CTextureBlending::CTextureBlending(CTextureBlending *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc8010  271  ??0CTextureBlending@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621446a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)this = pcVar1;
  local_4 = 0;
  pcVar1 = StringDuplicate(&DAT_36231e5d);
  StringFree(*(char **)this);
  *(char **)this = pcVar1;
  this[4] = (CTextureBlending)0x0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  ExceptionList = local_c;
  return this;
}

