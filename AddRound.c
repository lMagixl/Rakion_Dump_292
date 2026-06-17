
/* public: void __thiscall FieldInfo::AddRound(void) */

void __thiscall FieldInfo::AddRound(FieldInfo *this)

{
                    /* 0x72d0  1009  ?AddRound@FieldInfo@@QAEXXZ */
  *(int *)(this + 0x4938) = *(int *)(this + 0x4938) + 1;
  return;
}

