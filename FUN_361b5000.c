
void __thiscall
FUN_361b5000(void *this,uint param_1,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  CShell *extraout_ECX;
  CShell *extraout_ECX_00;
  CShell *this_00;
  
  if ((param_1 & 8) != 0) {
    iVar1 = *(int *)(DAT_362bec74 + param_2 * 0x1c);
    if ((iVar1 == 5) || (iVar1 == 6)) {
      iVar1 = FUN_361b6b80(0x362bec50);
      if (iVar1 - DAT_362bec64 < 1) {
        FUN_361b6c60(&DAT_362bec50,DAT_362bec68);
      }
      iVar1 = DAT_362bec64;
      DAT_362bec64 = DAT_362bec64 + 1;
      DAT_362beaa0 = (CTString *)FUN_361b6be0(&DAT_362bec50,iVar1);
      this = extraout_ECX_00;
    }
    else {
      this = DAT_362bec74;
      if (iVar1 == 7) {
        DAT_362beaa0 = (CTString *)FUN_361b6cb0(&DAT_362bec34);
        this = extraout_ECX;
      }
    }
  }
  if (DAT_362beaa0 != (CTString *)0x0) {
    iVar1 = FUN_360371d0(param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_3603a240(*param_3,param_2);
      if ((iVar1 == 0) || (((param_3[5] ^ param_1) & 1) != 0)) {
        CShell::ErrorF(this_00,(char *)_pShell,s_Symbol___s__is_already_declared_d_36243bb0,
                       param_3[1]);
        return;
      }
      iVar1 = *(int *)(DAT_362bec74 + *param_3 * 0x1c);
      if ((iVar1 == 5) || (iVar1 == 6)) {
        *(undefined4 *)DAT_362beaa0 = *(undefined4 *)param_3[2];
      }
      else if (iVar1 == 7) {
        CTString::operator=(DAT_362beaa0,(CTString *)param_3[2]);
      }
      else if ((iVar1 != 3) && (iVar1 != 2)) {
        CShell::ErrorF(_pShell,(char *)_pShell,s___s___old_value_couldn_t_be_reta_36243bdc,
                       param_3[1]);
        return;
      }
    }
    iVar1 = FUN_360371d0(param_3);
    if (iVar1 == 0) {
      iVar1 = FUN_3603a4b0(param_2);
      *param_3 = iVar1;
    }
    if ((param_3[2] == 0) || ((param_1 & 8) == 0)) {
      param_3[2] = (int)DAT_362beaa0;
    }
    param_3[5] = param_3[5] | param_1;
    if (param_3[3] == 0) {
      param_3[3] = param_4;
    }
    if (param_3[4] == 0) {
      param_3[4] = param_5;
    }
    return;
  }
  CShell::ErrorF(this,(char *)_pShell,s_Only_external_declarations_are_s_36243b84);
  return;
}

