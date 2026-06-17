
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_3614feb0(FILE *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int local_4008;
  uint local_4004 [4096];
  undefined4 local_4;
  
  local_4 = DAT_362abd90;
  uVar2 = fread(local_4004,1,0x4000,param_1);
  bVar1 = (byte)param_1->_flag;
  while( true ) {
    if ((bVar1 & 0x20) != 0) {
      perror(s_fread_362a69f0);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    if (uVar2 == 0) break;
    uVar3 = FUN_3614bd30(param_2,local_4004,uVar2);
    if (uVar3 != uVar2) {
      puVar4 = FUN_3614c180((int)param_2,&local_4008);
      FUN_3614fe80(puVar4);
    }
    uVar2 = fread(local_4004,1,0x4000,param_1);
    bVar1 = (byte)param_1->_flag;
  }
  fclose(param_1);
  uVar2 = FUN_3614c130((int)param_2);
  if (uVar2 != 0) {
    FUN_3614fe80(s_failed_gzclose_362a69f8);
  }
  return;
}

