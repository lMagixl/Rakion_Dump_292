
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * __cdecl FUN_3614c570(int param_1,char *param_2)

{
  undefined4 *puVar1;
  char local_18 [20];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  if (param_1 < 0) {
    return (undefined4 *)0x0;
  }
  sprintf(local_18,s_<fd:_d>_362a664c,param_1);
  puVar1 = FUN_3614c2d0(local_18,param_2,param_1);
  return puVar1;
}

