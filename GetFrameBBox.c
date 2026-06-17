
/* public: class AABBox<float,3> __thiscall CModelObject::GetFrameBBox(long) */

void __thiscall CModelObject::GetFrameBBox(CModelObject *this,long param_1)

{
  undefined4 *puVar1;
  CModelData *pCVar2;
  int in_stack_00000008;
  
                    /* 0xb5570  1890  ?GetFrameBBox@CModelObject@@QAE?AV?$AABBox@M$02@@J@Z */
  pCVar2 = GetData(this);
  puVar1 = (undefined4 *)(*(int *)(pCVar2 + 0x38) + in_stack_00000008 * 0x18);
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = puVar1[1];
  *(undefined4 *)(param_1 + 8) = puVar1[2];
  *(undefined4 *)(param_1 + 0xc) = puVar1[3];
  *(undefined4 *)(param_1 + 0x10) = puVar1[4];
  *(undefined4 *)(param_1 + 0x14) = puVar1[5];
  return;
}

