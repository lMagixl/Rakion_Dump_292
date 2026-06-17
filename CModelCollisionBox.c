
/* public: __thiscall CModelCollisionBox::CModelCollisionBox(void) */

CModelCollisionBox * __thiscall CModelCollisionBox::CModelCollisionBox(CModelCollisionBox *this)

{
  char *pcVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* 0xb6c00  144  ??0CModelCollisionBox@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_36213f01;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0x1c) = pcVar1;
  *(undefined4 *)this = 0xbf000000;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0xbf000000;
  *(undefined4 *)(this + 0xc) = 0x3f000000;
  *(undefined4 *)(this + 0x10) = 0x40000000;
  local_4 = 0;
  *(undefined4 *)(this + 0x14) = 0x3f000000;
  *(undefined4 *)(this + 0x18) = 1;
  pcVar1 = StringDuplicate(s_PART_NAME_36231aa0);
  StringFree(*(char **)(this + 0x1c));
  *(char **)(this + 0x1c) = pcVar1;
  ExceptionList = local_c;
  return this;
}

