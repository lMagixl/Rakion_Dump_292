
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_3614ffa0(int *param_1,FILE *param_2)

{
  size_t _Count;
  undefined *puVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  int local_4008;
  undefined1 local_4004 [16384];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  while( true ) {
    _Count = FUN_3614c5d0(param_1,local_4004,0x4000);
    if ((int)_Count < 0) {
      puVar1 = FUN_3614c180((int)param_1,&local_4008);
      FUN_3614fe80(puVar1);
    }
    if (_Count == 0) break;
    sVar2 = fwrite(local_4004,1,_Count,param_2);
    if (sVar2 != _Count) {
      FUN_3614fe80(s_failed_fwrite_362a6a08);
    }
  }
  iVar3 = fclose(param_2);
  if (iVar3 != 0) {
    FUN_3614fe80(s_failed_fclose_362a6a18);
  }
  uVar4 = FUN_3614c130((int)param_1);
  if (uVar4 != 0) {
    FUN_3614fe80(s_failed_gzclose_362a6a28);
  }
  return;
}

