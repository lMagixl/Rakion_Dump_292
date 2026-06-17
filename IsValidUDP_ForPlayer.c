
/* public: int __thiscall CSessionState::IsValidUDP_ForPlayer(unsigned char,unsigned long,unsigned
   short) */

int __thiscall
CSessionState::IsValidUDP_ForPlayer(CSessionState *this,uchar param_1,ulong param_2,ushort param_3)

{
  int iVar1;
  
                    /* 0x10ea50  2497  ?IsValidUDP_ForPlayer@CSessionState@@QAEHEKG@Z */
  if (param_1 < 0x15) {
    iVar1 = (**(code **)(*(int *)_pRakionWorldNet + 8))();
    if (((iVar1 != 0) && (*(ulong *)(iVar1 + 0x1e8 + (uint)param_1 * 0x37c) == param_2)) &&
       (*(ushort *)(iVar1 + (uint)param_1 * 0x37c + 0x1ec) == param_3)) {
      return 1;
    }
  }
  return 0;
}

