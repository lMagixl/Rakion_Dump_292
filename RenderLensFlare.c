
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::RenderLensFlare(class CTextureObject
   *,float,float,float,float,float,unsigned long)const  */

void __thiscall
CDrawPort::RenderLensFlare
          (CDrawPort *this,CTextureObject *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,ulong param_7)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  CTextureData *this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined4 uStack_8;
  float fStack_4;
  
                    /* 0x66e50  3146  ?RenderLensFlare@CDrawPort@@QBEXPAVCTextureObject@@MMMMMK@Z */
  (*DAT_362c45f8)();
  gfxSetBlendType(0xcd);
  DAT_362c5500 = 0;
  DAT_362c5510 = 0;
  _DAT_362c5520 = 0;
  _DAT_362c5530 = 0;
  _DAT_362c5540 = 0;
  DAT_362c5560 = 0;
  DAT_362c54e0 = 4;
  iVar7 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
  iVar8 = 4;
  if (iVar7 < 4) {
    iVar8 = FUN_36061f60((undefined4 *)&DAT_362c54d8);
    FUN_360621d0(&DAT_362c54d8,iVar8 + ((int)(3 / (longlong)DAT_362c54e4) + 1) * DAT_362c54e4);
    iVar8 = DAT_362c54e0;
  }
  pfVar1 = (float *)(DAT_362c54dc + (iVar8 * 3 + -0xc) * 4);
  iVar7 = DAT_362c5510 + 4;
  DAT_362c5510 = iVar7;
  iVar8 = FUN_36061fd0(&DAT_362c5508);
  if (iVar8 < iVar7) {
    iVar8 = FUN_36061fd0(&DAT_362c5508);
    FUN_36062460(&DAT_362c5508,iVar8 + ((int)(3 / (longlong)DAT_362c5514) + 1) * DAT_362c5514);
  }
  iVar7 = DAT_362c5500 + 4;
  puVar2 = (undefined4 *)(DAT_362c550c + -0x20 + DAT_362c5510 * 8);
  DAT_362c5500 = iVar7;
  iVar8 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
  if (iVar8 < iVar7) {
    iVar8 = FUN_36061f90((undefined4 *)&DAT_362c54f8);
    FUN_360622b0(&DAT_362c54f8,iVar8 + ((int)(3 / (longlong)DAT_362c5504) + 1) * DAT_362c5504);
  }
  puVar3 = (undefined4 *)(DAT_362c54fc + -0x10 + DAT_362c5500 * 4);
  uVar9 = (int)ROUND(param_6 * _DAT_362287f8) & 0xff;
  this_00 = *(CTextureData **)(param_1 + 0x14);
  iVar8 = 0;
  fVar6 = -(param_4 * _DAT_36227cf0 * *(float *)(_pfCosTable + uVar9 * 4));
  fVar4 = *(float *)(_pfSinTable + uVar9 * 4) * param_5 * _DAT_36227cf0;
  fStack_4 = -(*(float *)(_pfSinTable + uVar9 * 4) * param_4 * _DAT_36227cf0);
  fVar5 = -(*(float *)(_pfCosTable + uVar9 * 4) * param_5 * _DAT_36227cf0);
  lVar10 = CAnimObject::GetFrame((CAnimObject *)param_1);
  CTextureData::SetAsCurrent(this_00,lVar10,iVar8);
  FUN_360605c0(&uStack_8,param_7);
  pfVar1[2] = 0.01;
  pfVar1[5] = 0.01;
  pfVar1[8] = 0.01;
  pfVar1[0xb] = 0.01;
  *pfVar1 = fVar4 + (param_2 - fVar6);
  pfVar1[1] = fVar5 + (param_3 - fStack_4);
  pfVar1[3] = (param_2 - fVar6) - fVar4;
  pfVar1[4] = (param_3 - fStack_4) - fVar5;
  pfVar1[6] = (fVar6 + param_2) - fVar4;
  pfVar1[7] = (fStack_4 + param_3) - fVar5;
  pfVar1[9] = fVar4 + fVar6 + param_2;
  pfVar1[10] = fVar5 + fStack_4 + param_3;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[7] = 0;
  puVar2[3] = 0x3f800000;
  puVar2[4] = 0x3f800000;
  puVar2[5] = 0x3f800000;
  puVar2[6] = 0x3f800000;
  *puVar3 = uStack_8;
  puVar3[1] = uStack_8;
  puVar3[2] = uStack_8;
  puVar3[3] = uStack_8;
  *(int *)(_pGfx + 0xb34) = *(int *)(_pGfx + 0xb34) + 6;
  FUN_36083610();
  return;
}

