
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall FieldInfo::SetRestRoundTime(float) */

void __thiscall FieldInfo::SetRestRoundTime(FieldInfo *this,float param_1)

{
  float fVar1;
  DWORD DVar2;
  
                    /* 0x199b90  3579  ?SetRestRoundTime@FieldInfo@@QAEXM@Z */
  DVar2 = timeGetTime();
  fVar1 = (float)(int)DVar2;
  if ((int)DVar2 < 0) {
    fVar1 = fVar1 + _DAT_362265a8;
  }
  *(float *)(this + 0x493c) = fVar1 * _DAT_362253e4 - (*(float *)(this + 0x4934) - param_1);
                    /* WARNING: Could not recover jumptable at 0x36199bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Sleep(1);
  return;
}

