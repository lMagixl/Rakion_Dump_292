
/* public: virtual void __thiscall CBrushShadowMap::MixLayers(long,long,int) */

void __thiscall
CBrushShadowMap::MixLayers(CBrushShadowMap *this,long param_1,long param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 local_68 [104];
  
                    /* 0x1480d0  2650  ?MixLayers@CBrushShadowMap@@UAEXJJH@Z */
  iVar4 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar5 = (undefined4 *)CTimer::GetHighPrecisionTimer(_pTimer);
    *(undefined4 *)(iVar4 + 0x1f0) = *puVar5;
    *(undefined4 *)(iVar4 + 500) = puVar5[1];
  }
  FUN_36148000(local_68,(byte *)this,param_1,param_2,param_3);
  iVar4 = DAT_362bef7c;
  if (1 < _iStatsMode) {
    puVar6 = (uint *)CTimer::GetHighPrecisionTimer(_pTimer);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar7 = uVar1 - *(uint *)(iVar4 + 0x1f0);
    uVar3 = *(uint *)(iVar4 + 0x1f8);
    *(uint *)(iVar4 + 0x1f8) = uVar3 + uVar7;
    *(uint *)(iVar4 + 0x1fc) =
         *(int *)(iVar4 + 0x1fc) +
         ((uVar2 - *(int *)(iVar4 + 500)) - (uint)(uVar1 < *(uint *)(iVar4 + 0x1f0))) +
         (uint)CARRY4(uVar3,uVar7);
    *(undefined4 *)(iVar4 + 0x1f0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 500) = 0xffffffff;
  }
  return;
}

