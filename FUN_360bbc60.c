
undefined4 * __thiscall FUN_360bbc60(void *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = *(undefined4 *)this;
  local_c = *(undefined4 *)((int)this + 4);
  local_8 = *(undefined4 *)((int)this + 8);
  local_4 = *(undefined4 *)((int)this + 0xc);
  puVar1 = (undefined4 *)FUN_360bb960(&local_10,param_2);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return param_1;
}

