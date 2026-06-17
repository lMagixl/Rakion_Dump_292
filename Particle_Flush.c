
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl Particle_Flush(void) */

void __cdecl Particle_Flush(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint local_8;
  
                    /* 0x6bad0  2744  ?Particle_Flush@@YAXXZ */
  iVar1 = FUN_36061f20(0x362c54d8);
  iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
  iVar1 = iVar2 * 2;
  *(float *)(DAT_362bef74 + 0x19c) = (float)iVar2 + *(float *)(DAT_362bef74 + 0x19c);
  bVar7 = DAT_362bf9e4 == 0;
  *(int *)(_pGfx + 0xb3c) = *(int *)(_pGfx + 0xb3c) + iVar1;
  if (bVar7) {
    (*DAT_362c4640)();
  }
  else {
    (*DAT_362c4614)();
  }
  FUN_36083610();
  if (DAT_362bf9e0 != 0) {
    (*DAT_362c4680)(0x52,0x52);
    if (DAT_362bf9d8 == 0) {
      FUN_3607b9d0((undefined4 *)&DAT_362c3b2c,(int *)&DAT_362c3ba8);
      local_8 = DAT_362c3b94 >> 0x18 | (DAT_362c3b94 & 0xff0000) >> 8 | (DAT_362c3b94 & 0xff00) << 8
                | DAT_362c3b94 << 0x18;
    }
    else {
      FUN_3607b9d0((undefined4 *)&DAT_362c3b64,(int *)&DAT_362c3bec);
      local_8 = DAT_362c3b08 >> 0x18 | (DAT_362c3b08 & 0xff0000) >> 8 | (DAT_362c3b08 & 0xff00) << 8
                | DAT_362c3b08 << 0x18;
    }
    (*DAT_362c4628)();
    (*DAT_362c4600)();
    (*DAT_362c4648)(0x1b,0x1c);
    (*DAT_362c461c)();
    (*DAT_362c464c)(0x2c);
    iVar2 = FUN_3606db20(0x362c5508);
    uVar3 = (uint)(iVar2 * 8) >> 2;
    puVar5 = DAT_362bf9f4;
    puVar6 = DAT_362c550c;
    if (uVar3 != 0) {
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        *(uint *)(DAT_362c54fc + iVar4 * 4) = local_8;
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    FUN_36083610();
    (*DAT_362c45fc)();
    (*DAT_362c462c)();
    (*DAT_362c464c)(0x2b);
    CTextureData::SetAsCurrent(DAT_362bf9e8,DAT_362bf9ec,0);
    *(int *)(_pGfx + 0xb3c) = *(int *)(_pGfx + 0xb3c) + iVar1;
  }
  DAT_362c54e0 = 0;
  DAT_362c5500 = 0;
  DAT_362c5510 = 0;
  _DAT_362c5520 = 0;
  _DAT_362c5530 = 0;
  _DAT_362c5540 = 0;
  DAT_362c5560 = 0;
  DAT_362bf9f8 = 0;
  DAT_362bf9e4 = 0;
  return;
}

