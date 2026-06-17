
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* class CTString __cdecl IFeel_GetProductName(void) */

undefined4 * __cdecl IFeel_GetProductName(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *in_stack_00000004;
  char local_108 [260];
  undefined4 local_4;
  
                    /* 0x27130  2270  ?IFeel_GetProductName@@YA?AVCTString@@XZ */
  local_4 = DAT_362abd90;
  if (DAT_362b9318 != (code *)0x0) {
    iVar1 = (*DAT_362b9318)(local_108,0x104,0);
    if (iVar1 != 0) {
      pcVar2 = local_108;
      goto LAB_36027171;
    }
  }
  pcVar2 = &DAT_362242a0;
LAB_36027171:
  pcVar2 = StringDuplicate(pcVar2);
  *in_stack_00000004 = pcVar2;
  return in_stack_00000004;
}

