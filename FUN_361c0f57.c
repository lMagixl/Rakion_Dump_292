
int __cdecl FUN_361c0f57(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  uVar3 = 0xffffffff;
  piVar4 = &DAT_36248cd0;
  do {
    if (*param_1 == 0) {
      return *piVar4;
    }
    piVar1 = FUN_361c0ebe(*param_1);
    if ((*piVar1 != 0) && ((piVar1[1] != 1 || (param_2 != 0)))) {
      if (*param_3 == *piVar1) {
        return *param_3;
      }
      uVar2 = FUN_361c0ee2((int)param_3,(int)piVar1);
      if (((uVar2 != 0xffffffff) && (uVar2 <= uVar3)) &&
         ((uVar2 != uVar3 || ((uint)piVar1[2] < (uint)piVar4[2])))) {
        uVar3 = uVar2;
        piVar4 = piVar1;
      }
    }
    param_1 = param_1 + 1;
  } while( true );
}

