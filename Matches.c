
/* public: int __thiscall CTString::Matches(class CTString const &)const  */

int __thiscall CTString::Matches(CTString *this,CTString *param_1)

{
  int iVar1;
  
                    /* 0x24630  2633  ?Matches@CTString@@QBEHABV1@@Z */
  iVar1 = Matches(this,*(char **)param_1);
  return iVar1;
}

