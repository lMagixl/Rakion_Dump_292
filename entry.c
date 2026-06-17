
/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

int entry(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int local_20;
  
  local_20 = 1;
  if ((param_2 == 0) && (DAT_3638306c == 0)) {
LAB_361c04e4:
    local_20 = 0;
  }
  else {
    if ((param_2 == 1) || (param_2 == 2)) {
      if (DAT_363884b0 != (code *)0x0) {
        local_20 = (*DAT_363884b0)(param_1,param_2,param_3);
      }
      if ((local_20 == 0) || (iVar1 = __CRT_INIT_12(param_1,param_2), iVar1 == 0))
      goto LAB_361c04e4;
    }
    local_20 = FUN_36007c70();
    if ((param_2 == 1) && (local_20 == 0)) {
      __CRT_INIT_12(param_1,0);
    }
    if ((param_2 == 0) || (param_2 == 3)) {
      iVar1 = __CRT_INIT_12(param_1,param_2);
      if (iVar1 == 0) {
        local_20 = 0;
      }
      if ((local_20 != 0) && (DAT_363884b0 != (code *)0x0)) {
        local_20 = (*DAT_363884b0)(param_1,param_2,param_3);
      }
    }
  }
  return local_20;
}

