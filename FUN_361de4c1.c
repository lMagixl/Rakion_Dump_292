
void __cdecl FUN_361de4c1(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  char *pcVar5;
  int local_44 [16];
  
  piVar3 = param_1;
  piVar4 = local_44;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  piVar3 = param_1;
  for (iVar2 = 0x67; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  piVar3 = local_44;
  piVar4 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  param_1[0x28] = 0x2000;
  pvVar1 = FUN_361e5642(param_1,0x2000);
  param_1[0x27] = (int)pvVar1;
  param_1[0x21] = (int)FUN_361e1196;
  param_1[0x22] = (int)thunk_FUN_361e5678;
  param_1[0x23] = (int)param_1;
  iVar2 = FUN_361e512c((int)(param_1 + 0x19),s_1_1_3_3624b250,0x38);
  if (iVar2 == -6) {
    pcVar5 = s_zlib_version_3624b290;
  }
  else if ((iVar2 == -4) || (iVar2 == -2)) {
    pcVar5 = s_zlib_memory_3624b2a0;
  }
  else {
    if (iVar2 == 0) goto LAB_361de55d;
    pcVar5 = s_Unknown_zlib_error_3624b23c;
  }
  FUN_361de341(param_1,pcVar5);
LAB_361de55d:
  param_1[0x1c] = param_1[0x27];
  param_1[0x1d] = param_1[0x28];
  FUN_361e10c4((int)param_1,0,0);
  return;
}

