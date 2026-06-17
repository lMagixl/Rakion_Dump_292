
/* public: int __thiscall FieldInfo::IsRoundState(enum ERoundState) */

int __thiscall FieldInfo::IsRoundState(FieldInfo *this,ERoundState param_1)

{
                    /* 0x7250  2462  ?IsRoundState@FieldInfo@@QAEHW4ERoundState@@@Z */
  return (uint)(*(ERoundState *)this == param_1);
}

