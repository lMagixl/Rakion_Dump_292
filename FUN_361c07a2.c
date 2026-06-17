
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_361c07a2(LPCWSTR param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  int cbMultiByte;
  uint uVar2;
  int local_18 [4];
  undefined1 *local_8;
  
  FUN_361cc028(local_18);
  FUN_361cc260();
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  uVar1 = FUN_361cc03a(local_18,param_1,1);
  if (-1 < (int)uVar1) {
    cbMultiByte = WideCharToMultiByte(0,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    local_8 = &stack0xfffffbf4;
    WideCharToMultiByte(0,0,param_1,-1,&stack0xfffffbf4,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
    uVar1 = FUN_361ce6ce();
    uVar2 = 0;
    if (-1 < (int)uVar1) goto LAB_361c0849;
  }
  uVar2 = uVar1;
LAB_361c0849:
  FUN_361cc309();
  FUN_361cc255(local_18);
  return uVar2;
}

