
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl FUN_3614be00(int *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  uint local_1004 [1023];
  char local_5;
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  local_5 = '\0';
  uVar1 = _vsnprintf((char *)local_1004,0x1000,param_2,&stack0x0000000c);
  if (((0 < (int)uVar1) && ((int)uVar1 < 0x1000)) && (local_5 == '\0')) {
    iVar2 = FUN_3614bd30(param_1,local_1004,uVar1);
    return iVar2;
  }
  return 0;
}

