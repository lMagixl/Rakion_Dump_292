
int __thiscall FUN_36105b50(void *this,undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  DWORD DVar1;
  
  *(undefined4 *)((int)this + 0x3fc) = param_1;
  *(undefined2 *)((int)this + 0x3f8) = 0;
  *(undefined4 *)((int)this + 0x400) = param_2;
  *(undefined2 *)((int)this + 0x404) = param_3;
  *(undefined4 *)((int)this + 0x40c) = 0;
  *(undefined4 *)((int)this + 0x408) = 0;
  DVar1 = timeGetTime();
  *(DWORD *)((int)this + 0x410) = DVar1 + 1000;
  return (int)this;
}

