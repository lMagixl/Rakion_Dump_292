
void __thiscall FUN_362040b0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 8);
  for (; param_2 != puVar1; param_2 = param_2 + 1) {
    *param_1 = *param_2;
    param_1 = param_1 + 1;
  }
  *(undefined4 **)((int)this + 8) = param_1;
  return;
}

