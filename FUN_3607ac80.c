
undefined4 __cdecl FUN_3607ac80(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(_pGfx + 0xa38) == 0) {
    uVar1 = FUN_3607a470(param_1);
    return uVar1;
  }
  if (*(int *)(_pGfx + 0xa38) == 1) {
    uVar1 = FUN_36076110(param_1);
    return uVar1;
  }
  return 0;
}

