
void * __thiscall FUN_3601e510(void *this,_String_base *param_1)

{
  _String_base _Var1;
  _String_base *p_Var2;
  
  *(undefined4 *)((int)this + 0x18) = 0xf;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  p_Var2 = param_1;
  do {
    _Var1 = *p_Var2;
    p_Var2 = p_Var2 + 1;
  } while (_Var1 != (_String_base)0x0);
  FUN_3601df80(this,param_1,(int)p_Var2 - (int)(param_1 + 1));
  return this;
}

