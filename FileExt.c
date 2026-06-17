
/* public: class CTFileName __thiscall CTFileName::FileExt(void)const  */

undefined4 * __thiscall CTFileName::FileExt(CTFileName *this)

{
  char *pcVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x26100  1615  ?FileExt@CTFileName@@QBE?AV1@XZ */
  pcVar1 = strrchr(*(char **)this,0x2e);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = &DAT_36224181;
  }
  pcVar1 = StringDuplicate(pcVar1);
  *in_stack_00000004 = pcVar1;
  in_stack_00000004[1] = 0;
  return in_stack_00000004;
}

