
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_36141ea0(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char local_118 [256];
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_362199b0;
  local_10 = ExceptionList;
  local_14 = &stack0xfffffed8;
  local_18 = DAT_362abd90;
  ExceptionList = &local_10;
  vsprintf(local_118,param_2,&stack0x0000000c);
  if (DAT_362fd984 == 0) {
    local_8 = 0;
    CTFileStream::Create_t((CTFileStream *)&DAT_362fda60,(CTFileName *)&DAT_362fda54,1);
    DAT_362fd984 = 1;
  }
  pcVar2 = local_118;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = (int)pcVar2 - (int)(local_118 + 1);
  pcVar2 = local_118;
  pcVar5 = DAT_362fda74;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar2;
    pcVar2 = pcVar2 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar5 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    pcVar5 = pcVar5 + 1;
  }
  DAT_362fda74 = DAT_362fda74 + uVar3;
  ExceptionList = local_10;
  return;
}

