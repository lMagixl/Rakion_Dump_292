
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FUN_3601f9b0(void *this,CTStream *param_1,char *param_2)

{
  void **ppvVar1;
  int iVar2;
  int iVar3;
  char local_110 [256];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3620ecc4;
  local_c = ExceptionList;
  local_10 = DAT_362abd90;
  iVar2 = 0;
  iVar3 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (0 < *(int *)((int)this + 0x14)) {
    do {
      sprintf(local_110,s__define__s_s__d_36223fb0,param_2,*(int *)((int)this + 0x18) + iVar2,iVar3)
      ;
      CTStream::PutLine_t(param_1,local_110);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x2c;
      ppvVar1 = ExceptionList;
    } while (iVar3 < *(int *)((int)this + 0x14));
  }
  ExceptionList = ppvVar1;
  local_4 = 0xffffffff;
  StringFree(param_2);
  ExceptionList = local_c;
  return;
}

