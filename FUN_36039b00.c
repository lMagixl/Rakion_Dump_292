
undefined4 * __thiscall FUN_36039b00(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  CTString::operator=((CTString *)((int)this + 4),(CTString *)(param_1 + 1));
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return this;
}

