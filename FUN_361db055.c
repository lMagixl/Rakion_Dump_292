
int FUN_361db055(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  if (param_1 == 0) {
    DAT_362acda4 = 0xffff;
    ppuVar3 = &PTR_FUN_362abea0;
    ppuVar4 = &PTR_LAB_362abdb8;
    for (iVar2 = 0x39; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppuVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      ppuVar4 = ppuVar4 + 1;
    }
  }
  else if (DAT_362acda4 == 0xffff) {
    DAT_362acda4 = 0;
    ppuVar3 = &PTR_FUN_362abea0;
    ppuVar4 = &PTR_LAB_362abdb8;
    for (iVar2 = 0x39; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppuVar4 = *ppuVar3;
      ppuVar3 = ppuVar3 + 1;
      ppuVar4 = ppuVar4 + 1;
    }
    FUN_361e389c(&PTR_LAB_362abdb8);
    iVar2 = FUN_361dadaa(4,s_DisableD3DXPSGP_36249dac,(LPBYTE)&param_1);
    if (iVar2 == 0) {
      param_1 = 0;
    }
    if (param_1 != 1) {
      uVar1 = FUN_361dafa1(7);
      if (uVar1 == 0) {
        uVar1 = FUN_361dafa1(10);
        if (uVar1 == 0) {
          uVar1 = FUN_361dafa1(6);
          if (uVar1 != 0) {
            FUN_361e2ee0(&PTR_LAB_362abdb8);
            DAT_362acda4 = 3;
          }
        }
        else {
          FUN_361e2ff0(&PTR_LAB_362abdb8);
          DAT_362acda4 = 2;
        }
      }
      else {
        FUN_361e31d5(&PTR_LAB_362abdb8);
        DAT_362acda4 = 1;
      }
    }
  }
  return DAT_362acda4;
}

