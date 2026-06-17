
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: float __thiscall FieldInfo::GetRestRoundTime(void) */

float __thiscall FieldInfo::GetRestRoundTime(FieldInfo *this)

{
  float fVar1;
  DWORD DVar2;
  
                    /* 0x199b40  2084  ?GetRestRoundTime@FieldInfo@@QAEMXZ */
  DVar2 = timeGetTime();
  fVar1 = (float)(int)DVar2;
  if ((int)DVar2 < 0) {
    fVar1 = fVar1 + _DAT_362265a8;
  }
  return *(float *)(this + 0x4934) - (fVar1 * _DAT_362253e4 - *(float *)(this + 0x493c));
}

