
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FUN_36070e00(CDrawPort *param_1,undefined4 param_2,CAnyProjection3D *param_3,undefined4 param_4,
            int param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puStack_4;
  
  DAT_362c3a68 = *(int *)(_pGfx + 0xa38);
  uVar2 = 1;
  if ((DAT_362c3a68 == 0) || (DAT_362c3a68 == 1)) {
    if (DAT_362cce78 == 0) {
      if (DAT_362a4184 == 0) {
        return;
      }
    }
    else {
      DAT_362c53c0 = 0;
      DAT_362a4184 = 1;
      DAT_362a4168 = 1;
      DAT_362a416c = 1;
      DAT_362a4170 = 1;
      DAT_362c5458 = 0;
      DAT_362c5454 = 0;
    }
    DAT_362c3a70 = *(undefined4 *)(param_3 + 0x658);
    DAT_362bfa50 = param_4;
    _DAT_362bfa00 = param_1;
    DAT_362bfa44 = param_5;
    if (DAT_362a4178 < -9) {
      DAT_362a4178 = -9;
    }
    else if (9 < DAT_362a4178) {
      DAT_362a4178 = 9;
    }
    CDrawPort::SetProjection(param_1,param_3);
    DAT_362bfa48 = *(int *)(_pGfx + 0xadc);
    if ((((DAT_362c3a68 == 0) && (DAT_362c53d4 != 0)) && (DAT_362c44c8 != 0)) && (1 < DAT_362bfa48))
    {
      DAT_362bfa48 = DAT_362bfa48 + -1;
    }
    if (DAT_362a40cc < 1) {
      DAT_362bfa48 = 1;
    }
    else if (DAT_362a40cc <= DAT_362bfa48) {
      DAT_362bfa48 = DAT_362a40cc;
    }
    FUN_3606e3b0();
    if (param_5 == 0) {
      (*DAT_362c45f0)();
      uVar1 = extraout_ECX_00;
    }
    else {
      (*DAT_362c461c)();
      uVar1 = extraout_ECX;
    }
    FUN_3606de10(uVar1,&puStack_4);
    FUN_3606df10();
    FUN_3606e5e0(puStack_4);
    if (1 < DAT_362c3a6c) {
      do {
        if ((undefined4 *)(&DAT_362c1a68)[uVar2] != (undefined4 *)0x0) {
          FUN_36070a20((undefined4 *)(&DAT_362c1a68)[uVar2],uVar2,0);
        }
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < DAT_362c3a6c);
    }
    FUN_3606e3d0();
  }
  return;
}

