
/* public: void __thiscall CModelObject::GetCurrentFrameBBox(class AABBox<float,3> &) */

void __thiscall CModelObject::GetCurrentFrameBBox(CModelObject *this,AABBox<float,3> *param_1)

{
  undefined4 *puVar1;
  CModelData *pCVar2;
  long lVar3;
  CAnimObject *this_00;
  
                    /* 0xb5b10  1816  ?GetCurrentFrameBBox@CModelObject@@QAEXAAV?$AABBox@M$02@@@Z */
  pCVar2 = GetData(this);
  lVar3 = CAnimObject::GetFrame(this_00);
  puVar1 = (undefined4 *)(*(int *)(pCVar2 + 0x38) + lVar3 * 0x18);
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = puVar1[2];
  *(undefined4 *)(param_1 + 0xc) = puVar1[3];
  *(undefined4 *)(param_1 + 0x10) = puVar1[4];
  *(undefined4 *)(param_1 + 0x14) = puVar1[5];
  return;
}

