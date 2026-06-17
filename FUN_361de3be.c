
int * __cdecl FUN_361de3be(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  
  piVar1 = FUN_361e55f3(1);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar2 = setjmp3(piVar1,0);
  if (iVar2 != 0) {
    FUN_361e5678((int)piVar1,(void *)piVar1[0x27]);
    FUN_361e5635(piVar1);
    return (int *)0x0;
  }
  FUN_361de31f((int)piVar1,param_2,param_3,param_4);
  if ((param_1 == (char *)0x0) || (*param_1 != '1')) {
    FUN_361de341(piVar1,s_Incompatible_libpng_version_in_a_3624b258);
  }
  piVar1[0x28] = 0x2000;
  pvVar3 = FUN_361e5642(piVar1,0x2000);
  piVar1[0x27] = (int)pvVar3;
  piVar1[0x21] = (int)FUN_361e1196;
  piVar1[0x22] = (int)thunk_FUN_361e5678;
  piVar1[0x23] = (int)piVar1;
  iVar2 = FUN_361e512c((int)(piVar1 + 0x19),s_1_1_3_3624b250,0x38);
  if (iVar2 == -6) {
    pcVar4 = s_zlib_version_error_3624b214;
  }
  else if ((iVar2 == -4) || (iVar2 == -2)) {
    pcVar4 = s_zlib_memory_error_3624b228;
  }
  else {
    if (iVar2 == 0) goto LAB_361de49d;
    pcVar4 = s_Unknown_zlib_error_3624b23c;
  }
  FUN_361de341(piVar1,pcVar4);
LAB_361de49d:
  piVar1[0x1c] = piVar1[0x27];
  piVar1[0x1d] = piVar1[0x28];
  FUN_361e10c4((int)piVar1,0,0);
  return piVar1;
}

