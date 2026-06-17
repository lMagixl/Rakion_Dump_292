
/* public: float __thiscall FieldInfo::GetElapseTime(void) */

float __thiscall FieldInfo::GetElapseTime(FieldInfo *this)

{
  float10 extraout_ST1;
  float fVar1;
  
                    /* 0x199b80  1848  ?GetElapseTime@FieldInfo@@QAEMXZ */
  fVar1 = GetRestRoundTime(this);
  return (float)(extraout_ST1 - (float10)fVar1);
}

