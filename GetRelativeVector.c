
/* public: class Vector<float,3> __thiscall CEntity::GetRelativeVector(class Vector<float,3>) */

void __thiscall CEntity::GetRelativeVector(CEntity *this,float param_2,float param_3,float param_4)

{
  int iVar1;
  float *unaff_retaddr;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 local_3c [20];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
                    /* 0x126f70  2076  ?GetRelativeVector@CEntity@@QAE?AV?$Vector@M$02@@V2@@Z */
  puStack_4c = local_3c;
  iVar1 = (**(code **)(*(int *)this + 100))();
  puStack_4c = *(undefined1 **)(iVar1 + 0xc);
  uStack_48 = *(undefined4 *)(iVar1 + 0x10);
  uStack_44 = *(undefined4 *)(iVar1 + 0x14);
  MakeRotationMatrixFast((Matrix<float,3,3> *)&fStack_28,(Vector<float,3> *)&puStack_4c);
  *unaff_retaddr = param_2 * fStack_28 + param_3 * fStack_24 + param_4 * fStack_20;
  unaff_retaddr[1] = fStack_1c * param_2 + fStack_18 * param_3 + fStack_14 * param_4;
  unaff_retaddr[2] = fStack_10 * param_2 + fStack_c * param_3 + fStack_8 * param_4;
  return;
}

