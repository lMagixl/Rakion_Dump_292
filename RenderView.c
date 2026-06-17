
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl RenderView(class CWorld &,class CEntity &,class CAnyProjection3D &,class CDrawPort
   &) */

void __cdecl
RenderView(CWorld *param_1,CEntity *param_2,CAnyProjection3D *param_3,CDrawPort *param_4)

{
  int iVar1;
  code *pcVar2;
  float *pfVar3;
  float afStack_20 [3];
  float fStack_14;
  undefined1 auStack_10 [16];
  
                    /* 0x11e9a0  3154
                       ?RenderView@@YAXAAVCWorld@@AAVCEntity@@AAVCAnyProjection3D@@AAVCDrawPort@@@Z
                        */
  if (DAT_362a4180 != 0) {
    if (((*(int *)(param_1 + 0x30) != 0) &&
        (iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 0x20), iVar1 != 0)) &&
       (pcVar2 = *(code **)(iVar1 + 0x48), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
    }
    if (DAT_362fcbc8 == 0xff) {
      CWorld::CalculateNonDirectionalShadows(param_1);
      CWorld::CalculateDirectionalShadows(param_1);
    }
    _DAT_362faaec = param_2;
    _DAT_362faaf0 = 0;
    _DAT_362faabc = param_1;
    CAnyProjection3D::operator=((CAnyProjection3D *)&DAT_362faaf4,param_3);
    _DAT_362faac0 = param_4;
    FUN_36117000(&DAT_362faab8,0,0,*(int *)(param_4 + 0x10) - *(int *)(param_4 + 8),
                 *(int *)(param_4 + 0x14) - *(int *)(param_4 + 0xc));
    afStack_20[2] = (float)(*(int *)(param_4 + 0x10) - *(int *)(param_4 + 8));
    fStack_14 = (float)(*(int *)(param_4 + 0x14) - *(int *)(param_4 + 0xc));
    afStack_20[0] = 0.0;
    afStack_20[1] = 0.0;
    pfVar3 = FUN_36069060(auStack_10,afStack_20,afStack_20 + 2);
    iVar1 = *(int *)(param_3 + 0x658);
    *(float *)(iVar1 + 0x54) = *pfVar3;
    *(float *)(iVar1 + 0x58) = pfVar3[1];
    *(float *)(iVar1 + 0x5c) = pfVar3[2];
    *(float *)(iVar1 + 0x60) = pfVar3[3];
    _DAT_362fb7f8 = 0;
    DAT_362fb814 = 0;
    FUN_3611e240((float *)&DAT_362faab8);
  }
  return;
}

