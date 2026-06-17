
/* public: int __thiscall CPlayerCharacter::operator==(class CPlayerCharacter const &)const  */

int __thiscall CPlayerCharacter::operator==(CPlayerCharacter *this,CPlayerCharacter *param_1)

{
  int iVar1;
  int iVar2;
  
                    /* 0x1353b0  838  ??8CPlayerCharacter@@QBEHABV0@@Z */
  iVar1 = 0;
  iVar2 = (int)param_1 - (int)this;
  do {
    if (*this != this[iVar2]) {
      return 0;
    }
    iVar1 = iVar1 + 1;
    this = this + 1;
  } while (iVar1 < 0x10);
  return 1;
}

