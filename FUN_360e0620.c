
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_360e0620(void *this,double *param_1,double *param_2,double *param_3,undefined8 *param_4)

{
  double local_10;
  undefined8 local_8;
  
  local_10 = _DAT_36227d78;
  local_8 = _DAT_36227d80;
  FUN_360e0100(*(double **)((int)this + 8),&local_10,param_1,param_2,_DAT_36227d98,_DAT_36227d28);
  *param_3 = local_10;
  *param_4 = local_8;
  return;
}

