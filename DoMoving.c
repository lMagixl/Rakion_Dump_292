
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: virtual void __thiscall CPlayerEntity::DoMoving(void) */

void __thiscall CPlayerEntity::DoMoving(CPlayerEntity *this)

{
  CMovableEntity *pCVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  CPlayerEntity *pCVar5;
  float afStack_48 [4];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float afStack_24 [4];
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((*(int *)(this + 0x84) != 0) && ((*(uint *)(this + 8) & 0x10000) == 0)) {
    if ((*(uint *)(this + 8) & 0x10) != 0) {
      *(float *)(this + 0x2ec) = *(float *)(this + 0x204) - *(float *)(this + 0x31c);
      *(float *)(this + 0x2f0) = *(float *)(this + 0x208) - *(float *)(this + 800);
      *(float *)(this + 0x2f4) = *(float *)(this + 0x20c) - *(float *)(this + 0x324);
      afStack_24[1] = (float)*(undefined4 *)(this + 0x334);
      afStack_24[0] = *(float *)(this + 0x328);
      afStack_24[2] = (float)*(undefined4 *)(this + 0x340);
      fStack_14 = (float)*(undefined4 *)(this + 0x338);
      afStack_24[3] = (float)*(undefined4 *)(this + 0x32c);
      fStack_10 = (float)*(undefined4 *)(this + 0x344);
      fStack_8 = (float)*(undefined4 *)(this + 0x33c);
      fStack_c = (float)*(undefined4 *)(this + 0x330);
      fStack_4 = (float)*(undefined4 *)(this + 0x348);
      pfVar3 = afStack_24;
      pfVar4 = afStack_48;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      afStack_24[0] =
           fStack_30 * *(float *)(this + 0x218) +
           afStack_48[3] * *(float *)(this + 0x214) + afStack_48[0] * *(float *)(this + 0x210);
      afStack_24[1] =
           afStack_48[1] * *(float *)(this + 0x210) +
           fStack_2c * *(float *)(this + 0x218) + fStack_38 * *(float *)(this + 0x214);
      afStack_24[2] =
           afStack_48[2] * *(float *)(this + 0x210) +
           fStack_28 * *(float *)(this + 0x218) + fStack_34 * *(float *)(this + 0x214);
      afStack_24[3] =
           afStack_48[3] * *(float *)(this + 0x220) +
           afStack_48[0] * *(float *)(this + 0x21c) + fStack_30 * *(float *)(this + 0x224);
      fStack_14 = fStack_38 * *(float *)(this + 0x220) +
                  afStack_48[1] * *(float *)(this + 0x21c) + fStack_2c * *(float *)(this + 0x224);
      fStack_10 = fStack_34 * *(float *)(this + 0x220) +
                  afStack_48[2] * *(float *)(this + 0x21c) + fStack_28 * *(float *)(this + 0x224);
      fStack_c = afStack_48[3] * *(float *)(this + 0x22c) +
                 afStack_48[0] * *(float *)(this + 0x228) + fStack_30 * *(float *)(this + 0x230);
      fStack_8 = fStack_38 * *(float *)(this + 0x22c) +
                 afStack_48[1] * *(float *)(this + 0x228) + fStack_2c * *(float *)(this + 0x230);
      fStack_4 = fStack_34 * *(float *)(this + 0x22c) +
                 afStack_48[2] * *(float *)(this + 0x228) + fStack_28 * *(float *)(this + 0x230);
      pfVar3 = afStack_24;
      pCVar5 = this + 0x2f8;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(float *)pCVar5 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pCVar5 = pCVar5 + 4;
      }
      FUN_361abc10();
      pCVar1 = (CMovableEntity *)0x0;
      if ((*(uint *)(this + 8) & 0xe0000000) == 0x80000000) {
        pCVar1 = (CMovableEntity *)this;
      }
      CMovableEntity::TryToMove((CMovableEntity *)this,pCVar1,1,1);
      return;
    }
    if (*(int *)(this + 0x148) == 0) {
      *(float *)(this + 0x2ec) = *(float *)(this + 0x204) - *(float *)(this + 0x31c);
      *(float *)(this + 0x2f0) = *(float *)(this + 0x208) - *(float *)(this + 800);
      *(float *)(this + 0x2f4) = *(float *)(this + 0x20c) - *(float *)(this + 0x324);
      afStack_24[2] = (float)*(undefined4 *)(this + 0x340);
      afStack_24[0] = *(float *)(this + 0x328);
      afStack_24[1] = (float)*(undefined4 *)(this + 0x334);
      fStack_10 = (float)*(undefined4 *)(this + 0x344);
      afStack_24[3] = (float)*(undefined4 *)(this + 0x32c);
      fStack_14 = (float)*(undefined4 *)(this + 0x338);
      fStack_4 = (float)*(undefined4 *)(this + 0x348);
      fStack_c = (float)*(undefined4 *)(this + 0x330);
      fStack_8 = (float)*(undefined4 *)(this + 0x33c);
      pfVar3 = afStack_24;
      pfVar4 = afStack_48;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pfVar4 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar4 = pfVar4 + 1;
      }
      afStack_24[0] =
           afStack_48[0] * *(float *)(this + 0x210) +
           fStack_30 * *(float *)(this + 0x218) + afStack_48[3] * *(float *)(this + 0x214);
      afStack_24[1] =
           afStack_48[1] * *(float *)(this + 0x210) +
           fStack_2c * *(float *)(this + 0x218) + fStack_38 * *(float *)(this + 0x214);
      afStack_24[2] =
           afStack_48[2] * *(float *)(this + 0x210) +
           fStack_28 * *(float *)(this + 0x218) + fStack_34 * *(float *)(this + 0x214);
      afStack_24[3] =
           afStack_48[3] * *(float *)(this + 0x220) +
           afStack_48[0] * *(float *)(this + 0x21c) + fStack_30 * *(float *)(this + 0x224);
      fStack_14 = fStack_38 * *(float *)(this + 0x220) +
                  afStack_48[1] * *(float *)(this + 0x21c) + fStack_2c * *(float *)(this + 0x224);
      fStack_10 = fStack_34 * *(float *)(this + 0x220) +
                  afStack_48[2] * *(float *)(this + 0x21c) + fStack_28 * *(float *)(this + 0x224);
      fStack_c = afStack_48[3] * *(float *)(this + 0x22c) +
                 afStack_48[0] * *(float *)(this + 0x228) + fStack_30 * *(float *)(this + 0x230);
      fStack_8 = fStack_38 * *(float *)(this + 0x22c) +
                 afStack_48[1] * *(float *)(this + 0x228) + fStack_2c * *(float *)(this + 0x230);
      fStack_4 = fStack_34 * *(float *)(this + 0x22c) +
                 afStack_48[2] * *(float *)(this + 0x228) + fStack_28 * *(float *)(this + 0x230);
      pfVar3 = afStack_24;
      pCVar5 = this + 0x2f8;
      for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(float *)pCVar5 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pCVar5 = pCVar5 + 4;
      }
      FUN_361abc10();
      DAT_363825bc = 4;
      iVar2 = CMovableEntity::TryToMove((CMovableEntity *)this,(CMovableEntity *)0x0,1,1);
      if (iVar2 != 0) {
        return;
      }
    }
    *(float *)(this + 0x2ec) = *(float *)(this + 0x204) - *(float *)(this + 0x31c);
    *(float *)(this + 0x2f0) = *(float *)(this + 0x208) - *(float *)(this + 800);
    *(float *)(this + 0x2f4) = *(float *)(this + 0x20c) - *(float *)(this + 0x324);
    FUN_361abc10();
    CMovableEntity::TryToMove((CMovableEntity *)this,(CMovableEntity *)0x0,1,0);
    afStack_24[2] = (float)*(undefined4 *)(this + 0x340);
    afStack_24[0] = *(float *)(this + 0x328);
    afStack_24[1] = (float)*(undefined4 *)(this + 0x334);
    fStack_10 = (float)*(undefined4 *)(this + 0x344);
    afStack_24[3] = (float)*(undefined4 *)(this + 0x32c);
    fStack_14 = (float)*(undefined4 *)(this + 0x338);
    fStack_4 = (float)*(undefined4 *)(this + 0x348);
    fStack_c = (float)*(undefined4 *)(this + 0x330);
    fStack_8 = (float)*(undefined4 *)(this + 0x33c);
    pfVar3 = afStack_24;
    pfVar4 = afStack_48;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar4 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pfVar4 = pfVar4 + 1;
    }
    afStack_24[0] =
         fStack_30 * *(float *)(this + 0x218) +
         afStack_48[3] * *(float *)(this + 0x214) + afStack_48[0] * *(float *)(this + 0x210);
    afStack_24[1] =
         fStack_2c * *(float *)(this + 0x218) +
         fStack_38 * *(float *)(this + 0x214) + afStack_48[1] * *(float *)(this + 0x210);
    afStack_24[2] =
         fStack_28 * *(float *)(this + 0x218) +
         fStack_34 * *(float *)(this + 0x214) + afStack_48[2] * *(float *)(this + 0x210);
    afStack_24[3] =
         fStack_30 * *(float *)(this + 0x224) +
         afStack_48[3] * *(float *)(this + 0x220) + afStack_48[0] * *(float *)(this + 0x21c);
    fStack_14 = fStack_2c * *(float *)(this + 0x224) +
                fStack_38 * *(float *)(this + 0x220) + afStack_48[1] * *(float *)(this + 0x21c);
    fStack_10 = fStack_28 * *(float *)(this + 0x224) +
                fStack_34 * *(float *)(this + 0x220) + afStack_48[2] * *(float *)(this + 0x21c);
    fStack_c = fStack_30 * *(float *)(this + 0x230) +
               afStack_48[3] * *(float *)(this + 0x22c) + afStack_48[0] * *(float *)(this + 0x228);
    fStack_8 = fStack_2c * *(float *)(this + 0x230) +
               fStack_38 * *(float *)(this + 0x22c) + afStack_48[1] * *(float *)(this + 0x228);
    fStack_4 = fStack_28 * *(float *)(this + 0x230) +
               fStack_34 * *(float *)(this + 0x22c) + afStack_48[2] * *(float *)(this + 0x228);
    pfVar3 = afStack_24;
    pCVar5 = this + 0x2f8;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(float *)pCVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
      pCVar5 = pCVar5 + 4;
    }
    if ((((((*(int *)(this + 0x2f8) != 0x3f800000) || (*(float *)(this + 0x2fc) != _DAT_3622376c))
          || (*(float *)(this + 0x300) != _DAT_3622376c)) ||
         ((*(float *)(this + 0x304) != _DAT_3622376c || (*(int *)(this + 0x308) != 0x3f800000)))) ||
        ((*(float *)(this + 0x30c) != _DAT_3622376c ||
         ((*(float *)(this + 0x310) != _DAT_3622376c || (*(float *)(this + 0x314) != _DAT_3622376c))
         )))) || (*(int *)(this + 0x318) != 0x3f800000)) {
      FUN_361abc10();
      CMovableEntity::TryToMove((CMovableEntity *)this,(CMovableEntity *)0x0,0,1);
    }
  }
  return;
}

