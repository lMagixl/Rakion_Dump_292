
uint __thiscall FUN_361463b0(void *this,int param_1)

{
  void **ppvVar1;
  CLightSource *pCVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  pCVar2 = *(CLightSource **)(param_1 + 0x18);
  if ((((byte)pCVar2[0x1c] & 2) == 0) || ((*(uint *)(*(int *)this + 200) & 0x8000000) != 0)) {
    return 8;
  }
  *(int *)((int)this + 0x10) = param_1;
  *(CLightSource **)((int)this + 0x130) = pCVar2;
  iVar5 = *(int *)(pCVar2 + 0xc);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(iVar5 + 0x3c);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(iVar5 + 0x40);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(iVar5 + 0x44);
  CBrushShadowMap::FindLightRectangle
            (*(CBrushShadowMap **)((int)this + 4),pCVar2,(CLightRectangle *)&local_1c);
  *(undefined4 *)((int)this + 0x7c) = local_8;
  *(undefined4 *)((int)this + 0x78) = local_c;
  *(undefined4 *)((int)this + 0x80) = local_4;
  *(undefined4 *)((int)this + 0x6c) = local_18;
  *(undefined4 *)((int)this + 0x68) = local_1c;
  *(int *)((int)this + 0x70) = local_14;
  *(int *)((int)this + 0x74) = local_10;
  FUN_3608b220(local_14,local_10,(int *)((int)this + 0x84));
  if ((local_14 != 0) && (local_10 != 0)) {
    *(undefined4 *)(*(int *)((int)this + 0x10) + 0x1c) = local_1c;
    *(undefined4 *)(*(int *)((int)this + 0x10) + 0x20) = local_18;
    *(int *)(*(int *)((int)this + 0x10) + 0x24) = local_14;
    *(int *)(*(int *)((int)this + 0x10) + 0x28) = local_10;
    *(undefined4 *)(*(int *)((int)this + 0x10) + 0x2c) = *(undefined4 *)((int)this + 0x88);
    ppvVar1 = (void **)((int)this + 0xc0);
    pvVar3 = AllocMemory(*(int *)((int)this + 0x88) + 8);
    *ppvVar1 = pvVar3;
    uVar6 = 0xc;
    if ((*(uint *)(*(int *)this + 200) & 0x800000) == 0) {
      uVar6 = FUN_36145a70(this,0);
      uVar6 = uVar6 & 0xc;
      FUN_36143fc0(*ppvVar1,*(int *)((int)this + 0x90));
    }
    else {
      iVar5 = 0;
      if (0 < *(int *)((int)this + 0x84)) {
        do {
          uVar4 = FUN_36145a70(this,iVar5);
          uVar6 = uVar6 & uVar4;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)((int)this + 0x84));
      }
    }
    if ((*(uint *)(*(int *)this + 200) & 0x40000) != 0) {
      FUN_36144950((int)this);
    }
    FUN_36144190((int)this);
    FUN_361440d0(*ppvVar1,*ppvVar1);
    iVar5 = *(int *)((int)this + 0x88) + 7;
    ShrinkMemory(ppvVar1,(int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3);
    *(void **)(param_1 + 0x30) = *ppvVar1;
    DAT_362fdad4 = DAT_362fdad4 + 1;
    DAT_362fdad8 = DAT_362fdad8 + *(int *)((int)this + 0x88);
    return uVar6;
  }
  return 4;
}

