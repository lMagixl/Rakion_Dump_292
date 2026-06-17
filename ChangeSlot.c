
/* public: void __thiscall CPlayerSource::ChangeSlot(class CPlayerCharacter &,unsigned char) */

void __thiscall
CPlayerSource::ChangeSlot(CPlayerSource *this,CPlayerCharacter *param_1,uchar param_2)

{
  int iVar1;
  CPlayerSource *this_00;
  
                    /* 0x107e80  1159  ?ChangeSlot@CPlayerSource@@QAEXAAVCPlayerCharacter@@E@Z */
  CPlayerCharacter::operator=((CPlayerCharacter *)(this + 8),param_1);
  CPlayerAction::Clear((CPlayerAction *)(this + 0x58));
  this_00 = this + 0xa0;
  iVar1 = 10;
  do {
    CPlayerAction::Clear((CPlayerAction *)this_00);
    this_00 = this_00 + 0x48;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(uint *)this = (uint)param_2;
  *(uchar *)(*(int *)(_pNetwork + 0x24) + 0x2946) = param_2;
  *(uint *)(this + 0x48) = (uint)param_2;
  *(undefined4 *)(this + 4) = 1;
  return;
}

