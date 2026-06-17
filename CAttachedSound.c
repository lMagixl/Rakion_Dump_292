
/* public: __thiscall CAttachedSound::CAttachedSound(void) */

CAttachedSound * __thiscall CAttachedSound::CAttachedSound(CAttachedSound *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* 0xa8240  23  ??0CAttachedSound@@QAE@XZ */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3621340d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar1 = StringDuplicate(&DAT_36222fa0);
  *(char **)(this + 0xc) = pcVar1;
  *(undefined4 *)(this + 0x10) = 0;
  local_4 = 0;
  *(undefined4 *)(this + 8) = 0;
  pcVar1 = StringDuplicate(&DAT_36230c5d);
  local_4._0_1_ = 1;
  pcVar2 = StringDuplicate(pcVar1);
  StringFree(*(char **)(this + 0xc));
  *(char **)(this + 0xc) = pcVar2;
  *(undefined4 *)(this + 0x10) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  StringFree(pcVar1);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 1;
  ExceptionList = local_c;
  return this;
}

