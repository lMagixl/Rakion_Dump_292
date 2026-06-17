
void __thiscall FUN_361bc690(void *this,undefined4 *param_1)

{
  float local_14;
  undefined4 local_10 [4];
  
  local_14 = SQRT(*(float *)((int)this + 0xc) * *(float *)((int)this + 0xc) +
                  *(float *)((int)this + 8) * *(float *)((int)this + 8) +
                  *(float *)((int)this + 4) * *(float *)((int)this + 4));
  FUN_361bc3d0(this,local_10,&local_14);
  FUN_361bc1a0(local_10);
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  param_1[1] = *(undefined4 *)((int)this + 4);
  param_1[2] = *(undefined4 *)((int)this + 8);
  param_1[3] = *(undefined4 *)((int)this + 0xc);
  *param_1 = &PTR_FUN_3623dc04;
  return;
}

