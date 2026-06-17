
/* public: void __thiscall CTextureData::CreateEffectTexture(long,long,long,class CTextureData
   *,unsigned long) */

void __thiscall
CTextureData::CreateEffectTexture
          (CTextureData *this,long param_1,long param_2,long param_3,CTextureData *param_4,
          ulong param_5)

{
  int iVar1;
  void *this_00;
  undefined4 *puVar2;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* 0x94a00  1414  ?CreateEffectTexture@CTextureData@@QAEXJJJPAV1@K@Z */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_36212b6d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  CSerial::MarkUsed((CSerial *)param_4);
  (**(code **)(*(int *)this + 8))();
  CAnimData::DefaultAnimation((CAnimData *)this);
  iVar1 = 0x1f;
  if (param_3 / param_1 != 0) {
    for (; (uint)(param_3 / param_1) >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  *(int *)(this + 0x28) = iVar1;
  *(long *)(this + 0x20) = param_1 << ((byte)iVar1 & 0x1f);
  *(undefined4 *)(this + 0x1c) = 0x100;
  *(long *)(this + 0x24) = param_2 << ((byte)iVar1 & 0x1f);
  *(undefined4 *)(this + 0x34) = 1;
  *(undefined4 *)(this + 0x60) = 0;
  *(CTextureData **)(this + 0x74) = param_4;
  Force(param_4,0x100);
  this_00 = (void *)FUN_361bf99c(0x20);
  uStack_4 = 0;
  if (this_00 == (void *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = FUN_3609b660(this_00,this,param_5);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 **)(this + 0x78) = puVar2;
  FUN_360936f0();
  FUN_360937a0();
  ExceptionList = pvStack_c;
  return;
}

