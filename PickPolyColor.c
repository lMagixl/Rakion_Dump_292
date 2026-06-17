
/* public: void __thiscall CModelObject::PickPolyColor(class CDrawPort *,class CProjection3D
   *,long,long,long &,int) */

void __thiscall
CModelObject::PickPolyColor
          (CModelObject *this,CDrawPort *param_1,CProjection3D *param_2,long param_3,long param_4,
          long *param_5,int param_6)

{
  ModelPolygon *pMVar1;
  CModelData *pCVar2;
  int iVar3;
  int extraout_EDX;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* 0xb8fa0  2763
                       ?PickPolyColor@CModelObject@@QAEXPAVCDrawPort@@PAVCProjection3D@@JJAAJH@Z */
  (*(code *)**(undefined4 **)param_2)();
  fStack_24 = (float)param_3;
  fStack_20 = (float)((*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0xc)) - param_4);
  uStack_1c = 0;
  (**(code **)(*(int *)param_2 + 0x30))(&fStack_24,&uStack_18);
  pMVar1 = PolygonHit(this,fStack_20,uStack_1c,uStack_18,uStack_14,uStack_10,uStack_c,
                      *(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                      *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                      *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                      *(undefined4 *)(this + 0x94),&stack0x00000000);
  if (pMVar1 != (ModelPolygon *)0x0) {
    pCVar2 = GetData(this);
    iVar3 = *(int *)(extraout_EDX + 0x10) * 0x70 +
            *(int *)(pCVar2 + *(int *)(this + 0x94) * 0x60 + 0xfc);
    if (param_4 != 0) {
      iVar3 = FUN_360b4650(*(uint *)(iVar3 + 0x40));
      *(int *)param_3 = iVar3;
      return;
    }
    iVar3 = FUN_360b4650(*(uint *)(iVar3 + 0x44));
    *(int *)param_3 = iVar3;
  }
  return;
}

