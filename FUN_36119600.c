
/* WARNING: Removing unreachable block (ram,0x361198d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_36119600(void *this,CEntity *param_1,CModelObject *param_2,CPlacement3D *param_3,
            undefined4 param_4,int param_5,uint param_6)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  float local_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float local_160;
  float local_15c;
  float local_158;
  float fStack_154;
  ulong local_150;
  ulong local_14c;
  void *local_148;
  float fStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  CRenderModel local_f4 [24];
  long lStack_dc;
  undefined4 uStack_d8;
  uint uStack_30;
  undefined4 uStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  ulong uStack_14;
  ulong uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_362185dd;
  local_c = ExceptionList;
  if ((((*(float *)(param_2 + 0x84) != _DAT_3622376c) ||
       (*(float *)(param_2 + 0x88) != _DAT_3622376c)) ||
      (*(float *)(param_2 + 0x8c) != _DAT_3622376c)) &&
     ((*(int *)((int)this + 0xd40) == 0 || ((*(uint *)(param_1 + 0x10) & 0x100) != 0)))) {
    local_160 = 0.0;
    local_11c = 0;
    local_15c = 1.0;
    local_158 = 0.0;
    local_118 = 0x3f800000;
    iVar4 = 0;
    local_14c = 0x7f7f7f00;
    local_150 = 0x3f3f3f00;
    local_140 = 1.0;
    local_13c = -1.0;
    local_138 = 1.0;
    local_114 = 0;
    local_110 = 0;
    local_170 = 0.0;
    ExceptionList = &local_c;
    local_148 = this;
    if (*(int *)((int)this + 0xd40) == 0) {
      if (DAT_362a4108 < 0) {
        DAT_362a4108 = 0;
      }
      else if (3 < DAT_362a4108) {
        DAT_362a4108 = 3;
      }
      ExceptionList = &local_c;
      if ((~*(uint *)(param_1 + 0x10) & 0x800) != 0) {
        ExceptionList = &local_c;
        iVar4 = FUN_36118a30(param_1,(float *)param_3,&local_14c,&local_150,&local_170,&local_140,
                             &local_11c);
      }
      iVar1 = (**(code **)(*(int *)param_1 + 0xe0))(&local_140,&local_14c,&local_150);
      if (((iVar4 == 0) || (iVar1 == 0)) || ((param_5 == 0 || (DAT_362a4108 < 1)))) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
    }
    fVar3 = (float)(*(uint *)(param_2 + 0x98) & 0xff);
    if (3 < (uint)fVar3) {
      CRenderModel::CRenderModel(local_f4);
      fStack_20 = local_140;
      uStack_28 = param_4;
      fStack_1c = local_13c;
      fStack_18 = local_138;
      uStack_4 = 0;
      uStack_14 = local_14c;
      uStack_10 = local_150;
      CRenderModel::SetObjectPlacement(local_f4,param_3);
      if ((param_6 & 4) != 0) {
        uStack_30 = uStack_30 | 2;
      }
      if ((param_6 & 8) != 0) {
        uStack_30 = uStack_30 | 4;
      }
      if ((param_6 & 0x10) != 0) {
        uStack_30 = uStack_30 | 0x40;
      }
      if ((param_6 & 0x20) != 0) {
        uStack_30 = uStack_30 | 0x80;
      }
      if ((param_6 & 0x40) != 0) {
        uStack_30 = uStack_30 | 0x100;
      }
      if (*(CEntity **)((int)local_148 + 0x34) == param_1) {
        uStack_30 = uStack_30 | 8;
        iVar4 = 0;
      }
      if ((0 < *(int *)(_pGfx + 0xaf4)) &&
         (iVar1 = IsOfClass(param_1,s_Player_Weapons_36237a4c), iVar1 != 0)) {
        uStack_30 = uStack_30 | 0x200;
      }
      (**(code **)(*(int *)param_1 + 0x10c))();
      uVar5 = FUN_361bfd6c();
      uStack_d8 = (undefined4)uVar5;
      CModelObject::SetupModelRendering(param_2,local_f4);
      local_170 = (float)(int)fVar3 * local_170 * _DAT_362287a4;
      if (local_170 < _DAT_3622376c) {
        local_170 = 0.0;
      }
      else if (local_170 < _DAT_36223384 == (local_170 == _DAT_36223384)) {
        local_170 = 1.0;
      }
      fStack_154 = fVar3;
      if (((iVar4 != 0) && ((*(uint *)(param_1 + 0x10) & 0x100) == 0)) &&
         (iVar4 = CModelObject::HasShadow(param_2,lStack_dc), iVar4 != 0)) {
        if (DAT_362a4108 == 1) {
          local_170 = local_170 * _DAT_36230728 + _DAT_362287b0;
          CModelObject::AddSimpleShadow(param_2,local_f4,local_170,(Plane<float,3> *)&local_11c);
        }
        else if (DAT_362a4108 == 2) {
          local_160 = fStack_20 * _DAT_36230188;
          local_15c = fStack_1c * _DAT_36230188;
          local_158 = fStack_18 * _DAT_36230188;
          fStack_16c = *(float *)param_3 - local_160;
          fStack_168 = *(float *)(param_3 + 4) - local_15c;
          fStack_164 = *(float *)(param_3 + 8) - local_158;
          fStack_134 = fStack_16c;
          fStack_130 = fStack_168;
          fStack_12c = fStack_164;
          CModelObject::RenderShadow
                    (param_2,local_f4,(CPlacement3D *)&fStack_134,1e+11,1e+10,local_170,
                     (Plane<float,3> *)&local_11c);
        }
        else if (DAT_362a4108 == 3) {
          iVar1 = 0;
          iVar4 = FUN_3611f620(0x362fcb64);
          if (0 < iVar4) {
            do {
              piVar2 = (int *)FUN_361200f0(&DAT_362fcb64,iVar1);
              if ((*(byte *)(*piVar2 + 0x1c) & 2) != 0) {
                iVar4 = *(int *)(*piVar2 + 0xc);
                fStack_134 = *(float *)(iVar4 + 0x3c);
                fStack_130 = *(float *)(iVar4 + 0x40);
                fStack_12c = *(float *)(iVar4 + 0x44);
                uStack_128 = *(undefined4 *)(iVar4 + 0x48);
                uStack_124 = *(undefined4 *)(iVar4 + 0x4c);
                uStack_120 = *(undefined4 *)(iVar4 + 0x50);
                iVar4 = *piVar2;
                fStack_144 = *(float *)(iVar4 + 0x20);
                fStack_154 = *(float *)(iVar4 + 0x24);
                if ((*(byte *)(iVar4 + 0x1c) & 1) != 0) {
                  fStack_144 = 1e+10;
                  fStack_154 = 1e+11;
                  AnglesToDirectionVector
                            ((Vector<float,3> *)&uStack_128,(Vector<float,3> *)&fStack_100);
                  fStack_16c = fStack_100 * _DAT_36230188;
                  fStack_168 = fStack_fc * _DAT_36230188;
                  fStack_164 = fStack_f8 * _DAT_36230188;
                  local_160 = *(float *)param_3 - fStack_16c;
                  local_15c = *(float *)(param_3 + 4) - fStack_168;
                  local_158 = *(float *)(param_3 + 8) - fStack_164;
                  fStack_134 = local_160;
                  fStack_130 = local_15c;
                  fStack_12c = local_158;
                  fStack_10c = fStack_16c;
                  fStack_108 = fStack_168;
                  fStack_104 = fStack_164;
                }
                local_170 = (float)piVar2[4];
                if (local_170 < _DAT_3622376c) {
                  local_170 = 0.0;
                }
                else if (local_170 < _DAT_36223384 == (local_170 == _DAT_36223384)) {
                  local_170 = 1.0;
                }
                CModelObject::RenderShadow
                          (param_2,local_f4,(CPlacement3D *)&fStack_134,fStack_154,fStack_144,
                           local_170,(Plane<float,3> *)&local_11c);
              }
              iVar1 = iVar1 + 1;
              iVar4 = FUN_3611f620(0x362fcb64);
            } while (iVar1 < iVar4);
          }
        }
      }
      if (*(CEntity **)((int)local_148 + 0x34) == param_1) {
        __vViewerLightDirection = fStack_20;
        _DAT_362fca84 = fStack_1c;
        _DAT_362fca88 = fStack_18;
        _colViewerLight = uStack_14;
        _colViewerAmbient = uStack_10;
      }
      else {
        *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) | param_6 & 0x80;
        CModelObject::RenderModel(param_2,local_f4);
      }
      uStack_4 = 0xffffffff;
      CRenderModel::~CRenderModel(local_f4);
    }
  }
  ExceptionList = local_c;
  return;
}

