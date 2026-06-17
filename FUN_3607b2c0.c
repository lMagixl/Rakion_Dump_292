
void __cdecl FUN_3607b2c0(int param_1)

{
  if (*(int *)(_pGfx + 0xabc) != param_1) {
    (**(code **)(**(int **)(_pGfx + 0xa5c) + 0x130))(*(int **)(_pGfx + 0xa5c),param_1);
    *(int *)(_pGfx + 0xabc) = param_1;
                    /* WARNING: Could not recover jumptable at 0x3607b2f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_362c46dc)(0);
    return;
  }
  return;
}

