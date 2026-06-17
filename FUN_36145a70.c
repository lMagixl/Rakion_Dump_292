
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_36145a70(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  uint uVar6;
  byte bVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 uVar11;
  float local_898;
  float local_894;
  float local_890;
  float local_88c;
  float local_888;
  float local_884;
  float local_880;
  float local_87c;
  float local_878;
  float local_874;
  float local_870;
  float local_86c;
  float local_868;
  float local_864;
  float local_860;
  int local_85c;
  int local_858;
  float local_854;
  float local_850;
  float local_84c;
  int local_848;
  float local_844;
  float local_840;
  float local_83c;
  float local_838;
  float local_834;
  float local_830;
  int local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  float local_810;
  float local_80c;
  undefined **local_808 [10];
  float local_7e0;
  float local_7dc;
  float local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7bc;
  float local_7b8;
  float local_7b4;
  float local_7b0;
  float local_7ac;
  float local_7a8;
  undefined4 local_7a4;
  float local_684;
  float local_680;
  float local_67c;
  float local_678;
  float local_674;
  undefined4 local_670;
  CAnyProjection3D local_65c [780];
  CPerspectiveProjection3D local_350 [428];
  CParallelProjection3D local_1a4 [416];
  CParallelProjection3D *local_4;
  
  bVar7 = (byte)param_1;
  local_85c = *(int *)((int)this + 0x68) >> (bVar7 & 0x1f);
  fVar8 = (float)(*(int *)((int)this + 0x70) >> (bVar7 & 0x1f));
  fVar9 = (float)(*(int *)((int)this + 0x74) >> (bVar7 & 0x1f));
  local_858 = *(int *)((int)this + 0x6c) >> (bVar7 & 0x1f);
  local_82c = *(int *)((int)this + 0x24) + param_1;
  local_88c = *(float *)((int)this + 0xdc) + *(float *)((int)this + 0xe8);
  local_888 = *(float *)((int)this + 0xe0) + *(float *)((int)this + 0xec);
  local_884 = *(float *)((int)this + 0xe4) + *(float *)((int)this + 0xf0);
  fVar4 = (float)(1 << (bVar7 & 0x1f));
  fVar3 = _DAT_36227cf0 * fVar4;
  local_894 = local_888 * fVar3;
  local_890 = local_884 * fVar3;
  local_844 = *(float *)((int)this + 0xd0) + local_88c * fVar3;
  local_840 = *(float *)((int)this + 0xd4) + local_894;
  local_83c = *(float *)((int)this + 0xd8) + local_890;
  local_880 = *(float *)((int)this + 0xdc) * fVar4;
  local_87c = *(float *)((int)this + 0xe0) * fVar4;
  local_848 = *(int *)((int)this + param_1 * 4 + 0x94) + *(int *)((int)this + 0xc0);
  local_878 = *(float *)((int)this + 0xe4) * fVar4;
  local_868 = *(float *)((int)this + 0xe8) * fVar4;
  local_864 = *(float *)((int)this + 0xec) * fVar4;
  local_860 = *(float *)((int)this + 0xf0) * fVar4;
  local_810 = (_DAT_36223384 / fVar4) * *(float *)((int)this + 0x78);
  local_898 = (_DAT_36223384 / fVar4) * *(float *)((int)this + 0x7c);
  local_874 = fVar8;
  local_854 = fVar9;
  if ((*(byte *)(*(int *)((int)this + 0x130) + 0x1c) & 1) == 0) {
    CPerspectiveProjection3D::CPerspectiveProjection3D((CPerspectiveProjection3D *)local_808);
    if ((*(uint *)(*(int *)this + 200) & 0x40000) == 0) {
      local_854 = ((float)((int)fVar8 + local_85c) - local_810) + _DAT_36223384;
      local_850 = ((float)(local_858 + (int)fVar9) - local_898) + _DAT_36223384;
      local_874 = ((float)local_85c - local_810) + _DAT_36223384;
      local_870 = ((float)local_858 - local_898) + _DAT_36223384;
    }
    else {
      local_854 = (float)((int)fVar8 + local_85c) - local_810;
      local_850 = (float)(local_858 + (int)fVar9) - local_898;
      local_874 = (float)local_85c - local_810;
      local_870 = (float)local_858 - local_898;
    }
    pfVar5 = FUN_36069060(&local_828,&local_874,&local_854);
    local_7b4 = *pfVar5;
    local_7b0 = pfVar5[1];
    local_7ac = pfVar5[2];
    local_7a8 = pfVar5[3];
    local_7a4 = 0x3f800000;
    local_7bc = *(undefined4 *)(*(int *)((int)this + 0x130) + 0x38);
    local_7b8 = *(float *)((int)this + 0x80) - *(float *)(*(int *)((int)this + 0x130) + 0x3c);
    local_670 = *(undefined4 *)((int)this + 0x80);
    local_874 = (float)(1 << ((byte)local_82c & 0x1f));
    local_7d4 = *(undefined4 *)((int)this + 0xf4);
    local_7d0 = *(undefined4 *)((int)this + 0xf8);
    local_674 = (float)(int)local_874 * _DAT_362265a4;
    local_814 = *(undefined4 *)((int)this + 0xfc);
    local_828 = *(undefined4 *)((int)this + 0xc4);
    local_7dc = *(float *)((int)this + 200);
    local_820 = *(undefined4 *)((int)this + 0xcc);
    local_7e0 = (float)local_828;
    local_7d8 = (float)local_820;
    local_7cc = local_814;
    CAnyProjection3D::CAnyProjection3D(local_65c);
    CPerspectiveProjection3D::operator=(local_350,(CPerspectiveProjection3D *)local_808);
    local_4 = (CParallelProjection3D *)local_350;
    local_874 = *(float *)(*(int *)this + 200);
    *(uint *)(*(int *)this + 200) = (uint)local_874 | 0x20000;
    iVar1 = *(int *)((int)this + 0x130);
    if (*(char *)(iVar1 + 0x35) == '\0') {
      local_828 = 0x7f61b1e6;
      local_81c = 0xff61b1e6;
      local_824 = 0x7f61b1e6;
      local_818 = 0xff61b1e6;
      local_820 = 0x7f61b1e6;
      local_814 = 0xff61b1e6;
      uVar11 = *(undefined1 *)(iVar1 + 0x35);
      uVar10 = *(undefined4 *)(iVar1 + 0xc);
    }
    else {
      iVar2 = *(int *)this;
      local_828 = *(undefined4 *)(iVar2 + 0x194);
      local_824 = *(undefined4 *)(iVar2 + 0x198);
      local_820 = *(undefined4 *)(iVar2 + 0x19c);
      local_81c = *(undefined4 *)(iVar2 + 0x1a0);
      local_818 = *(undefined4 *)(iVar2 + 0x1a4);
      local_814 = *(undefined4 *)(iVar2 + 0x1a8);
      iVar2 = *(int *)(iVar1 + 0xc);
      local_844 = *(float *)(iVar2 + 0x3c);
      local_840 = *(float *)(iVar2 + 0x40);
      local_83c = *(float *)(iVar2 + 0x44);
      local_838 = local_844;
      local_834 = local_840;
      local_830 = local_83c;
      FUN_360b1850(&local_828,&local_844);
      uVar11 = *(undefined1 *)(iVar1 + 0x35);
      uVar10 = 0;
    }
    uVar6 = FUN_3611ead0(*(undefined4 *)((int)this + 0xc),uVar10,local_65c,&local_828,local_848,
                         fVar8,fVar9,uVar11);
    *(float *)(*(int *)this + 200) = local_874;
    return uVar6 & 0xc;
  }
  CProjection3D::CProjection3D((CProjection3D *)local_808);
  local_810 = (float)((int)fVar8 + local_85c);
  local_80c = (float)(local_858 + (int)fVar9);
  local_898 = (float)local_85c;
  local_808[0] = &CParallelProjection3D::_vftable_;
  local_894 = (float)local_858;
  pfVar5 = FUN_36069060(&local_828,&local_898,&local_810);
  local_7b4 = *pfVar5;
  local_7b0 = pfVar5[1];
  local_7ac = pfVar5[2];
  local_7a8 = pfVar5[3];
  local_82c = 1 << ((byte)local_82c & 0x1f);
  local_7a4 = 0x3f800000;
  local_7bc = 0;
  local_67c = _DAT_362280ec / (float)local_82c;
  local_678 = local_67c;
  AnglesToDirectionVector
            ((Vector<float,3> *)(*(int *)(*(int *)((int)this + 0x130) + 0xc) + 0x48),
             (Vector<float,3> *)&local_88c);
  iVar1 = **(int **)this;
  if ((float)_DAT_36238ba8 <
      local_88c * *(float *)(iVar1 + 4) +
      local_884 * *(float *)(iVar1 + 0xc) + local_888 * *(float *)(iVar1 + 8)) {
    return 4;
  }
  fVar3 = local_88c * *(float *)((int)this + 0x10c) +
          local_884 * *(float *)((int)this + 0x114) + local_888 * *(float *)((int)this + 0x110);
  fVar4 = local_884 * *(float *)((int)this + 0x120) +
          local_888 * *(float *)((int)this + 0x11c) + local_88c * *(float *)((int)this + 0x118);
  local_7d4 = *(undefined4 *)((int)this + 0x100);
  local_884 = local_884 * *(float *)((int)this + 300) +
              local_888 * *(float *)((int)this + 0x128) + local_88c * *(float *)((int)this + 0x124);
  local_7d0 = *(undefined4 *)((int)this + 0x104);
  local_814 = *(undefined4 *)((int)this + 0x108);
  local_684 = fVar3 * (_DAT_36227d20 / local_884) * local_67c;
  local_680 = local_678 * fVar4 * (_DAT_36227d20 / local_884);
  local_890 = (float)(int)local_854 * _DAT_36227cf0;
  local_898 = local_868 * local_890;
  local_894 = local_864 * local_890;
  local_890 = local_860 * local_890;
  local_86c = (float)(int)local_874 * _DAT_36227cf0 - _DAT_36227cf0;
  local_874 = local_880 * local_86c;
  local_870 = local_87c * local_86c;
  local_86c = local_878 * local_86c;
  local_880 = local_844 + local_874;
  local_87c = local_840 + local_870;
  local_878 = local_83c + local_86c;
  local_844 = local_880 + local_898;
  local_840 = local_87c + local_894;
  local_83c = local_878 + local_890;
  local_88c = fVar3;
  local_888 = fVar4;
  local_868 = local_874;
  local_864 = local_870;
  local_860 = local_86c;
  local_854 = local_898;
  local_850 = local_894;
  local_84c = local_890;
  local_7e0 = local_844;
  local_7dc = local_840;
  local_7d8 = local_83c;
  local_7cc = local_814;
  CAnyProjection3D::CAnyProjection3D(local_65c);
  CParallelProjection3D::operator=(local_1a4,(CParallelProjection3D *)local_808);
  local_4 = local_1a4;
  local_874 = *(float *)(*(int *)this + 200);
  *(uint *)(*(int *)this + 200) = (uint)local_874 | 0x20000;
  uVar6 = FUN_3611ead0(*(undefined4 *)((int)this + 0xc),0,local_65c,
                       (undefined4 *)(*(int *)this + 0x194),local_848,fVar8,fVar9,
                       *(undefined1 *)(*(int *)((int)this + 0x130) + 0x35));
  *(float *)(*(int *)this + 200) = local_874;
  FUN_36145020(this,param_1);
  return uVar6 & 0xc;
}

