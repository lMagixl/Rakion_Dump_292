
/* public: __thiscall CModelPatch::CModelPatch(void) */

CModelPatch * __thiscall CModelPatch::CModelPatch(CModelPatch *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb6220  156  ??0CModelPatch@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213ed2;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)this = pcVar1;
  local_4 = 0;
  CTextureObject::CTextureObject((CTextureObject *)(this + 4));
  local_4 = CONCAT31(local_4._1_3_,1);
  pcVar1 = StringDuplicate(&DAT_36231a3c);
  StringFree(*(char **)this);
  *(char **)this = pcVar1;
  *(undefined4 *)(this + 0x20) = 0x400;
  *(undefined4 *)(this + 0x1c) = 0x400;
  *(undefined4 *)(this + 0x24) = 0x3f800000;
  ExceptionList = local_c;
  return this;
}

