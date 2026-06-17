
/* public: class CTString __thiscall CDisplayMode::DepthString(void)const  */

undefined4 * __thiscall CDisplayMode::DepthString(CDisplayMode *this)

{
  undefined4 *in_stack_00000004;
  char *pcVar1;
  
                    /* 0x64700  1476  ?DepthString@CDisplayMode@@QBE?AVCTString@@XZ */
  switch(*(undefined4 *)(this + 8)) {
  case 0:
    pcVar1 = s_ETRSdesktop_362287c4;
    break;
  case 1:
    pcVar1 = StringDuplicate(&DAT_362287bc);
    *in_stack_00000004 = pcVar1;
    return in_stack_00000004;
  case 2:
    pcVar1 = StringDuplicate(&DAT_362287c0);
    *in_stack_00000004 = pcVar1;
    return in_stack_00000004;
  case 0xffffffff:
    pcVar1 = StringDuplicate(&DAT_362287b4);
    *in_stack_00000004 = pcVar1;
    return in_stack_00000004;
  default:
    pcVar1 = s_ETRSunknown_362287d0;
  }
  pcVar1 = Translate(pcVar1,4);
  pcVar1 = StringDuplicate(pcVar1);
  *in_stack_00000004 = pcVar1;
  return in_stack_00000004;
}

