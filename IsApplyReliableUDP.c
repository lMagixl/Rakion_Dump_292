
/* public: int __thiscall CSessionState::IsApplyReliableUDP(unsigned long,unsigned long,unsigned
   short,unsigned char) */

int __thiscall
CSessionState::IsApplyReliableUDP
          (CSessionState *this,ulong param_1,ulong param_2,ushort param_3,uchar param_4)

{
  int iVar1;
  
                    /* 0x10eaf0  2361  ?IsApplyReliableUDP@CSessionState@@QAEHKKGE@Z */
  iVar1 = IsValidUDP_ForPlayer(this,param_4,param_2,param_3);
  if (iVar1 != 0) {
    iVar1 = IsRightSequence(this,param_4,param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

