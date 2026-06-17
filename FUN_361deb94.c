
void __cdecl FUN_361deb94(int *param_1,uint *param_2)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  uint unaff_ESI;
  int unaff_EDI;
  
  piVar2 = param_1;
  FUN_361e5feb(param_1,0);
  pbVar1 = (byte *)(piVar2 + 0x43);
  do {
    FUN_361e109c(piVar2,&param_1,4);
    uVar3 = FUN_361e56e5((undefined1 *)&param_1);
    FUN_361e11ee((int)piVar2);
    FUN_361e571b(piVar2,pbVar1,4);
    if (*(int *)pbVar1 == DAT_3624b1dc) {
      FUN_361e6077(piVar2,param_2,uVar3);
    }
    else if (*(int *)pbVar1 == DAT_3624b1e4) {
      if ((uVar3 == 0) && ((*(byte *)(piVar2 + 0x16) & 8) == 0)) {
        FUN_361e5feb(piVar2,0);
      }
      else {
        FUN_361de341(piVar2,s_Too_many_IDAT_s_found_3624b384);
      }
    }
    else if (*(void **)pbVar1 == DAT_3624b1f4) {
      FUN_361e626d(*(void **)pbVar1,piVar2,(int)param_2,uVar3);
    }
    else if (*(int *)pbVar1 == DAT_3624b1ec) {
      FUN_361e6397(piVar2,param_2,uVar3,unaff_EDI,unaff_ESI);
    }
    else if (*(int *)pbVar1 == DAT_3624b1fc) {
      FUN_361e63e1(piVar2,(int)param_2,uVar3);
    }
    else if (*(int *)pbVar1 == DAT_3624b204) {
      FUN_361e64ec(piVar2,(int)param_2,uVar3);
    }
    else if (*(int *)pbVar1 == DAT_3624b20c) {
      FUN_361e65db(piVar2,(int)param_2,uVar3);
    }
    else {
      FUN_361e6792(piVar2,(int)param_2,uVar3);
    }
  } while ((*(byte *)(piVar2 + 0x16) & 0x10) == 0);
  return;
}

