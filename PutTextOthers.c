
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: void __thiscall CDrawPort::PutTextOthers(class CTString const &,long const &,long const
   &,unsigned long const &,int const &)const  */

void __thiscall
CDrawPort::PutTextOthers
          (CDrawPort *this,CTString *param_1,long *param_2,long *param_3,ulong *param_4,int *param_5
          )

{
  PredefinedBlendType PVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CFontTexture *this_00;
  CTextureData *this_01;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  int *piVar10;
  float local_10;
  float local_c;
  
  piVar10 = param_5;
                    /* 0x6ab10  2886  ?PutTextOthers@CDrawPort@@QBEXABVCTString@@ABJ1ABKABH@Z */
  this_00 = CFontTexture::getInstance();
  this_01 = CFontTexture::getFontTexture(this_00,param_1,piVar10);
  if (this_01 != (CTextureData *)0x0) {
    local_10 = (float)(*(int *)(*(int *)(this + 4) + 0x20) *
                       (int)ROUND(*(float *)(this + 0x30) * _DAT_36228800) >> 0x10) *
               *(float *)(this + 0x34) * *(float *)(this + 0x30) * _DAT_362287a8;
    local_c = (float)*(int *)(*(int *)(this + 4) + 0x1c) *
              *(float *)(this + 0x34) * *(float *)(this + 0x30) * _DAT_362287a8;
    (*DAT_362c4680)(0x51,0x51);
    CTextureData::SetAsCurrent(this_01,0,0);
    PVar1 = *(PredefinedBlendType *)(this + 0x40);
    (*DAT_362c4624)();
    gfxSetBlendType(PVar1);
    FUN_360605c0(&param_5,*param_4);
    piVar10 = param_5;
    if ((*(uint *)(this + 0x3c) & 1) == 0) {
      local_c = 0.0;
    }
    if ((*(uint *)(this + 0x3c) & 2) == 0) {
      local_10 = 0.0;
    }
    DAT_362c54e0 = 0;
    DAT_362c5500 = 0;
    DAT_362c5510 = 0;
    _DAT_362c5520 = 0;
    _DAT_362c5530 = 0;
    _DAT_362c5540 = 0;
    DAT_362c5560 = 0;
    iVar5 = FUN_36062560(&DAT_362c54d8,8);
    iVar6 = FUN_360627d0(&DAT_362c5508,8);
    iVar7 = FUN_36062630(&DAT_362c54f8,8);
    iVar9 = *(int *)(this_01 + 0x20) >> ((byte)*(undefined4 *)(this_01 + 0x28) & 0x1f);
    fVar3 = _DAT_36223384 /
            (float)(*(int *)(this_01 + 0x24) >> ((byte)*(undefined4 *)(this_01 + 0x28) & 0x1f));
    fVar2 = (float)iVar9;
    fVar4 = _DAT_36223384 / (float)iVar9;
    uVar8 = PutChar(this,iVar5,iVar6,iVar7,piVar10,local_c,local_10,(float)*param_2,
                    fVar2 + (float)*param_2,(float)*param_3,(float)*param_3 + _DAT_36228804,
                    fVar4 * _DAT_3622376c,fVar2 * fVar4,fVar3 * _DAT_3622376c,_DAT_36228804 * fVar3)
    ;
    DAT_362c54e0 = uVar8 << 2;
    DAT_362c5500 = DAT_362c54e0;
    DAT_362c5510 = DAT_362c54e0;
    FUN_36083610();
  }
  return;
}

