
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_36030110(int param_1)

{
  undefined4 local_8;
  undefined4 uStack_4;
  
  CTimer::GetHighPrecisionTimer(_pTimer);
  return (((float10)*(longlong *)(param_1 + 0x28) / (float10)*(longlong *)_pTimer) /
         ((float10)CONCAT44((uStack_4 - *(int *)(param_1 + 0x3c)) -
                            (uint)(local_8 < *(uint *)(param_1 + 0x38)),
                            local_8 - *(uint *)(param_1 + 0x38)) / (float10)*(longlong *)_pTimer)) *
         (float10)_DAT_362255b0;
}

