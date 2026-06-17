
undefined4 * __thiscall FUN_3609c160(void *this,HWND param_1)

{
  HDC pHVar1;
  
  *(HWND *)((int)this + 4) = param_1;
  pHVar1 = GetDC(param_1);
  *(HDC *)this = pHVar1;
  return this;
}

