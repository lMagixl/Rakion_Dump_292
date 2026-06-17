
/* public: virtual class CTString __thiscall CAOTimeInfo::GetMsg(void) */

undefined4 * __thiscall CAOTimeInfo::GetMsg(CAOTimeInfo *this)

{
  char *pcVar1;
  undefined4 *in_stack_00000004;
  
                    /* 0x19e870  1999  ?GetMsg@CAOTimeInfo@@UAE?AVCTString@@XZ */
  pcVar1 = StringDuplicate(*(char **)(this + 0x14));
  *in_stack_00000004 = pcVar1;
  return in_stack_00000004;
}

