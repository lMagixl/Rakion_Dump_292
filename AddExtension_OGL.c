
/* private: void __thiscall CGfxLibrary::AddExtension_OGL(unsigned long,char const *) */

void __thiscall CGfxLibrary::AddExtension_OGL(CGfxLibrary *this,ulong param_1,char *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0x79160  975  ?AddExtension_OGL@CGfxLibrary@@AAEXKPBD@Z */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36211efc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(ulong *)(this + 0xa54) = ~param_1 & *(uint *)(this + 0xa54) | param_1;
  param_1 = (ulong)StringDuplicate(param_2);
  local_4 = 0;
  CTString::operator+=((CTString *)(this + 0xad0),(CTString *)&param_1);
  local_4 = 0xffffffff;
  StringFree((char *)param_1);
  param_2 = StringDuplicate(&DAT_3622ab1c);
  local_4 = 1;
  CTString::operator+=((CTString *)(this + 0xad0),(CTString *)&param_2);
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

