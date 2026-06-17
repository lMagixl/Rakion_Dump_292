
/* public: int __thiscall FieldInfo::IsMasterSlot(unsigned char) */

int __thiscall FieldInfo::IsMasterSlot(FieldInfo *this,uchar param_1)

{
                    /* 0x7330  2419  ?IsMasterSlot@FieldInfo@@QAEHE@Z */
  return (uint)(this[0x2e] == (FieldInfo)param_1);
}

