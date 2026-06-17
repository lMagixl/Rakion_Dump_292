
int * __cdecl FUN_361c0ebe(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_36248cf8;
  while( true ) {
    if (PTR_DAT_362abdb0 <= piVar1) {
      return &DAT_36248cd0;
    }
    if (param_1 == *piVar1) break;
    piVar1 = piVar1 + 9;
  }
  return piVar1;
}

