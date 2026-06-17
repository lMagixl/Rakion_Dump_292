
/* public: void __thiscall CEntity::WriteEntityPointer_t(class CTStream *,class CEntityPointer) */

void __thiscall CEntity::WriteEntityPointer_t(undefined4 param_1_00,int param_1,CEntity *param_3)

{
  int iVar1;
  
                    /* 0x1329d0  3966
                       ?WriteEntityPointer_t@CEntity@@QAEXPAVCTStream@@VCEntityPointer@@@Z */
  if (param_3 == (CEntity *)0x0) {
    **(undefined4 **)(param_1 + 0x14) = 0xffffffff;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
    return;
  }
  **(undefined4 **)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x1c);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 4;
  iVar1 = *(int *)(param_3 + 0x18);
  *(int *)(param_3 + 0x18) = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    DeleteSelf(param_3);
  }
  return;
}

