
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FUN_3619a820(char *param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  void *local_44;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  CHAR local_30 [17];
  CHAR local_1f [11];
  void *pvStack_14;
  undefined4 local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pcVar1 = param_1;
  puStack_8 = &LAB_3621b298;
  pvStack_c = ExceptionList;
  local_10 = DAT_362abd90;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_4 = 0;
  local_44 = (void *)CONCAT31(local_44._1_3_,*param_1);
  ExceptionList = &pvStack_c;
  if (*param_1 == '\0') {
    uVar3 = 3;
    ExceptionList = &pvStack_c;
    if (*(ushort *)(param_1 + 1) != 0) {
      param_1 = (char *)(uint)*(ushort *)(param_1 + 1);
      ExceptionList = &pvStack_c;
      do {
        lstrcpyA(local_30,pcVar1 + (uVar3 & 0xffff));
        iVar2 = lstrlenA(local_30);
        uVar3 = uVar3 + 1 + iVar2;
        lstrcpyA(local_1f,pcVar1 + (uVar3 & 0xffff));
        iVar2 = lstrlenA(local_1f);
        uVar3 = uVar3 + 1 + iVar2;
        FUN_3619d050(local_40,(undefined4 *)local_30);
        param_1 = param_1 + -1;
      } while (param_1 != (char *)0x0);
    }
  }
  (**(code **)(*DAT_3637fb00 + 0x22c))(local_44,local_40);
  if (local_44 != (void *)0x0) {
    operator_delete(local_44);
  }
  ExceptionList = pvStack_14;
  return;
}

