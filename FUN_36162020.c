
void FUN_36162020(void)

{
  uint uVar1;
  bool bVar2;
  undefined4 *in_EAX;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int local_c;
  int local_8;
  
  FUN_3616de60(in_EAX + 0x13);
  iVar5 = in_EAX[6] * 0x54 + *(int *)(*(int *)*in_EAX + 0x18);
  local_8 = FUN_3615a280((undefined4 *)(iVar5 + 0x18));
  if (0 < local_8) {
    local_c = 0;
    do {
      iVar3 = *(int *)(iVar5 + 0x1c);
      uVar1 = *(uint *)(iVar3 + 0x34 + local_c);
      piVar6 = (int *)(iVar3 + local_c);
      if ((uVar1 & 1) == 0) {
        DAT_362fe000 = DAT_362fe000 + 1;
      }
      else {
        DAT_362fe004 = DAT_362fe004 + 1;
      }
      if (((uVar1 & 2) == 0) || (DAT_362fe1e0 == 0)) {
        DAT_362fdfd4 = DAT_362fe1d4;
        DAT_362fdfd8 = DAT_362fe1d0;
      }
      else {
        DAT_362fdfd4 = DAT_362fe1dc;
        DAT_362fdfd8 = DAT_362fe1d8;
      }
      bVar2 = true;
      DAT_362fdfe4 = piVar6;
      if ((DAT_362fdfd0 == 9) || (DAT_362fdfd0 == 8)) {
        bVar2 = false;
      }
      else {
        shaSetVertexArray((GFXVertex *)(DAT_362fdfd8 + *piVar6 * 0xc),0,piVar6[1]);
        shaSetNormalArray((GFXNormal *)(DAT_362fdfd4 + *piVar6 * 0xc));
        iVar3 = FUN_3615a400(piVar6 + 0x10);
        shaSetIndices((ushort *)piVar6[0x11],iVar3 * 3);
      }
      shaSetTexture(-1,-1);
      shaEnableDepthTest();
      shaEnableDepthWrite();
      if (DAT_362a6bac < 0) {
        shaDisableBlend();
      }
      else {
        shaBlendFunc(0x1b,0x1c);
        shaEnableBlend();
      }
      if (DAT_362fdfd0 == 0xc) {
        (*DAT_362c4678)(0x5c);
        (*DAT_362c45f4)();
        (*DAT_362c4634)();
      }
      iVar3 = DAT_362fe1c8;
      DAT_362fe088 = DAT_362fe1c8;
      iVar4 = FUN_36061f90((undefined4 *)&DAT_362fe080);
      puVar7 = DAT_362fe084;
      if (iVar4 < iVar3) {
        iVar4 = FUN_36061f90((undefined4 *)&DAT_362fe080);
        FUN_360622b0(&DAT_362fe080,iVar4 + ((iVar3 + -1) / DAT_362fe08c + 1) * DAT_362fe08c);
        iVar3 = DAT_362fe1c8;
        puVar7 = DAT_362fe084;
      }
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      if (DAT_362a6bac < 0) {
        switch(DAT_362fdfd0) {
        case 2:
          FUN_36161590();
          break;
        case 3:
          FUN_361615d0();
          break;
        case 4:
          FUN_36161610();
          break;
        case 5:
          FUN_36161650();
          break;
        case 6:
          FUN_36161b50();
          break;
        case 7:
          FUN_36161c60();
          break;
        case 8:
          FUN_36161d80();
          break;
        case 9:
          FUN_361616e0();
          break;
        case 0xc:
          FUN_361616a0();
        }
      }
      else {
        switch(DAT_362fdfd0) {
        case 4:
          FUN_361619c0();
          break;
        case 5:
          FUN_36161970();
          break;
        case 10:
          FUN_36161820();
          break;
        case 0xb:
          FUN_361618e0();
        }
      }
      if (bVar2) {
        shaSetColorArray((GFXColor *)(DAT_362fe084 + *piVar6));
        shaRender();
      }
      if (DAT_362fdfd0 == 0xc) {
        (*DAT_362c4678)(0x5b);
      }
      (*DAT_362c4620)();
      shaClean();
      local_c = local_c + 0x48;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

