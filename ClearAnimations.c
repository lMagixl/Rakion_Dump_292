
/* public: void __thiscall CModelData::ClearAnimations(void) */

void __thiscall CModelData::ClearAnimations(CModelData *this)

{
                    /* 0xb62b0  1255  ?ClearAnimations@CModelData@@QAEXXZ */
  CAnimData::Clear((CAnimData *)this);
  if (*(int *)(this + 0x2c) != 0) {
    operator_delete__(*(void **)(this + 0x30));
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    operator_delete__(*(void **)(this + 0x28));
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
  }
  if (*(int *)(this + 0x34) != 0) {
    operator_delete__(*(void **)(this + 0x38));
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
  }
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

