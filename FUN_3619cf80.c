
void __thiscall FUN_3619cf80(void *this,int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    if ((*(int *)((int)this + 8) - iVar1) / 0x1e != 0) {
      iVar1 = ((int)param_2 - iVar1) / 0x1e;
      goto LAB_3619cfc9;
    }
  }
  iVar1 = 0;
LAB_3619cfc9:
  FUN_3619ccc0(this,param_2,1,param_3);
  *param_1 = iVar1 * 0x1e + *(int *)((int)this + 4);
  return;
}

