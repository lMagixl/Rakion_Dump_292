
int __cdecl FUN_361dbb0a(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  void *this;
  int iVar3;
  
  piVar1 = DAT_36383c5c;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      puVar2 = (undefined4 *)FUN_361bf99c(0xb0);
      if (puVar2 == (undefined4 *)0x0) {
        this = (void *)0x0;
      }
      else {
        this = (void *)FUN_361db132(puVar2);
      }
      if (this == (void *)0x0) {
        iVar3 = -0x7ff8fff2;
      }
      else {
        iVar3 = FUN_361db4b6(this,param_1);
        if (iVar3 < 0) {
          FUN_361db279(this,1);
        }
        else {
          *param_2 = this;
          iVar3 = 0;
        }
      }
      return iVar3;
    }
    if ((int *)piVar1[1] == param_1) break;
    piVar1 = (int *)piVar1[0x2b];
  }
  *piVar1 = *piVar1 + 1;
  *param_2 = piVar1;
  return 0;
}

