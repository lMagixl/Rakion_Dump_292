
/* public: __thiscall CTextureTransformation::CTextureTransformation(void) */

CTextureTransformation * __thiscall
CTextureTransformation::CTextureTransformation(CTextureTransformation *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xc7f90  279  ??0CTextureTransformation@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36214458;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)this = pcVar1;
  local_4 = 0;
  *(undefined4 *)(this + 4) = 0x3f800000;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0x3f800000;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  pcVar1 = StringDuplicate(&DAT_36231e5c);
  StringFree(*(char **)this);
  *(char **)this = pcVar1;
  ExceptionList = local_c;
  return this;
}

